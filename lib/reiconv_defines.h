/**
 * @file reiconv_defines.h
 * @brief Type definitions for the reiconv implementation.
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

#ifndef _REICONV_DEFINES_H_
#define _REICONV_DEFINES_H_

#include <stddef.h>

#include "loop_funcs.h"

/**
 * @brief Our own notion of wide character, as UCS-4, according to ISO-10646-1.
 */
typedef unsigned int ucs4_t;

/**
 * @brief State used by a conversion. 0 denotes the initial state.
 */
typedef unsigned int state_t;

/**
 * @brief reiconv_t is an opaque type. This is the real reiconv_t type.
 */
typedef struct conv_struct *conv_t;

/**
 * @brief Data type for conversion multibyte -> unicode
 */
struct mbtowc_funcs
{
    /**
     * @brief Converts the byte sequence starting at `s` to a wide character. Up to `n` bytes are
     * available at `s`. `n` is >= 1.
     * @param conv Conversion structure.
     * @param pwc Pointer to the wide character.
     * @param s Pointer to the byte sequence.
     * @param n Number of bytes available at `s`.
     * @return Number of bytes consumed (if a wide character was read), or -1 if invalid, or -2 if
     * `n` too small, or RET_SHIFT_ILSEQ(number of bytes consumed) if invalid input after a shift
     * sequence was read, or RET_TOOFEW(number of bytes consumed) if only a shift sequence was read.
     */
    int (*xxx_mbtowc)(conv_t conv, ucs4_t *pwc, unsigned char const *s, size_t n);

    /**
     * @brief Returns to the initial state and stores the pending wide character, if any.
     * @param conv Conversion structure.
     * @param pwc Pointer to the wide character.
     * @return Result is 1 (if a wide character was read) or 0 if none was pending.
     */
    int (*xxx_flushwc)(conv_t conv, ucs4_t *pwc);
};

/* Return code if invalid input after a shift sequence of n bytes was read.
   (xxx_mbtowc) */
#define RET_SHIFT_ILSEQ(n) (-1 - 2 * (n))

/* Return code if invalid. (xxx_mbtowc) */
#define RET_ILSEQ RET_SHIFT_ILSEQ(0)

/* Return code if only a shift sequence of n bytes was read. (xxx_mbtowc) */
#define RET_TOOFEW(n) (-2 - 2 * (n))

/* Retrieve the n from the encoded RET_... value. */
#define DECODE_SHIFT_ILSEQ(r) ((unsigned int)(RET_SHIFT_ILSEQ(0) - (r)) / 2)

#define DECODE_TOOFEW(r) ((unsigned int)(RET_TOOFEW(0) - (r)) / 2)

/* Maximum value of n that may be used as argument to RET_SHIFT_ILSEQ or RET_TOOFEW. */
#define RET_COUNT_MAX ((INT_MAX / 2) - 1)

/**
 * @brief Data type for conversion unicode -> multibyte
 */
struct wctomb_funcs
{
    /**
     * @brief Converts the wide character `wc` to the character set xxx, and stores the result
     * beginning at `r`. Up to `n` bytes may be written at `r`. `n` is >= 1.
     * @param conv Conversion structure.
     * @param r Pointer to the result.
     * @param wc Wide character to convert.
     * @param n Number of bytes available at `r`.
     * @return Number of bytes written, or -1 if invalid, or -2 if `n` too small.
     */
    int (*xxx_wctomb)(conv_t conv, unsigned char *r, ucs4_t wc, size_t n);

    /**
     * @brief Stores a shift sequence returning to the initial state beginning at `r`. Up to `n`
     * bytes may be written at `r`. `n` is >= 0.
     * @param conv Conversion structure.
     * @param r Pointer to the result.
     * @param n Number of bytes available at `r`.
     * @return Number of bytes written, or -2 if `n` too small.
     */
    int (*xxx_reset)(conv_t conv, unsigned char *r, size_t n);
};

/* Return code if invalid. (xxx_wctomb) */
#define RET_ILUNI -1

/* Return code if output buffer is too small. (xxx_wctomb, xxx_reset) */
#define RET_TOOSMALL -2

/**
 * @brief Contents of a conversion descriptor.
 */
struct conv_struct
{
    struct loop_funcs lfuncs;
    /* Input (conversion multibyte -> unicode) */
    int iindex;
    struct mbtowc_funcs ifuncs;
    state_t ibyteorder;
    state_t istate;
    /* Output (conversion unicode -> multibyte) */
    int oindex;
    struct wctomb_funcs ofuncs;
    state_t ostate;
    /* Operation flags */
    int discard_ilseq;
};

/* [CCS = coded character set] [CJKV.INF chapter 3]  */
typedef struct
{
    unsigned short indx; /* Index into big table. */
    unsigned short used; /* Bitmask of used entries. */
} Summary16;

#endif /* _REICONV_DEFINES_H_ */
