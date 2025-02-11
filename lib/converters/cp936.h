/**
 * @file cp936.h
 * @brief CP936
 * @copyright Copyright (C) 2005, 2016 Free Software Foundation, Inc.
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
 * The IANA has CP936 as an alias of GBK. But GBK is an official Chinese
 * specification, whereas CP936 is de-facto maintained by Microsoft. And,
 * of course, Microsoft modified CP936 since 1999.
 *
 * The differences from GBK are:
 *
 * 1. A single character:
 *
 *    code   CP936.TXT
 *    0x80   0x20AC # EURO SIGN
 *
 * Some variants of CP936 (in JDK, Windows-2000, ICU) also add:
 *
 * 2. Private area mappings:
 *
 *              code                 Unicode
 *    0x{A1..A2}{40..7E,80..A0}  U+E4C6..U+E585
 *    0x{AA..AF,F8..FE}{A1..FE}  U+E000..U+E4C5
 *
 * We add them too because, although there are backward compatibility problems
 * when a character from a private area is moved to an official Unicode code
 * point, they are useful for some people in practice.
 */

#ifndef _CP936_H_
#define _CP936_H_

#include "converters/ces_gbk.h"
#include "reiconv_defines.h"

static int cp936_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    /* Try GBK first. */
    {
        int ret = ces_gbk_mbtowc(conv, pwc, s, n);
        if (ret != RET_ILSEQ)
            return ret;
    }
    /* Then handle the additional mappings. */
    {
        unsigned char c = *s;
        if (c == 0x80)
        {
            *pwc = 0x20ac;
            return 1;
        }
        /* User-defined characters */
        if (c >= 0xa1 && c <= 0xa2)
        {
            if (n < 2)
                return RET_TOOFEW(0);
            {
                unsigned char c2 = s[1];
                if ((c2 >= 0x40 && c2 < 0x7f) || (c2 >= 0x80 && c2 < 0xa1))
                {
                    *pwc = 0xe4c6 + 96 * (c - 0xa1) + (c2 - (c2 >= 0x80 ? 0x41 : 0x40));
                    return 2;
                }
            }
        }
        else if ((c >= 0xaa && c < 0xb0) || (c >= 0xf8 && c < 0xff))
        {
            if (n < 2)
                return RET_TOOFEW(0);
            {
                unsigned char c2 = s[1];
                if (c2 >= 0xa1 && c2 < 0xff)
                {
                    *pwc = 0xe000 + 94 * (c - (c >= 0xf8 ? 0xf2 : 0xaa)) + (c2 - 0xa1);
                    return 2;
                }
            }
        }
    }
    return RET_ILSEQ;
}

static int cp936_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    /* Try GBK first. */
    {
        int ret = ces_gbk_wctomb(conv, r, wc, n);
        if (ret != RET_ILUNI)
            return ret;
    }
    /* Then handle the additional mappings. */
    if (wc >= 0xe000 && wc < 0xe586)
    {
        /* User-defined characters */
        if (n < 2)
            return RET_TOOFEW(0);
        if (wc < 0xe4c6)
        {
            unsigned int i = wc - 0xe000;
            unsigned int c1 = i / 94;
            unsigned int c2 = i % 94;
            r[0] = c1 + (c1 < 6 ? 0xaa : 0xf2);
            r[1] = c2 + 0xa1;
            return 2;
        }
        else
        {
            unsigned int i = wc - 0xe4c6;
            unsigned int c1 = i / 96;
            unsigned int c2 = i % 96;
            r[0] = c1 + 0xa1;
            r[1] = c2 + (c2 < 0x3f ? 0x40 : 0x41);
            return 2;
        }
    }
    else if (wc == 0x20ac)
    {
        r[0] = 0x80;
        return 1;
    }
    return RET_ILUNI;
}

#endif /* _CP936_H_ */
