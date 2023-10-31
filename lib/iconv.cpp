/*
 * Copyright (C) 1999-2008, 2011, 2016, 2018, 2020, 2022-2023 Free Software Foundation, Inc.
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
 * License along with the cppp-reiconv library; see the file COPYING.
 * If not, see <https://www.gnu.org/licenses/>.
 */

#include <cppp/reiconv.hpp>

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <limits.h>

#ifndef DLL_VARIABLE
#error Macro "DLL_VARIABLE" is not defined, you should define it for export symbols.
#endif

namespace cppp
{
namespace base
{
namespace reiconv
{

    /* Iconv handle. */
    typedef void* iconv_t;

#if ENABLE_EXTRA
/*
 * Consider all system dependent encodings, for any system,
 * and the extra encodings.
 */
#define USE_AIX
#define USE_DOS
#define USE_ZOS
#define USE_EXTRA
#else
/*
 * Consider those system dependent encodings that are needed for the
 * current system.
 */
#ifdef _AIX
#define USE_AIX
#endif
#if defined(__DJGPP__) || (defined(_WIN32) && (defined(_MSC_VER) || defined(__MINGW32__)))
#define USE_DOS
#endif
/* Enable the EBCDIC encodings not only on z/OS but also on Linux/s390, for
  easier interoperability between z/OS and Linux/s390.  */
#if defined(__MVS__) || (defined(__linux__) && (defined(__s390__) || defined(__s390x__)))
#define USE_ZOS
#endif
#endif

/*
 * Data type for general conversion loop.
 */
struct loop_funcs
{
    size_t (*loop_convert)(iconv_t icd, const char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
    size_t (*loop_reset)(iconv_t icd, char **outbuf, size_t *outbytesleft);
};

/*
 * Converters.
 */
#include "converters.h"

/*
 * Table of all supported encodings.
 */
struct encoding
{
    struct mbtowc_funcs ifuncs; /* conversion multibyte -> unicode */
    struct wctomb_funcs ofuncs; /* conversion unicode -> multibyte */
    int oflags;                 /* flags for unicode -> multibyte conversion */
    int codepage;               /* codepage number */
};
#define DEFALIAS(xxx_alias, xxx) /* nothing */
enum
{
#define DEFENCODING(xxx_names, codepage, xxx, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2) ei_##xxx,
#include "encodings.def"
#ifdef USE_AIX
#include "encodings_aix.def"
#endif
#ifdef USE_DOS
#include "encodings_dos.def"
#endif
#ifdef USE_ZOS
#include "encodings_zos.def"
#endif
#ifdef USE_EXTRA
#include "encodings_extra.def"
#endif
#undef DEFENCODING
    ei_for_broken_compilers_that_dont_like_trailing_commas
};
#include "flags.h"
static struct encoding const all_encodings[] = {
#define DEFENCODING(xxx_names, codepage, xxx, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2)                      \
    {xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2, ei_##xxx##_oflags, codepage},
#include "encodings.def"
#ifdef USE_AIX
#include "encodings_aix.def"
#endif
#ifdef USE_DOS
#include "encodings_dos.def"
#endif
#ifdef USE_ZOS
#include "encodings_zos.def"
#endif
#ifdef USE_EXTRA
#include "encodings_extra.def"
#endif
#undef DEFENCODING
};
#undef DEFALIAS

static inline int lookup_by_codepage(int codepage)
{
    for(size_t i = 0; i < sizeof(all_encodings) / sizeof(all_encodings[0]); i++)
    {
        if(all_encodings[i].codepage == codepage)
        {
            return i;
        }
    }
    return -1;
}

/*
 * Conversion loops.
 */
#include "loops.h"

/*
 * Alias lookup function.
 * Defines
 *   struct alias { int name; unsigned int encoding_index; };
 *   const struct alias * HashPool::aliases_lookup (const char *str, unsigned int len);
 *   #define MAX_WORD_LENGTH ...
 */
#if defined _AIX
#include "aliases_sysaix.h"
#elif defined hpux || defined __hpux
#include "aliases_syshpux.h"
#elif defined __sun
#include "aliases_syssolaris.h"
#else
#include "aliases.h"
#endif

/*
 * System dependent alias lookup function.
 * Defines
 *   inline static const struct alias* aliases2_lookup (const char *str);
 */
#if defined(USE_AIX) || defined(USE_DOS) || defined(USE_ZOS) || defined(USE_EXTRA) /* || ... */
struct stringpool2_t
{
#define S(tag, name, encoding_index) char stringpool_##tag[sizeof(name)];
#include "aliases2.h"
#undef S
};
static const struct stringpool2_t stringpool2_contents = {
#define S(tag, name, encoding_index) name,
#include "aliases2.h"
#undef S
};
#define stringpool2 ((const char *)&stringpool2_contents)
static const struct alias sysdep_aliases[] = {
#define S(tag, name, encoding_index) {(int)(size_t)(void*)&((struct stringpool2_t *)0)->stringpool_##tag, encoding_index},
#include "aliases2.h"
#undef S
};
inline static const struct alias* aliases2_lookup(const char* str)
{
    const struct alias *ptr;
    unsigned int count;
    for (ptr = sysdep_aliases, count = sizeof(sysdep_aliases) / sizeof(sysdep_aliases[0]); count > 0; ptr++, count--)
        if (!strcmp(str, stringpool2 + ptr->name))
            return ptr;
    return nullptr;
}
#else
#define aliases2_lookup(str) nullptr
#define stringpool2 nullptr
#endif

extern "C++"
{

#pragma region hidden-api
    DLL_VARIABLE iconv_t iconv_open(const char* tocode, const char* fromcode)
    {
        struct conv_struct* cd;
        unsigned int from_index;
        unsigned int to_index;
        int discard_ilseq;

    #include "iconv_open1.h"

        cd = (struct conv_struct*)malloc(sizeof(struct conv_struct));
        if (cd == nullptr)
        {
            errno = ENOMEM;
            return (iconv_t)(-1);
        }

    #include "iconv_open2.h"

        return (iconv_t)cd;
    invalid:
        errno = EINVAL;
        return (iconv_t)(-1);
    }

    DLL_VARIABLE iconv_t iconv_open(int tocode_cp, int fromcode_cp, bool strict)
    {
        struct conv_struct *cd;
        unsigned int from_index;
        unsigned int to_index;
        int discard_ilseq = (int)!strict;

        to_index = lookup_by_codepage(tocode_cp);
        from_index = lookup_by_codepage(fromcode_cp);

        if(to_index == -1 || from_index == -1 || tocode_cp == -1 || fromcode_cp == -1)
        {
            errno = EINVAL;
            return (iconv_t)(-1);
        }

        cd = (struct conv_struct *)malloc(sizeof(struct conv_struct));
        if (cd == nullptr)
        {
            errno = ENOMEM;
            return (iconv_t)(-1);
        }

        #include "iconv_open2.h"

        return (iconv_t)cd;
    }

    DLL_VARIABLE size_t iconv(iconv_t icd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft)
    {
        conv_t cd = (conv_t)icd;
        if (inbuf == nullptr || *inbuf == nullptr)
            return cd->lfuncs.loop_reset(icd, outbuf, outbytesleft);
        else
            return cd->lfuncs.loop_convert(icd, (const char **)inbuf, inbytesleft, outbuf, outbytesleft);
    }

    DLL_VARIABLE int iconv_close(iconv_t icd)
    {
        conv_t cd = (conv_t)icd;
        free(cd);
        return 0;
    }

#pragma endregion

    /* version number: (major<<8) + minor */
    DLL_VARIABLE int reiconv_version = (3 << 8) + 0;

    constexpr const size_t tmpbufsize = 4096;

    DLL_VARIABLE int convert(const iconv_t& cd, const char *start, size_t inlength, char **resultp,
                    size_t *lengthp)
    {
        size_t length;
        char* result;
        /* Determine the length we need. */
        {
            size_t count = 0;
            char tmpbuf[tmpbufsize];
            char* inptr = (char*)start;
            size_t insize = inlength;
            while (insize > 0)
            {
                char *outptr = tmpbuf;
                size_t outsize = tmpbufsize;
                size_t res = iconv(cd, &inptr, &insize, &outptr, &outsize);
                if (res == (size_t)(-1) && errno != E2BIG)
                {
                    return (errno == EINVAL ? EILSEQ : errno);
                }
                count += outptr - tmpbuf;
            }
            {
                char *outptr = tmpbuf;
                size_t outsize = tmpbufsize;
                size_t res = iconv(cd, nullptr, nullptr, &outptr, &outsize);
                if (res == (size_t)(-1))
                {
                    return errno;
                }
                count += outptr - tmpbuf;
            }
            length = count;
        }
        if (lengthp != nullptr)
        {
            *lengthp = length;
        }
        if (resultp == nullptr)
        {
            /* If resultp is nullptrptr, we can't save results.  */
            return 0;
        }
        result = (*resultp == nullptr ? (char*)malloc(length) : (char*)realloc(*resultp, length));
        *resultp = result;
        if (length == 0)
        {
            return 0;
        }
        if (result == nullptr)
        {
            return (errno = ENOMEM);
        }
        iconv(cd, nullptr, nullptr, nullptr, nullptr); /* return to the initial state */
        /* Do the conversion for real. */
        {
            char* inptr = (char*)start;
            size_t insize = inlength;
            char* outptr = result;
            size_t outsize = length;
            while (insize > 0)
            {
                size_t res = iconv(cd, &inptr, &insize, &outptr, &outsize);
                if (res == (size_t)(-1))
                {
                    if (errno == EINVAL)
                    {
                        break;
                    }
                    else
                    {
                        return errno;
                    }
                }
            }
            {
                size_t res = iconv(cd, nullptr, nullptr, &outptr, &outsize);
                if (res == (size_t)(-1))
                {
                    return errno;
                }
            }
            if (outsize != 0)
            {
                abort();
            }
        }
        return 0;
    }

    DLL_VARIABLE int convert(const char* tocode, const char* fromcode, const char* start,
                    size_t inlength, char** resultp, size_t* lengthp)
    {
        iconv_t cd = iconv_open(tocode, fromcode);
        if (cd == (iconv_t)(-1))
        {
            if (errno != EINVAL)
            {
                return -1;
            }

    #pragma region autodetect
            /* Unsupported fromcode or tocode. Check whether the caller requested
            autodetection. */
            if (!strcmp(fromcode, "autodetect_utf8"))
            {
                int ret;
                /* Try UTF-8 first. There are very few ISO-8859-1 inputs that would
                be valid UTF-8, but many UTF-8 inputs are valid ISO-8859-1. */
                ret = convert(tocode, "UTF-8", start, inlength, resultp, lengthp);
                if (!(ret < 0 && errno == EILSEQ))
                    return ret;
                ret = convert(tocode, "ISO-8859-1", start, inlength, resultp, lengthp);
                return ret;
            }
            if (!strcmp(fromcode, "autodetect_jp"))
            {
                int ret;
                /* Try 7-bit encoding first. If the input contains bytes >= 0x80,
                it will fail. */
                ret = convert(tocode, "ISO-2022-JP-2", start, inlength, resultp, lengthp);
                if (!(ret < 0 && errno == EILSEQ))
                    return ret;
                /* Try EUC-JP next. Short SHIFT_JIS inputs may come out wrong. This
                is unavoidable. People will condemn SHIFT_JIS.
                If we tried SHIFT_JIS first, then some short EUC-JP inputs would
                come out wrong, and people would condemn EUC-JP and Unix, which
                would not be good. */
                ret = convert(tocode, "EUC-JP", start, inlength, resultp, lengthp);
                if (!(ret < 0 && errno == EILSEQ))
                    return ret;
                /* Finally try SHIFT_JIS. */
                ret = convert(tocode, "SHIFT_JIS", start, inlength, resultp, lengthp);
                return ret;
            }
            if (!strcmp(fromcode, "autodetect_kr"))
            {
                int ret;
                /* Try 7-bit encoding first. If the input contains bytes >= 0x80,
                it will fail. */
                ret = convert(tocode, "ISO-2022-KR", start, inlength, resultp, lengthp);
                if (!(ret < 0 && errno == EILSEQ))
                    return ret;
                /* Finally try EUC-KR. */
                ret = convert(tocode, "EUC-KR", start, inlength, resultp, lengthp);
                return ret;
            }
    #pragma endregion

            errno = EINVAL;
            return -1;
        }

        int ret = convert(cd, start, inlength, resultp, lengthp);
        iconv_close(cd);
        return ret;
    }

    DLL_VARIABLE int convert(int tocode_cp, int fromcode_cp, const char* start,
                    size_t inlength, char** resultp, size_t* lengthp, bool strict)
    {
        iconv_t cd = iconv_open(tocode_cp, fromcode_cp, strict);
        if (cd == (iconv_t)(-1))
        {
            return errno;
        }

        int ret = convert(cd, start, inlength, resultp, lengthp);
        iconv_close(cd);
        return ret;
    }

    DLL_VARIABLE bool ascii_mbtou16(const char* str, size_t length, char16_t** resultp, size_t* lengthp)
    {
        if (resultp == nullptr || lengthp == nullptr)
        {
            errno = EINVAL;
            return false;
        }

        char16_t* result = (char16_t*)malloc(length * sizeof(char16_t));
        if (result == nullptr)
        {
            errno = ENOMEM;
            return false;
        }

        size_t count = 0;
        for (size_t i = 0; i < length; i++)
        {
            result[count++] = (char16_t)str[i];
        }

        *resultp = result;
        *lengthp = count;
        return true;
    }

    DLL_VARIABLE bool ascii_mbtou32(const char* str, size_t length, char32_t** resultp, size_t* lengthp)
    {
        if (resultp == nullptr || lengthp == nullptr)
        {
            errno = EINVAL;
            return false;
        }

        char32_t* result = (char32_t*)malloc(length * sizeof(char32_t));
        if (result == nullptr)
        {
            errno = ENOMEM;
            return false;
        }

        size_t count = 0;
        for (size_t i = 0; i < length; i++)
        {
            result[count++] = (char32_t)str[i];
        }

        *resultp = result;
        *lengthp = count;
        return true;
    }

} // extern "C++"

} // namespace reiconv
} // namespace base
} // namespace cppp
