/**
 * @file lc_utils.h
 * @brief Utilities for locale charset.
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

#ifndef _LC_UTILS_H_
#define _LC_UTILS_H_

#include <cppp/cppp-platform.h>

#if defined(__APPLE__) && defined(__MACH__)
#define IS_MACOSX 1
#else
#define IS_MACOSX 0
#endif // defined(__APPLE__) && defined(__MACH__)

#define IS_DARWIN7 (__has_macos__ && IS_MACOSX && HAVE_LANGINFO_CODESET)

#define IS_WINDOWS_NATIVE (__has_windows__ && !__has_cygwin__)

#define IS_INVALID_LOCALE(locale) (locale == NULL || locale[0] == '\0')

#define GET_LOCALE(locale)                                                                                             \
    do                                                                                                                 \
    {                                                                                                                  \
        locale = getenv("LC_ALL");                                                                                     \
        if (IS_INVALID_LOCALE(locale))                                                                                 \
        {                                                                                                              \
            locale = getenv("LC_CTYPE");                                                                               \
            if (IS_INVALID_LOCALE(locale))                                                                             \
            {                                                                                                          \
                locale = getenv("LANG");                                                                               \
                if (IS_INVALID_LOCALE(locale))                                                                         \
                {                                                                                                      \
                    locale = setlocale(LC_CTYPE, NULL);                                                                \
                }                                                                                                      \
            }                                                                                                          \
        }                                                                                                              \
    } while (0)

#endif // _LC_UTILS_H_
