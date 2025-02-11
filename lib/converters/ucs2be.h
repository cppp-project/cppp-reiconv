/**
 * @file ucs2be.h
 * @brief UCS-2BE = UCS-2 big endian
 * @copyright Copyright (C) 1999-2001, 2016 Free Software Foundation, Inc.
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

#ifndef _UCS2BE_H_
#define _UCS2BE_H_

#include "reiconv_defines.h"

static int ucs2be_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    if (n >= 2)
    {
        if (s[0] >= 0xd8 && s[0] < 0xe0)
        {
            return RET_ILSEQ;
        }
        else
        {
            *pwc = (s[0] << 8) + s[1];
            return 2;
        }
    }
    return RET_TOOFEW(0);
}

static int ucs2be_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    if (wc < 0x10000 && !(wc >= 0xd800 && wc < 0xe000))
    {
        if (n >= 2)
        {
            r[0] = (unsigned char)(wc >> 8);
            r[1] = (unsigned char)wc;
            return 2;
        }
        else
            return RET_TOOSMALL;
    }
    return RET_ILUNI;
}

#endif /* _UCS2BE_H_ */
