/**
 * @file ces_big5.h
 * @brief BIG-5
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

#ifndef _CES_BIG5_H_
#define _CES_BIG5_H_

#include "converters/ascii.h"
#include "converters/big5.h"
#include "reiconv_defines.h"

#include <stdlib.h>

static int ces_big5_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    unsigned char c = *s;
    /* Code set 0 (ASCII) */
    if (c < 0x80)
        return ascii_mbtowc(conv, pwc, s, n);
    /* Code set 1 (BIG5) */
    if (c >= 0xa1 && c < 0xff)
    {
        if (n < 2)
            return RET_TOOFEW(0);
        {
            unsigned char c2 = s[1];
            if ((c2 >= 0x40 && c2 < 0x7f) || (c2 >= 0xa1 && c2 < 0xff))
                return big5_mbtowc(conv, pwc, s, 2);
            else
                return RET_ILSEQ;
        }
    }
    return RET_ILSEQ;
}

static int ces_big5_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    unsigned char buf[2];
    int ret;

    /* Code set 0 (ASCII) */
    ret = ascii_wctomb(conv, r, wc, n);
    if (ret != RET_ILUNI)
        return ret;

    /* Code set 1 (BIG5) */
    ret = big5_wctomb(conv, buf, wc, 2);
    if (ret != RET_ILUNI)
    {
        if (ret != 2)
            abort();
        if (n < 2)
            return RET_TOOSMALL;
        r[0] = buf[0];
        r[1] = buf[1];
        return 2;
    }

    return RET_ILUNI;
}

#endif /* _CES_BIG5_H_ */
