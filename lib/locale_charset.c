/**
 * @file locale_charset.c
 * @brief Detect the locale charset.
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

#include "cppp/reiconv.h"

#include "cppp/cppp-platform.h"

#include <locale.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "localecharset/lc_types.h"
#include "localecharset/lc_utils.h"

#if IS_DARWIN7
#include <xlocale.h>
#endif // IS_DARWIN7

#if HAVE_LANGINFO_CODESET
#include <langinfo.h>
#endif // HAVE_LANGINFO_CODESET

#if IS_WINDOWS_NATIVE || __has_cygwin__
#define WIN32_LEAN_AND_MEAN
#include "localecharset/windows_getcp.h"

#include <Windows.h>

/*
 * For the use of setlocale() below, the Gnulib override in setlocale.c is
 * not needed; see the platform lists in setlocale_null.m4.
 */
#undef setlocale
#endif // IS_WINDOWS_NATIVE || __has_cygwin__

#if !HAVE_LANGINFO_CODESET && !WINDOWS_NATIVE
#include "localecharset/locale_table.h"
#endif // !HAVE_LANGINFO_CODESET && !WINDOWS_NATIVE

_CPPP_API const char *locale_charset()
{
#if IS_WINDOWS_NATIVE
    return windows_getcp();
#endif // IS_WINDOWS_NATIVE

#if IS_MACOSX || __has_beos__ || __has_haiku__ || __has_android__
    /*
     * On Mac OS X, all modern locales use the UTF-8 encoding.
     * BeOS, Haiku and Android have a single locale, and it has UTF-8 encoding.
     */
    return "UTF-8";
#endif // IS_MACOSX || __has_beos__ || __has_haiku__ || __has_android__

    const char *codeset = NULL;

#if HAVE_LANGINFO_CODESET
    return nl_langinfo(CODESET);
#endif // HAVE_LANGINFO_CODESET

#if __has_cygwin__
    return windows_getcp();
#endif // __has_cygwin__

    const char *locale = NULL;
    GET_LOCALE(locale);

#if locale_table_defined
    // The locale_table is sorted. Perform a binary search.
    size_t hi = LOCALE_TABLE_SIZE;
    size_t lo = 0;
    while (lo < hi)
    {
        /*
         * Invariant:
         *  for i < lo, strcmp (locale_table[i].locale, locale) < 0,
         *  for i >= hi, strcmp (locale_table[i].locale, locale) > 0.
         */
        size_t mid = (hi + lo) >> 1; // >= lo, < hi
        int cmp = strcmp(locale_table[mid].locale, locale);
        if (cmp < 0)
        {
            lo = mid + 1;
        }
        else if (cmp > 0)
        {
            hi = mid;
        }
        else
        {
            // Found an i with strcmp (locale_table[i].locale, locale) == 0.
            codeset = locale_table[mid].canonical;
            goto done_table_lookup;
        }
    }
#endif // locale_table_defined
    // Cannot find the locale in the table, try to split it.
    const char *p = strchr(locale, '.');
    if (p == NULL)
    {
        // No dot.
        return DEFAULT_CHARSET;
    }

    // Split the locale into two parts.
    codeset = p + 1;
    return codeset;

done_table_lookup:

#if IS_DARWIN7
    /* Mac OS X sets MB_CUR_MAX to 1 when LC_ALL=C, and "UTF-8"
       (the default codeset) does not work when MB_CUR_MAX is 1.  */
    if (strcmp(codeset, "UTF-8") == 0 && MB_CUR_MAX_L(uselocale(NULL)) <= 1)
    {
        codeset = "ASCII";
    }
#endif // DARWIN7

    return codeset;
}
