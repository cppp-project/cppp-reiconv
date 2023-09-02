/*
 * Copyright (C) 1999-2003, 2005-2006, 2008 Free Software Foundation, Inc.
 * This file is part of the cppp-reiconv library.
 *
 * The cppp-reiconv library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * The cppp-reiconv library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the cppp-reiconv library; see the file COPYING.
 * If not, see <https://www.gnu.org/licenses/>.
 */

/* This file defines the conversion loop via Unicode as a pivot encoding. */


struct uc_to_mb_fallback_locals {
  unsigned char* l_outbuf;
  size_t l_outbytesleft;
  int l_errno;
};

static void uc_to_mb_write_replacement (const char *buf, size_t buflen,
                                        void* callback_arg)
{
  struct uc_to_mb_fallback_locals * plocals =
    (struct uc_to_mb_fallback_locals *) callback_arg;
  /* Do nothing if already encountered an error in a previous call. */
  if (plocals->l_errno == 0) {
    /* Attempt to copy the passed buffer to the output buffer. */
    if (plocals->l_outbytesleft < buflen)
      plocals->l_errno = E2BIG;
    else {
      memcpy(plocals->l_outbuf, buf, buflen);
      plocals->l_outbuf += buflen;
      plocals->l_outbytesleft -= buflen;
    }
  }
}

struct mb_to_uc_fallback_locals {
  conv_t l_cd;
  unsigned char* l_outbuf;
  size_t l_outbytesleft;
  int l_errno;
};

static void mb_to_uc_write_replacement (const unsigned int *buf, size_t buflen,
                                        void* callback_arg)
{
  struct mb_to_uc_fallback_locals * plocals =
    (struct mb_to_uc_fallback_locals *) callback_arg;
  /* Do nothing if already encountered an error in a previous call. */
  if (plocals->l_errno == 0) {
    /* Attempt to convert the passed buffer to the target encoding. */
    conv_t cd = plocals->l_cd;
    unsigned char* outptr = plocals->l_outbuf;
    size_t outleft = plocals->l_outbytesleft;
    for (; buflen > 0; buf++, buflen--) {
      ucs4_t wc = *buf;
      int outcount;
      if (outleft == 0) {
        plocals->l_errno = E2BIG;
        break;
      }
      outcount = cd->ofuncs.xxx_wctomb(cd,outptr,wc,outleft);
      if (outcount != RET_ILUNI)
        goto outcount_ok;
      /* Handle Unicode tag characters (range U+E0000..U+E007F). */
      if ((wc >> 7) == (0xe0000 >> 7))
        goto outcount_zero;
      if (cd->discard_ilseq) {
        outcount = 0;
        goto outcount_ok;
      }
      else if (cd->fallbacks.uc_to_mb_fallback != NULL) {
        struct uc_to_mb_fallback_locals locals;
        locals.l_outbuf = outptr;
        locals.l_outbytesleft = outleft;
        locals.l_errno = 0;
        cd->fallbacks.uc_to_mb_fallback(wc,
                                        uc_to_mb_write_replacement,
                                        &locals,
                                        cd->fallbacks.data);
        if (locals.l_errno != 0) {
          plocals->l_errno = locals.l_errno;
          break;
        }
        outptr = locals.l_outbuf;
        outleft = locals.l_outbytesleft;
        outcount = 0;
        goto outcount_ok;
      }
      outcount = cd->ofuncs.xxx_wctomb(cd,outptr,0xFFFD,outleft);
      if (outcount != RET_ILUNI)
        goto outcount_ok;
      plocals->l_errno = EILSEQ;
      break;
    outcount_ok:
      if (outcount < 0) {
        plocals->l_errno = E2BIG;
        break;
      }
      if (cd->hooks.uc_hook)
        (*cd->hooks.uc_hook)(wc, cd->hooks.data);
      if (!(outcount <= outleft)) abort();
      outptr += outcount; outleft -= outcount;
    outcount_zero: ;
    }
    plocals->l_outbuf = outptr;
    plocals->l_outbytesleft = outleft;
  }
}


