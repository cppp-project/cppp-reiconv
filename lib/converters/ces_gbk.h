/**
 * @file ces_gbk.h
 * @brief GBK
 * @copyright Copyright (C) 1999-2001, 2005, 2016 Free Software Foundation, Inc.
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

#ifndef _CES_GBK_H_
#define _CES_GBK_H_

#include "converters/ascii.h"
#include "converters/gbk.h"
#include "reiconv_defines.h"

#include <stdlib.h>

static int ces_gbk_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    unsigned char c = *s;

    /* Code set 0 (ASCII or GB 1988-89) */
    if (c < 0x80)
        return ascii_mbtowc(conv, pwc, s, n);
    /* Code set 1 (GBK) */
    if (c >= 0x81 && c < 0xff)
    {
        if (n < 2)
            return RET_TOOFEW(0);
        return gbk_mbtowc(conv, pwc, s, 2);
    }
    return RET_ILSEQ;
}

static int ces_gbk_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    unsigned char buf[2];
    int ret;

    /* Code set 0 (ASCII or GB 1988-89) */
    ret = ascii_wctomb(conv, r, wc, n);
    if (ret != RET_ILUNI)
        return ret;

    /* Code set 1 (GBK) */
    ret = gbk_wctomb(conv, buf, wc, 2);
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

#endif /* _CES_GBK_H_ */
