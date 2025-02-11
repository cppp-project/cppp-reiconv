/**
 * @file ucs2.h
 * @brief UCS-2
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

#ifndef _UCS2_H_
#define _UCS2_H_

#include "reiconv_defines.h"

#include <limits.h>

/* Here we accept FFFE/FEFF marks as endianness indicators everywhere
   in the stream, not just at the beginning. The default is big-endian. */
/* The state is 0 if big-endian, 1 if little-endian. */
static int ucs2_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    state_t state = conv->ibyteorder;
    int count = 0;
    for (; n >= 2 && count <= RET_COUNT_MAX && count <= INT_MAX - 2;)
    {
        ucs4_t wc = (state ? s[0] + (s[1] << 8) : (s[0] << 8) + s[1]);
        if (wc == 0xfeff)
        {
        }
        else if (wc == 0xfffe)
        {
            state ^= 1;
        }
        else if (wc >= 0xd800 && wc < 0xe000)
        {
            conv->ibyteorder = state;
            return RET_SHIFT_ILSEQ(count);
        }
        else
        {
            *pwc = wc;
            conv->ibyteorder = state;
            return count + 2;
        }
        s += 2;
        n -= 2;
        count += 2;
    }
    conv->ibyteorder = state;
    return RET_TOOFEW(count);
}

/* But we output UCS-2 in big-endian order, without byte-order mark. */
/* RFC 2152 says:
   "ISO/IEC 10646-1:1993(E) specifies that when characters the UCS-2 form are
    serialized as octets, that the most significant octet appear first." */
static int ucs2_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    if (wc < 0x10000 && wc != 0xfffe && !(wc >= 0xd800 && wc < 0xe000))
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
    else
        return RET_ILUNI;
}

#endif /* _UCS2_H_ */
