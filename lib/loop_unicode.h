/**
 * @file loop_unicode.h
 * @brief The conversion loop via Unicode as a pivot encoding.
 * @copyright Copyright (C) 1999-2003, 2005-2006, 2008 Free Software Foundation, Inc.
 * @copyright Copyright (C) 2024 The C++ Plus Project.
 */
/*
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
 * License along with the cppp-reiconv library; see the file LICENSE.
 * If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _LOOPS_UNICODE_H_
#define _LOOPS_UNICODE_H_

#include "encoding_indexes.h"
#include "reiconv_defines.h"
#include <cppp/reiconv.h>

#include <errno.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

static size_t unicode_loop_convert(reiconv_t icd, const char **inbuf, size_t *inbytesleft, char **outbuf,
                                   size_t *outbytesleft)
{
    conv_t cd = (conv_t)icd;
    size_t result = 0;
    const unsigned char *inptr = (const unsigned char *)*inbuf;
    size_t inleft = *inbytesleft;
    unsigned char *outptr = (unsigned char *)*outbuf;
    size_t outleft = *outbytesleft;
    while (inleft > 0)
    {
        state_t last_istate = cd->istate;
        ucs4_t wc;
        int incount;
        int outcount;
        incount = cd->ifuncs.xxx_mbtowc(cd, &wc, inptr, inleft);
        if (incount < 0)
        {
            if ((unsigned int)(-1 - incount) % 2 == (unsigned int)(-1 - RET_ILSEQ) % 2)
            {
                /* Case 1: invalid input, possibly after a shift sequence */
                incount = DECODE_SHIFT_ILSEQ(incount);
                if (cd->discard_ilseq)
                {
                    switch (cd->iindex)
                    {
                    case ei_ucs4:
                    case ei_ucs4be:
                    case ei_ucs4le:
                    case ei_utf32:
                    case ei_utf32be:
                    case ei_utf32le:
                    case ei_ucs4internal:
                    case ei_ucs4swapped:
                        incount += 4;
                        break;
                    case ei_ucs2:
                    case ei_ucs2be:
                    case ei_ucs2le:
                    case ei_utf16:
                    case ei_utf16be:
                    case ei_utf16le:
                    case ei_ucs2internal:
                    case ei_ucs2swapped:
                        incount += 2;
                        break;
                    default:
                        incount += 1;
                        break;
                    }
                    goto outcount_zero;
                }
                inptr += incount;
                inleft -= incount;
                errno = EILSEQ;
                result = -1;
                break;
            }
            if (incount == RET_TOOFEW(0))
            {
                /* Case 2: not enough bytes available to detect anything */
                errno = EINVAL;
                result = -1;
                break;
            }
            /* Case 3: k bytes read, but only a shift sequence */
            incount = DECODE_TOOFEW(incount);
        }
        else
        {
            /* Case 4: k bytes read, making up a wide character */
            if (outleft == 0)
            {
                cd->istate = last_istate;
                errno = E2BIG;
                result = -1;
                break;
            }
            outcount = cd->ofuncs.xxx_wctomb(cd, outptr, wc, outleft);
            if (outcount != RET_ILUNI)
                goto outcount_ok;
            /* Handle Unicode tag characters (range U+E0000..U+E007F). */
            if ((wc >> 7) == (0xe0000 >> 7))
                goto outcount_zero;
            result++;
            if (cd->discard_ilseq)
            {
                outcount = 0;
                goto outcount_ok;
            }
            outcount = cd->ofuncs.xxx_wctomb(cd, outptr, 0xFFFD, outleft);
            if (outcount != RET_ILUNI)
                goto outcount_ok;
            cd->istate = last_istate;
            errno = EILSEQ;
            result = -1;
            break;
        outcount_ok:
            if (outcount < 0)
            {
                cd->istate = last_istate;
                errno = E2BIG;
                result = -1;
                break;
            }
            if (!(outcount <= outleft))
                abort();
            outptr += outcount;
            outleft -= outcount;
        }
    outcount_zero:
        if (!(incount <= inleft))
            abort();
        inptr += incount;
        inleft -= incount;
    }
    *inbuf = (const char *)inptr;
    *inbytesleft = inleft;
    *outbuf = (char *)outptr;
    *outbytesleft = outleft;
    return result;
}

static size_t unicode_loop_reset(reiconv_t icd, char **outbuf, size_t *outbytesleft)
{
    conv_t cd = (conv_t)icd;
    if (outbuf == NULL || *outbuf == NULL)
    {
        /* Reset the states. */
        memset(&cd->istate, '\0', sizeof(state_t));
        memset(&cd->ostate, '\0', sizeof(state_t));
        return 0;
    }
    else
    {
        size_t result = 0;
        if (cd->ifuncs.xxx_flushwc)
        {
            state_t last_istate = cd->istate;
            ucs4_t wc;
            if (cd->ifuncs.xxx_flushwc(cd, &wc))
            {
                unsigned char *outptr = (unsigned char *)*outbuf;
                size_t outleft = *outbytesleft;
                int outcount = cd->ofuncs.xxx_wctomb(cd, outptr, wc, outleft);
                if (outcount != RET_ILUNI)
                    goto outcount_ok;
                /* Handle Unicode tag characters (range U+E0000..U+E007F). */
                if ((wc >> 7) == (0xe0000 >> 7))
                    goto outcount_zero;
                result++;
                if (cd->discard_ilseq)
                {
                    outcount = 0;
                    goto outcount_ok;
                }
                outcount = cd->ofuncs.xxx_wctomb(cd, outptr, 0xFFFD, outleft);
                if (outcount != RET_ILUNI)
                    goto outcount_ok;
                cd->istate = last_istate;
                errno = EILSEQ;
                return -1;
            outcount_ok:
                if (outcount < 0)
                {
                    cd->istate = last_istate;
                    errno = E2BIG;
                    return -1;
                }
                if (!(outcount <= outleft))
                    abort();
                outptr += outcount;
                outleft -= outcount;
            outcount_zero:
                *outbuf = (char *)outptr;
                *outbytesleft = outleft;
            }
        }
        if (cd->ofuncs.xxx_reset)
        {
            unsigned char *outptr = (unsigned char *)*outbuf;
            size_t outleft = *outbytesleft;
            int outcount = cd->ofuncs.xxx_reset(cd, outptr, outleft);
            if (outcount < 0)
            {
                errno = E2BIG;
                return -1;
            }
            if (!(outcount <= outleft))
                abort();
            *outbuf = (char *)(outptr + outcount);
            *outbytesleft = outleft - outcount;
        }
        memset(&cd->istate, '\0', sizeof(state_t));
        memset(&cd->ostate, '\0', sizeof(state_t));
        return result;
    }
}

#endif /* _LOOPS_UNICODE_H_ */
