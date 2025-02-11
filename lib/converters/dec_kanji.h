/**
 * @file dec_kanji.h
 * @brief DEC-KANJI
 * @copyright Copyright (C) 2001, 2016 Free Software Foundation, Inc.
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

#ifndef _DEC_KANJI_H_
#define _DEC_KANJI_H_

#include "converters/ascii.h"
#include "converters/jisx0208.h"
#include "reiconv_defines.h"

#include <stdlib.h>

static int dec_kanji_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    unsigned char c = *s;
    /* Code set 0 (ASCII or JIS X 0201-1976 Roman) */
    if (c < 0x80)
        return ascii_mbtowc(conv, pwc, s, n);
    /* Code set 1 (JIS X 0208) */
    if (c >= 0xa1 && c < 0xf5)
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
                return jisx0208_mbtowc(conv, pwc, buf, 2);
            }
        }
    }
    return RET_ILSEQ;
}

static int dec_kanji_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    unsigned char buf[2];
    int ret;

    /* Code set 0 (ASCII or JIS X 0201-1976 Roman) */
    ret = ascii_wctomb(conv, r, wc, n);
    if (ret != RET_ILUNI)
        return ret;

    /* Code set 1 (JIS X 0208) */
    ret = jisx0208_wctomb(conv, buf, wc, 2);
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

#endif /* _DEC_KANJI_H_ */
