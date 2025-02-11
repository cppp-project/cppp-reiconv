/**
 * @file iso2022_jp1.h
 * @brief ISO-2022-JP-1
 * @copyright Copyright (C) 1999-2001, 2008, 2016 Free Software Foundation, Inc.
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

#ifndef _ISO2022_JP1_H_
#define _ISO2022_JP1_H_

#include "converters/ascii.h"
#include "converters/jisx0201.h"
#include "converters/jisx0208.h"
#include "converters/jisx0212.h"
#include "reiconv_defines.h"
#include <stdlib.h>

/* Specification: RFC 2237 */

#define ESC 0x1b

/*
 * The state can be one of the following values.
 */
#define STATE_ASCII 0
#define STATE_JISX0201ROMAN 1
#define STATE_JISX0208 2
#define STATE_JISX0212 3

static int iso2022_jp1_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    state_t state = conv->istate;
    int count = 0;
    unsigned char c;
    for (;;)
    {
        c = *s;
        if (c == ESC)
        {
            if (n < count + 3)
                goto none;
            if (s[1] == '(')
            {
                if (s[2] == 'B')
                {
                    state = STATE_ASCII;
                    s += 3;
                    count += 3;
                    if (n < count + 1)
                        goto none;
                    continue;
                }
                if (s[2] == 'J')
                {
                    state = STATE_JISX0201ROMAN;
                    s += 3;
                    count += 3;
                    if (n < count + 1)
                        goto none;
                    continue;
                }
                goto ilseq;
            }
            if (s[1] == '$')
            {
                if (s[2] == '@' || s[2] == 'B')
                {
                    /* We don't distinguish JIS X 0208-1978 and JIS X 0208-1983. */
                    state = STATE_JISX0208;
                    s += 3;
                    count += 3;
                    if (n < count + 1)
                        goto none;
                    continue;
                }
                if (s[2] == '(')
                {
                    if (n < count + 4)
                        goto none;
                    if (s[3] == 'D')
                    {
                        state = STATE_JISX0212;
                        s += 4;
                        count += 4;
                        if (n < count + 1)
                            goto none;
                        continue;
                    }
                }
                goto ilseq;
            }
            goto ilseq;
        }
        break;
    }
    switch (state)
    {
    case STATE_ASCII:
        if (c < 0x80)
        {
            int ret = ascii_mbtowc(conv, pwc, s, 1);
            if (ret == RET_ILSEQ)
                goto ilseq;
            if (ret != 1)
                abort();
            conv->istate = state;
            return count + 1;
        }
        else
            goto ilseq;
    case STATE_JISX0201ROMAN:
        if (c < 0x80)
        {
            int ret = jisx0201_mbtowc(conv, pwc, s, 1);
            if (ret == RET_ILSEQ)
                goto ilseq;
            if (ret != 1)
                abort();
            conv->istate = state;
            return count + 1;
        }
        else
            goto ilseq;
    case STATE_JISX0208:
        if (n < count + 2)
            goto none;
        if (s[0] < 0x80 && s[1] < 0x80)
        {
            int ret = jisx0208_mbtowc(conv, pwc, s, 2);
            if (ret == RET_ILSEQ)
                goto ilseq;
            if (ret != 2)
                abort();
            conv->istate = state;
            return count + 2;
        }
        else
            goto ilseq;
    case STATE_JISX0212:
        if (n < count + 2)
            goto none;
        if (s[0] < 0x80 && s[1] < 0x80)
        {
            int ret = jisx0212_mbtowc(conv, pwc, s, 2);
            if (ret == RET_ILSEQ)
                goto ilseq;
            if (ret != 2)
                abort();
            conv->istate = state;
            return count + 2;
        }
        else
            goto ilseq;
    default:
        abort();
    }

none:
    conv->istate = state;
    return RET_TOOFEW(count);

ilseq:
    conv->istate = state;
    return RET_SHIFT_ILSEQ(count);
}

static int iso2022_jp1_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    state_t state = conv->ostate;
    unsigned char buf[2];
    int ret;

    /* Try ASCII. */
    ret = ascii_wctomb(conv, buf, wc, 1);
    if (ret != RET_ILUNI)
    {
        if (ret != 1)
            abort();
        if (buf[0] < 0x80)
        {
            int count = (state == STATE_ASCII ? 1 : 4);
            if (n < count)
                return RET_TOOSMALL;
            if (state != STATE_ASCII)
            {
                r[0] = ESC;
                r[1] = '(';
                r[2] = 'B';
                r += 3;
                state = STATE_ASCII;
            }
            r[0] = buf[0];
            conv->ostate = state;
            return count;
        }
    }

    /* Try JIS X 0201-1976 Roman. */
    ret = jisx0201_wctomb(conv, buf, wc, 1);
    if (ret != RET_ILUNI)
    {
        if (ret != 1)
            abort();
        if (buf[0] < 0x80)
        {
            int count = (state == STATE_JISX0201ROMAN ? 1 : 4);
            if (n < count)
                return RET_TOOSMALL;
            if (state != STATE_JISX0201ROMAN)
            {
                r[0] = ESC;
                r[1] = '(';
                r[2] = 'J';
                r += 3;
                state = STATE_JISX0201ROMAN;
            }
            r[0] = buf[0];
            conv->ostate = state;
            return count;
        }
    }

    /* Try JIS X 0208-1990 in place of JIS X 0208-1978 and JIS X 0208-1983. */
    ret = jisx0208_wctomb(conv, buf, wc, 2);
    if (ret != RET_ILUNI)
    {
        if (ret != 2)
            abort();
        if (buf[0] < 0x80 && buf[1] < 0x80)
        {
            int count = (state == STATE_JISX0208 ? 2 : 5);
            if (n < count)
                return RET_TOOSMALL;
            if (state != STATE_JISX0208)
            {
                r[0] = ESC;
                r[1] = '$';
                r[2] = 'B';
                r += 3;
                state = STATE_JISX0208;
            }
            r[0] = buf[0];
            r[1] = buf[1];
            conv->ostate = state;
            return count;
        }
    }

    /* Try JIS X 0212-1990. */
    ret = jisx0212_wctomb(conv, buf, wc, 2);
    if (ret != RET_ILUNI)
    {
        if (ret != 2)
            abort();
        if (buf[0] < 0x80 && buf[1] < 0x80)
        {
            int count = (state == STATE_JISX0212 ? 2 : 6);
            if (n < count)
                return RET_TOOSMALL;
            if (state != STATE_JISX0212)
            {
                r[0] = ESC;
                r[1] = '$';
                r[2] = '(';
                r[3] = 'D';
                r += 4;
                state = STATE_JISX0212;
            }
            r[0] = buf[0];
            r[1] = buf[1];
            conv->ostate = state;
            return count;
        }
    }

    return RET_ILUNI;
}

static int iso2022_jp1_reset(conv_t conv, unsigned char *r, size_t n)
{
    state_t state = conv->ostate;
    if (state != STATE_ASCII)
    {
        if (n < 3)
            return RET_TOOSMALL;
        r[0] = ESC;
        r[1] = '(';
        r[2] = 'B';
        /* conv->ostate = 0; will be done by the caller */
        return 3;
    }
    else
        return 0;
}

#undef STATE_JISX0212
#undef STATE_JISX0208
#undef STATE_JISX0201ROMAN
#undef STATE_ASCII

#endif /* _ISO2022_JP1_H_ */
