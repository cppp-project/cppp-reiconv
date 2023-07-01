/*
 * Copyright (C) 1999-2001, 2016 Free Software Foundation, Inc.
 * This file is part of the GNU LIBICONV Library.
 *
 * The GNU LIBICONV Library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 *
 * The GNU LIBICONV Library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the GNU LIBICONV Library; see the file COPYING.
 * If not, see <https://www.gnu.org/licenses/>.
 */

/*
 * MacHebrew
 */

static const unsigned short mac_hebrew_2uni[128] = {
  /* 0x80 */
  0x00c4, 0xfb1f, 0x00c7, 0x00c9, 0x00d1, 0x00d6, 0x00dc, 0x00e1,
  0x00e0, 0x00e2, 0x00e4, 0x00e3, 0x00e5, 0x00e7, 0x00e9, 0x00e8,
  /* 0x90 */
  0x00ea, 0x00eb, 0x00ed, 0x00ec, 0x00ee, 0x00ef, 0x00f1, 0x00f3,
  0x00f2, 0x00f4, 0x00f6, 0x00f5, 0x00fa, 0x00f9, 0x00fb, 0x00fc,
  /* 0xa0 */
  0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x20aa, 0xfffd,
  0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd,
  /* 0xb0 */
  0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd,
  0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd,
  /* 0xc0 */
  0xfffd, 0x201e, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x05bc, 0xfb4b,
  0xfb35, 0x2026, 0x00a0, 0x05b8, 0x05b7, 0x05b5, 0x05b6, 0x05b4,
  /* 0xd0 */
  0x2013, 0x2014, 0x201c, 0x201d, 0x2018, 0x2019, 0xfb2a, 0xfb2b,
  0x05bf, 0x05b0, 0x05b2, 0x05b1, 0x05bb, 0x05b9, 0xfffd, 0x05b3,
  /* 0xe0 */
  0x05d0, 0x05d1, 0x05d2, 0x05d3, 0x05d4, 0x05d5, 0x05d6, 0x05d7,
  0x05d8, 0x05d9, 0x05da, 0x05db, 0x05dc, 0x05dd, 0x05de, 0x05df,
  /* 0xf0 */
  0x05e0, 0x05e1, 0x05e2, 0x05e3, 0x05e4, 0x05e5, 0x05e6, 0x05e7,
  0x05e8, 0x05e9, 0x05ea, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd,
};

static int
mac_hebrew_mbtowc (conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
  unsigned char c = *s;
  if (c < 0x80) {
    *pwc = (ucs4_t) c;
    return 1;
  }
  else if (c >= 0x80) {
    unsigned short wc = mac_hebrew_2uni[c-0x80];
    if (wc != 0xfffd) {
      *pwc = (ucs4_t) wc;
      return 1;
    }
  }
  return RET_ILSEQ;
}

static const unsigned char mac_hebrew_page00[96] = {
  0xca, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa0-0xa7 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa8-0xaf */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xb0-0xb7 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xb8-0xbf */
  0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x82, /* 0xc0-0xc7 */
  0x00, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc8-0xcf */
  0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x85, 0x00, /* 0xd0-0xd7 */
  0x00, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, /* 0xd8-0xdf */
  0x88, 0x87, 0x89, 0x8b, 0x8a, 0x8c, 0x00, 0x8d, /* 0xe0-0xe7 */
  0x8f, 0x8e, 0x90, 0x91, 0x93, 0x92, 0x94, 0x95, /* 0xe8-0xef */
  0x00, 0x96, 0x98, 0x97, 0x99, 0x9b, 0x9a, 0x00, /* 0xf0-0xf7 */
  0x00, 0x9d, 0x9c, 0x9e, 0x9f, 0x00, 0x00, 0x00, /* 0xf8-0xff */
};
static const unsigned char mac_hebrew_page05[64] = {
  0xd9, 0xdb, 0xda, 0xdf, 0xcf, 0xcd, 0xce, 0xcc, /* 0xb0-0xb7 */
  0xcb, 0xdd, 0x00, 0xdc, 0xc6, 0x00, 0x00, 0xd8, /* 0xb8-0xbf */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc0-0xc7 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc8-0xcf */
  0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, /* 0xd0-0xd7 */
  0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, /* 0xd8-0xdf */
  0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, /* 0xe0-0xe7 */
  0xf8, 0xf9, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe8-0xef */
};
static const unsigned char mac_hebrew_page20[24] = {
  0x00, 0x00, 0x00, 0xd0, 0xd1, 0x00, 0x00, 0x00, /* 0x10-0x17 */
  0xd4, 0xd5, 0x00, 0x00, 0xd2, 0xd3, 0xc1, 0x00, /* 0x18-0x1f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc9, 0x00, /* 0x20-0x27 */
};
static const unsigned char mac_hebrew_pagefb[56] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, /* 0x18-0x1f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x20-0x27 */
  0x00, 0x00, 0xd6, 0xd7, 0x00, 0x00, 0x00, 0x00, /* 0x28-0x2f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, /* 0x30-0x37 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x38-0x3f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x40-0x47 */
  0x00, 0x00, 0x00, 0xc7, 0x00, 0x00, 0x00, 0x00, /* 0x48-0x4f */
};

static int
mac_hebrew_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  unsigned char c = 0;
  if (wc < 0x0080) {
    *r = wc;
    return 1;
  }
  else if (wc >= 0x00a0 && wc < 0x0100)
    c = mac_hebrew_page00[wc-0x00a0];
  else if (wc >= 0x05b0 && wc < 0x05f0)
    c = mac_hebrew_page05[wc-0x05b0];
  else if (wc >= 0x2010 && wc < 0x2028)
    c = mac_hebrew_page20[wc-0x2010];
  else if (wc == 0x20aa)
    c = 0xa6;
  else if (wc >= 0xfb18 && wc < 0xfb50)
    c = mac_hebrew_pagefb[wc-0xfb18];
  if (c != 0) {
    *r = c;
    return 1;
  }
  return RET_ILUNI;
}
