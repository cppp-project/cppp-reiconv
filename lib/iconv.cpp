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

namespace cppp
{
namespace base
{
namespace reiconv
{

#if ENABLE_EXTRA
/*
 * Consider all system dependent encodings, for any system,
 * and the extra encodings.
 */
#define USE_AIX
#define USE_OSF1
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
#if defined(__osf__) || defined(VMS)
#define USE_OSF1
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
#ifdef USE_OSF1
#include "encodings_osf1.def"
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
#ifdef USE_OSF1
#include "encodings_osf1.def"
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
#elif defined __osf__
#include "aliases_sysosf1.h"
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
#if defined(USE_AIX) || defined(USE_OSF1) || defined(USE_DOS) || defined(USE_ZOS) || defined(USE_EXTRA) /* || ... */
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
    return NULL;
}
#else
#define aliases2_lookup(str) NULL
#define stringpool2 NULL
#endif

iconv_t iconv_open(const char* tocode, const char* fromcode)
{
    struct conv_struct* cd;
    unsigned int from_index;
    unsigned int to_index;
    int discard_ilseq;

#include "iconv_open1.h"

    cd = (struct conv_struct*)malloc(sizeof(struct conv_struct));
    if (cd == NULL)
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

iconv_t iconv_open(int tocode_cp, int fromcode_cp, bool strict)
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
    if (cd == NULL)
    {
        errno = ENOMEM;
        return (iconv_t)(-1);
    }

    #include "iconv_open2.h"

    return (iconv_t)cd;
}

static inline size_t iconv(iconv_t icd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft)
{
    conv_t cd = (conv_t)icd;
    if (inbuf == NULL || *inbuf == NULL)
        return cd->lfuncs.loop_reset(icd, outbuf, outbytesleft);
    else
        return cd->lfuncs.loop_convert(icd, (const char **)inbuf, inbytesleft, outbuf, outbytesleft);
}

int iconv_close(iconv_t icd)
{
    conv_t cd = (conv_t)icd;
    free(cd);
    return 0;
}

int iconvctl(iconv_t icd, int request, void *argument)
{
    conv_t cd = (conv_t)icd;
    switch (request)
    {
    case ICONV_TRIVIALP:
        *(int *)argument = ((cd->lfuncs.loop_convert == unicode_loop_convert && cd->iindex == cd->oindex)
                                ? 1
                                : 0);
        return 0;
    case ICONV_GET_DISCARD_ILSEQ:
        *(int *)argument = cd->discard_ilseq;
        return 0;
    case ICONV_SET_DISCARD_ILSEQ:
        cd->discard_ilseq = (*(const int *)argument ? 1 : 0);
        return 0;
    case ICONV_SET_HOOKS:
        if (argument != NULL)
        {
            cd->hooks = *(const struct iconv_hooks *)argument;
        }
        else
        {
            cd->hooks.uc_hook = NULL;
            cd->hooks.data = NULL;
        }
        return 0;
    default:
        errno = EINVAL;
        return -1;
    }
}

/* version number: (major<<8) + minor */
int reiconv_version = (3 << 8) + 0;

constexpr size_t tmpbufsize = 4096;

int iconv_string(const iconv_t& cd, const char *start, const char *end, char **resultp,
                 size_t *lengthp)
{
    size_t length;
    char* result;
    /* Determine the length we need. */
    {
        size_t count = 0;
        char tmpbuf[tmpbufsize];
        char* inptr = (char*)start;
        size_t insize = end - start;
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
            size_t res = iconv(cd, NULL, NULL, &outptr, &outsize);
            if (res == (size_t)(-1))
            {
                return errno;
            }
            count += outptr - tmpbuf;
        }
        length = count;
    }
    if (lengthp != NULL)
    {
        *lengthp = length;
    }
    if (resultp == NULL)
    {
        /* If resultp is nullptr, we can't save results.  */
        return 0;
    }
    result = (*resultp == NULL ? (char*)malloc(length) : (char*)realloc(*resultp, length));
    *resultp = result;
    if (length == 0)
    {
        return 0;
    }
    if (result == NULL)
    {
        return (errno = ENOMEM);
    }
    iconv(cd, NULL, NULL, NULL, NULL); /* return to the initial state */
    /* Do the conversion for real. */
    {
        char* inptr = (char*)start;
        size_t insize = end - start;
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
            size_t res = iconv(cd, NULL, NULL, &outptr, &outsize);
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

int iconv_string(const char* tocode, const char* fromcode, const char* start,
                   const char* end, char** resultp, size_t* lengthp)
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
            ret = iconv_string(tocode, "UTF-8", start, end, resultp, lengthp);
            if (!(ret < 0 && errno == EILSEQ))
                return ret;
            ret = iconv_string(tocode, "ISO-8859-1", start, end, resultp, lengthp);
            return ret;
        }
        if (!strcmp(fromcode, "autodetect_jp"))
        {
            int ret;
            /* Try 7-bit encoding first. If the input contains bytes >= 0x80,
              it will fail. */
            ret = iconv_string(tocode, "ISO-2022-JP-2", start, end, resultp, lengthp);
            if (!(ret < 0 && errno == EILSEQ))
                return ret;
            /* Try EUC-JP next. Short SHIFT_JIS inputs may come out wrong. This
              is unavoidable. People will condemn SHIFT_JIS.
              If we tried SHIFT_JIS first, then some short EUC-JP inputs would
              come out wrong, and people would condemn EUC-JP and Unix, which
              would not be good. */
            ret = iconv_string(tocode, "EUC-JP", start, end, resultp, lengthp);
            if (!(ret < 0 && errno == EILSEQ))
                return ret;
            /* Finally try SHIFT_JIS. */
            ret = iconv_string(tocode, "SHIFT_JIS", start, end, resultp, lengthp);
            return ret;
        }
        if (!strcmp(fromcode, "autodetect_kr"))
        {
            int ret;
            /* Try 7-bit encoding first. If the input contains bytes >= 0x80,
              it will fail. */
            ret = iconv_string(tocode, "ISO-2022-KR", start, end, resultp, lengthp);
            if (!(ret < 0 && errno == EILSEQ))
                return ret;
            /* Finally try EUC-KR. */
            ret = iconv_string(tocode, "EUC-KR", start, end, resultp, lengthp);
            return ret;
        }
#pragma endregion

        errno = EINVAL;
        return -1;
    }

    int ret = iconv_string(cd, start, end, resultp, lengthp);
    iconv_close(cd);
    return ret;
}

int iconv_string(int tocode_cp, int fromcode_cp, const char* start,
                   const char* end, char** resultp, size_t* lengthp, bool strict)
{
    iconv_t cd = iconv_open(tocode_cp, fromcode_cp, strict);
    if (cd == (iconv_t)(-1))
    {
        return errno;
    }

    int ret = iconv_string(cd, start, end, resultp, lengthp);
    iconv_close(cd);
    return ret;
}

} // namespace reiconv
} // namespace base
} // namespace cppp
