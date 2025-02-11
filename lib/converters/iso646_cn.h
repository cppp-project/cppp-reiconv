/**
 * @file iso646_cn.h
 * @brief ISO646-CN
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

/*
 * also known as GB_1988-80
 */

#ifndef _ISO646_CN_H_
#define _ISO646_CN_H_

#include "reiconv_defines.h"

static int iso646_cn_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    unsigned char c = *s;
    if (c < 0x80)
    {
        if (c == 0x24)
            *pwc = (ucs4_t)0x00a5;
        else if (c == 0x7e)
            *pwc = (ucs4_t)0x203e;
        else
            *pwc = (ucs4_t)c;
        return 1;
    }
    return RET_ILSEQ;
}

static int iso646_cn_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    if (wc < 0x0080 && !(wc == 0x0024 || wc == 0x007e))
    {
        *r = wc;
        return 1;
    }
    if (wc == 0x00a5)
    {
        *r = 0x24;
        return 1;
    }
    if (wc == 0x203e)
    {
        *r = 0x7e;
        return 1;
    }
    return RET_ILUNI;
}

#endif /* _ISO646_CN_H_ */
