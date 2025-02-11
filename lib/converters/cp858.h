/**
 * @file cp858.h
 * @brief CP858
 * @copyright Copyright (C) 1999-2002, 2016 Free Software Foundation, Inc.
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

#ifndef _CP858_H_
#define _CP858_H_

#include "converters/cp850.h"
#include "reiconv_defines.h"

static int cp858_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    unsigned char c = *s;
    if (c < 0x80)
        *pwc = (ucs4_t)c;
    else if (c == 0xd5)
        *pwc = 0x20ac;
    else
        *pwc = (ucs4_t)cp850_2uni[c - 0x80];
    return 1;
}

static int cp858_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    unsigned char c = 0;
    if (wc < 0x0080)
    {
        *r = wc;
        return 1;
    }
    else if (wc >= 0x00a0 && wc < 0x0100)
        c = cp850_page00[wc - 0x00a0];
    else if (wc == 0x0192)
        c = 0x9f;
    else if (wc == 0x2017)
        c = 0xf2;
    else if (wc == 0x20ac)
        c = 0xd5;
    else if (wc >= 0x2500 && wc < 0x25a8)
        c = cp850_page25[wc - 0x2500];
    if (c != 0)
    {
        *r = c;
        return 1;
    }
    return RET_ILUNI;
}

#endif /* _CP858_H_ */
