/**
 * @file ucs4swapped.h
 * @brief UCS-4-SWAPPED = UCS-4-INTERNAL with inverted endianness
 * @copyright Copyright (C) 1999-2000, 2016 Free Software Foundation, Inc.
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

#ifndef _UCS4SWAPPED_H_
#define _UCS4SWAPPED_H_

#include "reiconv_defines.h"

#include <stdlib.h>

static int ucs4swapped_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    /* This function assumes that 'unsigned int' has exactly 32 bits. */
    if (sizeof(unsigned int) != 4)
        abort();

    if (n >= 4)
    {
        unsigned int x = *(const unsigned int *)s;
        x = (x >> 24) | ((x >> 8) & 0xff00) | ((x & 0xff00) << 8) | (x << 24);
        *pwc = x;
        return 4;
    }
    return RET_TOOFEW(0);
}

static int ucs4swapped_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    /* This function assumes that 'unsigned int' has exactly 32 bits. */
    if (sizeof(unsigned int) != 4)
        abort();

    if (n >= 4)
    {
        unsigned int x = wc;
        x = (x >> 24) | ((x >> 8) & 0xff00) | ((x & 0xff00) << 8) | (x << 24);
        *(unsigned int *)r = x;
        return 4;
    }
    else
        return RET_TOOSMALL;
}

#endif /* _UCS4SWAPPED_H_ */
