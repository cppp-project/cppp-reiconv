/**
 * @file ucs2swapped.h
 * @brief UCS-2-SWAPPED = UCS-2-INTERNAL with inverted endianness
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

#ifndef _UCS2SWAPPED_H_
#define _UCS2SWAPPED_H_

#include "reiconv_defines.h"

#include <stdlib.h>

static int ucs2swapped_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    /* This function assumes that 'unsigned short' has exactly 16 bits. */
    if (sizeof(unsigned short) != 2)
        abort();

    if (n >= 2)
    {
        unsigned short x = *(const unsigned short *)s;
        x = (x >> 8) | (x << 8);
        if (x >= 0xd800 && x < 0xe000)
        {
            return RET_ILSEQ;
        }
        else
        {
            *pwc = x;
            return 2;
        }
    }
    return RET_TOOFEW(0);
}

static int ucs2swapped_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    /* This function assumes that 'unsigned short' has exactly 16 bits. */
    if (sizeof(unsigned short) != 2)
        abort();

    if (wc < 0x10000 && !(wc >= 0xd800 && wc < 0xe000))
    {
        if (n >= 2)
        {
            unsigned short x = wc;
            x = (x >> 8) | (x << 8);
            *(unsigned short *)r = x;
            return 2;
        }
        else
            return RET_TOOSMALL;
    }
    else
        return RET_ILUNI;
}

#endif /* _UCS2SWAPPED_H_ */
