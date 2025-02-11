/**
 * @file euc_kr.h
 * @brief EUC-KR
 * @copyright Copyright (C) 1999-2001, 2007, 2016 Free Software Foundation, Inc.
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

#ifndef _EUC_KR_H_
#define _EUC_KR_H_

#include "converters/ascii.h"
#include "converters/ksc5601.h"
#include "reiconv_defines.h"
#include <stdlib.h>

/* Specification: RFC 1557 */

static int euc_kr_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    unsigned char c = *s;
    /* Code set 0 (ASCII or KS C 5636-1993) */
    if (c < 0x80)
        return ascii_mbtowc(conv, pwc, s, n);
    /* Code set 1 (KS C 5601-1992, now KS X 1001:2002) */
    if (c >= 0xa1 && c < 0xff)
    {
        if (n < 2)
            return RET_TOOFEW(0);
        {
            unsigned char c2 = s[1];
            if (c2 >= 0xa1 && c2 < 0xff)
            {
                unsigned char buf[2];
                buf[0] = c - 0x80;
                buf[1] = c2 - 0x80;
                return ksc5601_mbtowc(conv, pwc, buf, 2);
            }
            else
                return RET_ILSEQ;
        }
    }
    return RET_ILSEQ;
}

static int euc_kr_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    unsigned char buf[2];
    int ret;

    /* Code set 0 (ASCII or KS C 5636-1993) */
    ret = ascii_wctomb(conv, r, wc, n);
    if (ret != RET_ILUNI)
        return ret;

    /* Code set 1 (KS C 5601-1992, now KS X 1001:2002) */
    ret = ksc5601_wctomb(conv, buf, wc, 2);
    if (ret != RET_ILUNI)
    {
        if (ret != 2)
            abort();
        if (n < 2)
            return RET_TOOSMALL;
        r[0] = buf[0] + 0x80;
        r[1] = buf[1] + 0x80;
        return 2;
    }

    return RET_ILUNI;
}

#endif /* _EUC_KR_H_ */
