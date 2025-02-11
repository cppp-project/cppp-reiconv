/**
 * @file ucs4.h
 * @brief UCS-4
 * @copyright Copyright (C) 1999-2024 Free Software Foundation, Inc.
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

#ifndef _UCS4_H_
#define _UCS4_H_

#include "reiconv_defines.h"

#include <limits.h>

/* Here we accept FFFE0000/0000FEFF marks as endianness indicators everywhere
   in the stream, not just at the beginning. The default is big-endian. */
/* The state is 0 if big-endian, 1 if little-endian. */
static int ucs4_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    state_t state = conv->ibyteorder;
    int count = 0;
    for (; n >= 4 && count <= RET_COUNT_MAX && count <= INT_MAX - 4;)
    {
        ucs4_t wc = (state ? (ucs4_t)s[0] + ((ucs4_t)s[1] << 8) + ((ucs4_t)s[2] << 16) + ((ucs4_t)s[3] << 24)
                           : ((ucs4_t)s[0] << 24) + ((ucs4_t)s[1] << 16) + ((ucs4_t)s[2] << 8) + (ucs4_t)s[3]);
        if (wc == 0x0000feff)
        {
        }
        else if (wc == 0xfffe0000u)
        {
            state ^= 1;
        }
        else if (wc <= 0x7fffffff)
        {
            *pwc = wc;
            conv->ibyteorder = state;
            return count + 4;
        }
        else
        {
            conv->ibyteorder = state;
            return RET_SHIFT_ILSEQ(count);
        }
        s += 4;
        n -= 4;
        count += 4;
    }
    conv->ibyteorder = state;
    return RET_TOOFEW(count);
}

/* But we output UCS-4 in big-endian order, without byte-order mark. */
static int ucs4_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    if (wc <= 0x7fffffff)
    {
        if (n >= 4)
        {
            r[0] = (unsigned char)(wc >> 24);
            r[1] = (unsigned char)(wc >> 16);
            r[2] = (unsigned char)(wc >> 8);
            r[3] = (unsigned char)wc;
            return 4;
        }
        else
            return RET_TOOSMALL;
    }
    else
        return RET_ILUNI;
}

#endif /* _UCS4_H_ */