static size_t unicode_loop_convert (iconv_t icd,
                                    const char* * inbuf, size_t *inbytesleft,
                                    char* * outbuf, size_t *outbytesleft)
{
  conv_t cd = (conv_t) icd;
  size_t result = 0;
  const unsigned char* inptr = (const unsigned char*) *inbuf;
  size_t inleft = *inbytesleft;
  unsigned char* outptr = (unsigned char*) *outbuf;
  size_t outleft = *outbytesleft;
  while (inleft > 0) {
    state_t last_istate = cd->istate;
    ucs4_t wc;
    int incount;
    int outcount;
    incount = cd->ifuncs.xxx_mbtowc(cd,&wc,inptr,inleft);
    if (incount < 0) {
      if ((unsigned int)(-1-incount) % 2 == (unsigned int)(-1-RET_ILSEQ) % 2) {
        /* Case 1: invalid input, possibly after a shift sequence */
        incount = DECODE_SHIFT_ILSEQ(incount);
        if (cd->discard_ilseq) {
          switch (cd->iindex) {
            case ei_ucs4: case ei_ucs4be: case ei_ucs4le:
            case ei_utf32: case ei_utf32be: case ei_utf32le:
            case ei_ucs4internal: case ei_ucs4swapped:
              incount += 4; break;
            case ei_ucs2: case ei_ucs2be: case ei_ucs2le:
            case ei_utf16: case ei_utf16be: case ei_utf16le:
            case ei_ucs2internal: case ei_ucs2swapped:
              incount += 2; break;
            default:
              incount += 1; break;
          }
          goto outcount_zero;
        }
        else if (cd->fallbacks.mb_to_uc_fallback != NULL) {
          unsigned int incount2;
          struct mb_to_uc_fallback_locals locals;
          switch (cd->iindex) {
            case ei_ucs4: case ei_ucs4be: case ei_ucs4le:
            case ei_utf32: case ei_utf32be: case ei_utf32le:
            case ei_ucs4internal: case ei_ucs4swapped:
              incount2 = 4; break;
            case ei_ucs2: case ei_ucs2be: case ei_ucs2le:
            case ei_utf16: case ei_utf16be: case ei_utf16le:
            case ei_ucs2internal: case ei_ucs2swapped:
              incount2 = 2; break;
            default:
              incount2 = 1; break;
          }
          locals.l_cd = cd;
          locals.l_outbuf = outptr;
          locals.l_outbytesleft = outleft;
          locals.l_errno = 0;
          cd->fallbacks.mb_to_uc_fallback((const char*)inptr+incount, incount2,
                                          mb_to_uc_write_replacement,
                                          &locals,
                                          cd->fallbacks.data);
          if (locals.l_errno != 0) {
            inptr += incount; inleft -= incount;
            errno = locals.l_errno;
            result = -1;
            break;
          }
          incount += incount2;
          outptr = locals.l_outbuf;
          outleft = locals.l_outbytesleft;
          result += 1;
          goto outcount_zero;
        }
        inptr += incount; inleft -= incount;
        errno = EILSEQ;
        result = -1;
        break;
      }
      if (incount == RET_TOOFEW(0)) {
        /* Case 2: not enough bytes available to detect anything */
        errno = EINVAL;
        result = -1;
        break;
      }
      /* Case 3: k bytes read, but only a shift sequence */
      incount = DECODE_TOOFEW(incount);
    } else {
      /* Case 4: k bytes read, making up a wide character */
      if (outleft == 0) {
        cd->istate = last_istate;
        errno = E2BIG;
        result = -1;
        break;
      }
      outcount = cd->ofuncs.xxx_wctomb(cd,outptr,wc,outleft);
      if (outcount != RET_ILUNI)
        goto outcount_ok;
      /* Handle Unicode tag characters (range U+E0000..U+E007F). */
      if ((wc >> 7) == (0xe0000 >> 7))
        goto outcount_zero;
      result++;
      if (cd->discard_ilseq) {
        outcount = 0;
        goto outcount_ok;
      }
      else if (cd->fallbacks.uc_to_mb_fallback != NULL) {
        struct uc_to_mb_fallback_locals locals;
        locals.l_outbuf = outptr;
        locals.l_outbytesleft = outleft;
        locals.l_errno = 0;
        cd->fallbacks.uc_to_mb_fallback(wc,
                                        uc_to_mb_write_replacement,
                                        &locals,
                                        cd->fallbacks.data);
        if (locals.l_errno != 0) {
          cd->istate = last_istate;
          errno = locals.l_errno;
          return -1;
        }
        outptr = locals.l_outbuf;
        outleft = locals.l_outbytesleft;
        outcount = 0;
        goto outcount_ok;
      }
      outcount = cd->ofuncs.xxx_wctomb(cd,outptr,0xFFFD,outleft);
      if (outcount != RET_ILUNI)
        goto outcount_ok;
      cd->istate = last_istate;
      errno = EILSEQ;
      result = -1;
      break;
    outcount_ok:
      if (outcount < 0) {
        cd->istate = last_istate;
        errno = E2BIG;
        result = -1;
        break;
      }
      if (cd->hooks.uc_hook)
        (*cd->hooks.uc_hook)(wc, cd->hooks.data);
      if (!(outcount <= outleft)) abort();
      outptr += outcount; outleft -= outcount;
    }
  outcount_zero:
    if (!(incount <= inleft)) abort();
    inptr += incount; inleft -= incount;
  }
  *inbuf = (const char*) inptr;
  *inbytesleft = inleft;
  *outbuf = (char*) outptr;
  *outbytesleft = outleft;
  return result;
}

