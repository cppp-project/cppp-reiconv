/*
 * Copyright (C) 1999-2001 Free Software Foundation, Inc.
 * This file is part of the GNU LIBICONV Library.
 *
 * The GNU LIBICONV Library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * The GNU LIBICONV Library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with the GNU LIBICONV Library; see the file COPYING.LIB.
 * If not, write to the Free Software Foundation, Inc., 59 Temple Place -
 * Suite 330, Boston, MA 02111-1307, USA.
 */

/*
 * CNS 11643-1992
 */

/* ISO-2022-CN and EUC-TW use CNS 11643-1992 planes 1 to 7. But all tables we
 * have are for CNS 11643-1992 planes 1,2,3. We use a trick to keep the
 * Unicode -> CNS 11643 table as small as possible (see cns11643_inv.h).
 */

#include "cns11643_1.h"
#include "cns11643_2.h"
#include "cns11643_3.h"
#include "cns11643_inv.h"

/* Returns the plane number (0,1,2) in r[0], the two bytes in r[1],r[2]. */
static int
cns11643_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, int n)
{
  if (n >= 3) {
    int ret = cns11643_inv_wctomb(conv,r+1,wc,2);
    if (ret == RET_ILUNI)
      return RET_ILUNI;
    if (ret != 2) abort();
    r[0] = ((r[1] & 0x80) >> 6) | ((r[2] & 0x80) >> 7);
    r[1] &= 0x7f;
    r[2] &= 0x7f;
    return 3;
  }
  return RET_TOOSMALL;
}
