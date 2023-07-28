/*
 * Copyright (C) 1999-2002, 2016 Free Software Foundation, Inc.
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

/*
 * CP1162
 */

static int
cp1162_mbtowc (conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
  unsigned char c = *s;
  if (c < 0x80) {
    *pwc = (ucs4_t) c;
    return 1;
  }
  else {
    unsigned short wc = cp874_2uni[c-0x80];
    if (wc != 0xfffd) {
      *pwc = (ucs4_t) wc;
      return 1;
    }
    if (c < 0xa0) {
      *pwc = (ucs4_t) c;
      return 1;
    }
  }
  return RET_ILSEQ;
}

static int
cp1162_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  unsigned char c = 0;
  if (wc < 0x0080) {
    *r = wc;
    return 1;
  }
  else if (wc >= 0x0080 && wc < 0x00a0 && cp874_2uni[wc-0x0080] == 0xfffd)
    c = wc;
  else if (wc == 0x00a0)
    c = 0xa0;
  else if (wc >= 0x0e00 && wc < 0x0e60)
    c = cp874_page0e[wc-0x0e00];
  else if (wc >= 0x2010 && wc < 0x2028)
    c = cp874_page20[wc-0x2010];
  else if (wc == 0x20ac)
    c = 0x80;
  if (c != 0) {
    *r = c;
    return 1;
  }
  return RET_ILUNI;
}