static size_t unicode_loop_reset (iconv_t icd,
                                  char* * outbuf, size_t *outbytesleft)
{
  conv_t cd = (conv_t) icd;
  if (outbuf == NULL || *outbuf == NULL) {
    /* Reset the states. */
    memset(&cd->istate,'\0',sizeof(state_t));
    memset(&cd->ostate,'\0',sizeof(state_t));
    return 0;
  } else {
    size_t result = 0;
    if (cd->ifuncs.xxx_flushwc) {
      state_t last_istate = cd->istate;
      ucs4_t wc;
      if (cd->ifuncs.xxx_flushwc(cd, &wc)) {
        unsigned char* outptr = (unsigned char*) *outbuf;
        size_t outleft = *outbytesleft;
        int outcount = cd->ofuncs.xxx_wctomb(cd,outptr,wc,outleft);
        if (outcount != RET_ILUNI)
          goto outcount_ok;
        /* Handle Unicode tag characters (range U+E0000..U+E007F). */
        if ((wc >> 7) == (0xe0000 >> 7))
          goto outcount_zero;
        result++;
        if (cd->discard_ilseq) {
          outcount = 0;
          goto outcount_ok;
        }
        else if (cd->fallbacks.uc_to_mb_fallback != NULL) {
          struct uc_to_mb_fallback_locals locals;
          locals.l_outbuf = outptr;
          locals.l_outbytesleft = outleft;
          locals.l_errno = 0;
          cd->fallbacks.uc_to_mb_fallback(wc,
                                          uc_to_mb_write_replacement,
                                          &locals,
                                          cd->fallbacks.data);
          if (locals.l_errno != 0) {
            cd->istate = last_istate;
            errno = locals.l_errno;
            return -1;
          }
          outptr = locals.l_outbuf;
          outleft = locals.l_outbytesleft;
          outcount = 0;
          goto outcount_ok;
        }
        outcount = cd->ofuncs.xxx_wctomb(cd,outptr,0xFFFD,outleft);
        if (outcount != RET_ILUNI)
          goto outcount_ok;
        cd->istate = last_istate;
        errno = EILSEQ;
        return -1;
      outcount_ok:
        if (outcount < 0) {
          cd->istate = last_istate;
          errno = E2BIG;
          return -1;
        }
        if (cd->hooks.uc_hook)
          (*cd->hooks.uc_hook)(wc, cd->hooks.data);
        if (!(outcount <= outleft)) abort();
        outptr += outcount;
        outleft -= outcount;
      outcount_zero:
        *outbuf = (char*) outptr;
        *outbytesleft = outleft;
      }
    }
    if (cd->ofuncs.xxx_reset) {
      unsigned char* outptr = (unsigned char*) *outbuf;
      size_t outleft = *outbytesleft;
      int outcount = cd->ofuncs.xxx_reset(cd,outptr,outleft);
      if (outcount < 0) {
        errno = E2BIG;
        return -1;
      }
      if (!(outcount <= outleft)) abort();
      *outbuf = (char*) (outptr + outcount);
      *outbytesleft = outleft - outcount;
    }
    memset(&cd->istate,'\0',sizeof(state_t));
    memset(&cd->ostate,'\0',sizeof(state_t));
    return result;
  }
}
