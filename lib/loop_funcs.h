/**
 * @file loop_funcs.h
 * @brief Data type for general conversion loop.
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

#ifndef _LOOP_FUNCS_H_
#define _LOOP_FUNCS_H_

#include <cppp/reiconv.h>

#include <stddef.h>

/**
 * @brief Data type for general conversion loop.
 */
struct loop_funcs
{
    /**
     * @brief Conversion loop.
     * @param icd Conversion descriptor.
     * @param inbuf Pointer to the input buffer.
     * @param inbytesleft Number of bytes available at `inbuf`.
     * @param outbuf Pointer to the output buffer.
     * @param outbytesleft Number of bytes available at `outbuf`.
     * @return Number of bytes written to `outbuf`.
     */
    size_t (*loop_convert)(reiconv_t icd, const char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);

    /**
     * @brief Reset conversion loop.
     * @param icd Conversion descriptor.
     * @param outbuf Pointer to the output buffer.
     * @param outbytesleft Number of bytes available at `outbuf`.
     * @return Number of bytes written to `outbuf`.
     */
    size_t (*loop_reset)(reiconv_t icd, char **outbuf, size_t *outbytesleft);
};

#endif /* _LOOP_FUNCS_H_ */
