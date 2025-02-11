/**
 * @file c99.h
 * @brief C99
 * @copyright Copyright (C) 1999-2002, 2016 Free Software Foundation, Inc.
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
 * This is ASCII with \uXXXX and \UXXXXXXXX escape sequences, denoting Unicode
 * characters. See ISO/IEC 9899:1999, section 6.4.3.
 * The treatment of control characters in the range U+0080..U+009F is not
 * specified; we pass them through unmodified.
 */

#ifndef _C99_H_
#define _C99_H_

#include "reiconv_defines.h"

static int c99_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    unsigned char c;
    ucs4_t wc;
    int i;

    c = s[0];
    if (c < 0xa0)
    {
        if (c != '\\')
        {
            *pwc = c;
            return 1;
        }
        if (n < 2)
            return RET_TOOFEW(0);
        c = s[1];
        if (c == 'u')
        {
            wc = 0;
            for (i = 2; i < 6; i++)
            {
                if (n <= i)
                    return RET_TOOFEW(0);
                c = s[i];
                if (c >= '0' && c <= '9')
                    c -= '0';
                else if (c >= 'A' && c <= 'Z')
                    c -= 'A' - 10;
                else if (c >= 'a' && c <= 'z')
                    c -= 'a' - 10;
                else
                    goto simply_backslash;
                wc |= (ucs4_t)c << (4 * (5 - i));
            }
            if ((wc >= 0x00a0 && !(wc >= 0xd800 && wc < 0xe000)) || wc == 0x0024 || wc == 0x0040 || wc == 0x0060)
            {
                *pwc = wc;
                return 6;
            }
        }
        else if (c == 'U')
        {
            wc = 0;
            for (i = 2; i < 10; i++)
            {
                if (n <= i)
                    return RET_TOOFEW(0);
                c = s[i];
                if (c >= '0' && c <= '9')
                    c -= '0';
                else if (c >= 'A' && c <= 'Z')
                    c -= 'A' - 10;
                else if (c >= 'a' && c <= 'z')
                    c -= 'a' - 10;
                else
                    goto simply_backslash;
                wc |= (ucs4_t)c << (4 * (9 - i));
            }
            if ((wc >= 0x00a0 && !(wc >= 0xd800 && wc < 0xe000)) || wc == 0x0024 || wc == 0x0040 || wc == 0x0060)
            {
                *pwc = wc;
                return 10;
            }
        }
        else
            goto simply_backslash;
    }
    return RET_ILSEQ;
simply_backslash:
    *pwc = '\\';
    return 1;
}

static int c99_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    if (wc < 0xa0)
    {
        *r = wc;
        return 1;
    }
    else
    {
        int result;
        unsigned char u;
        if (wc < 0x10000)
        {
            result = 6;
            u = 'u';
        }
        else
        {
            result = 10;
            u = 'U';
        }
        if (n >= result)
        {
            int count;
            r[0] = '\\';
            r[1] = u;
            r += 2;
            for (count = result - 3; count >= 0; count--)
            {
                unsigned int i = (wc >> (4 * count)) & 0x0f;
                *r++ = (i < 10 ? '0' + i : 'a' - 10 + i);
            }
            return result;
        }
        else
            return RET_TOOSMALL;
    }
}

#endif /* _C99_H_ */
