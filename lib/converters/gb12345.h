/**
 * @file gb12345.h
 * @brief GB/T 12345-1990
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
 * GB/T 12345-1990 is a traditional chinese counterpart of GB 2312-1986.
 * According to the unicode.org tables:
 * 2146 characters have been changed to their traditional counterpart,
 * 103 characters have been added, no characters have been removed.
 * Therefore we use an auxiliary table, which contains only the changes.
 */

#ifndef _GB12345_H_
#define _GB12345_H_

#include "converters/gb2312.h"
#include "reiconv_defines.h"

#include "gb12345ext.h"

static int gb12345_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    int ret;

    /* The gb12345ext table overrides some entries in the gb2312 table. */
    /* Try the GB12345 extensions -> Unicode table. */
    ret = gb12345ext_mbtowc(conv, pwc, s, n);
    if (ret != RET_ILSEQ)
        return ret;
    /* Try the GB2312 -> Unicode table. */
    ret = gb2312_mbtowc(conv, pwc, s, n);
    return ret;
}

static int gb12345_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    int ret;

    /* The gb12345ext table overrides some entries in the gb2312 table. */
    /* Try the Unicode -> GB12345 extensions table. */
    ret = gb12345ext_wctomb(conv, r, wc, n);
    if (ret != RET_ILUNI)
        return ret;
    /* Try the Unicode -> GB2312 table, and check that the resulting GB2312
       byte sequence is not overridden by the GB12345 extensions table. */
    ret = gb2312_wctomb(conv, r, wc, n);
    if (ret == 2 && gb12345ext_mbtowc(conv, &wc, r, 2) == 2)
        return RET_ILUNI;
    else
        return ret;
}

#endif /* _GB12345_H_ */
