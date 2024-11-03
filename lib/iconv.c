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
 * License along with the cppp-reiconv library; see the file LICENSE.
 * If not, see <https://www.gnu.org/licenses/>.
 */

#include <cppp/reiconv.h>

#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <string.h>

const size_t TEMP_BUFFER_SIZE = 4096;

// Data type for general conversion loop.
struct loop_funcs
{
    size_t (*loop_convert)(reiconv_t icd, const char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
    size_t (*loop_reset)(reiconv_t icd, char **outbuf, size_t *outbytesleft);
};

// Converters
#include "converters.h"

// Table of all supported encodings.
struct encoding
{
    struct mbtowc_funcs ifuncs; // conversion multibyte -> unicode
    struct wctomb_funcs ofuncs; // conversion unicode -> multibyte
};

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2) ei_##xxx,
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, index)

enum
{
    #include "encodings.h.snippet"
    ei_end
};

#undef DEFINDEX
#undef DEFCODEPAGE
#undef DEFENCODING

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2) \
{xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2},
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, name)

static struct encoding const all_encodings[] =
{
    #include "encodings.h.snippet"
};

#undef DEFINDEX
#undef DEFENCODING
#undef DEFCODEPAGE

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2)
#define DEFCODEPAGE(codepage, xxx) [codepage]=ei_##xxx + 1,
#define DEFINDEX(alias, name)

static const int codepage_to_eindex[] =
{
    #include "encodings.h.snippet"
};

#undef DEFINDEX
#undef DEFENCODING
#undef DEFCODEPAGE

// Conversion loops.
#include "loops.h"

/*
 * Alias lookup function.
 * Defines
 *   struct alias { int name; unsigned int encoding_index; };
 *   const struct alias * HashPool::aliases_lookup (const char *str, unsigned int len);
 *   #define MAX_WORD_LENGTH ...
 */
#include "generated/aliases.h"

_CPPP_API struct VersionInfo version = {VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH};

_CPPP_API size_t reiconv_name_canonicalize(const char* name, char* outbuf)
{
    char* bp = outbuf;
    const char* cp = name;
    for (; *cp; cp++, bp++)
    {
        char c = (char)*cp;
        if (c >= 'a' && c <= 'z')  // Uppercase.
        {
            c -= 'a' - 'A';
        }
        if (c == '-' || c == '_')  // Ignore '-' and '_'.
        {
            bp--;
        }
        else
        {
            *bp = c;
        }
    }
    *bp = '\0';
    return bp - outbuf;
}

_CPPP_API int reiconv_lookup_from_name(const char* encoding)
{
    char buf[MAX_WORD_LENGTH + 2];
    size_t buf_len = reiconv_name_canonicalize(encoding, buf);

    const struct alias* ap = aliases_lookup(buf, buf_len);
    return ap ? ap->encoding_index : -1;
}

_CPPP_API int reiconv_lookup_from_codepage(int codepage)
{
    return codepage_to_eindex[codepage] - 1;
}

_CPPP_API reiconv_t reiconv_open_from_index(int fromcode, int tocode, bool discard_ilseq)
{
    struct conv_struct* cd;
    cd = (struct conv_struct*)malloc(sizeof(struct conv_struct));
    if (cd == NULL)
    {
        errno = ENOMEM;
        return (reiconv_t)(-1);
    }

    // Initialize the input and output functions.
    cd->iindex = fromcode;
    cd->ifuncs = all_encodings[fromcode].ifuncs;
    cd->oindex = tocode;
    cd->ofuncs = all_encodings[tocode].ofuncs;

    // Initialize the loop functions.
    cd->lfuncs.loop_convert = unicode_loop_convert;
    cd->lfuncs.loop_reset = unicode_loop_reset;

    // Initialize the states.
    cd->istate = 0;
    cd->ostate = 0;

    // Initialize the operation flags.
    cd->discard_ilseq = discard_ilseq;

    return cd;
}

_CPPP_API size_t reiconv_iconv(reiconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft)
{
    if (inbuf == NULL || *inbuf == NULL)
    {
        return ((conv_t)cd)->lfuncs.loop_reset(cd, outbuf, outbytesleft);
    }
    return ((conv_t)cd)->lfuncs.loop_convert(cd, (const char **)inbuf, inbytesleft, outbuf, outbytesleft);
}

/*
_CPPP_API iconv_t iconv_open(const char* tocode, const char* fromcode, bool strict)
{
    unsigned int to_index = lookup_by_name(tocode);
    unsigned int from_index = lookup_by_name(fromcode);

    if (to_index == -1 || from_index == -1)
    {
        errno = EINVAL;
        return (iconv_t)(-1);
    }

    struct conv_struct* cd = iconv_open_from_index(to_index, from_index, (int)!strict);

    return (iconv_t)cd;
}*/

_CPPP_API void reiconv_handle_close(reiconv_t icd)
{
    free(icd);
}

_CPPP_API size_t reiconv_result_size(reiconv_t cd, const char *start, size_t inlength)
{
    // Determine the length we need.
    size_t count = 0;
    char tmpbuf[TEMP_BUFFER_SIZE];
    char* inptr = (char*)start;
    size_t insize = inlength;
    while (insize > 0)
    {
        char *outptr = tmpbuf;
        size_t outsize = TEMP_BUFFER_SIZE;
        size_t res = reiconv_iconv(cd, &inptr, &insize, &outptr, &outsize);
        if (res == (size_t)(-1) && errno != E2BIG)
        {
            if (errno == EINVAL)
            {
                errno = EILSEQ;
            }
            return -1;
        }
        count += outptr - tmpbuf;
    }
    char *outptr = tmpbuf;
    size_t outsize = TEMP_BUFFER_SIZE;
    size_t res = reiconv_iconv(cd, NULL, NULL, &outptr, &outsize);
    if (res == (size_t)(-1))
    {
        // Return to the initial state.
        reiconv_iconv(cd, NULL, NULL, NULL, NULL);
        return -1;
    }
    reiconv_iconv(cd, NULL, NULL, NULL, NULL);
    return count + outptr - tmpbuf;
}

_CPPP_API int reiconv_convert(reiconv_t cd, const char *start, size_t inlength, char **resultp,
                size_t *lengthp)
{
    size_t length = reiconv_result_size(cd, start, inlength);
    char* result;

    if (length == 0)
    {
        return 0;
    }

    if (lengthp != NULL)
    {
        *lengthp = length;
    }
    if (resultp == NULL)
    {
        // If resultp is NULL, we can't save results.
        return -1;
    }
    result = (*resultp == NULL ? (char*)malloc(length) : (char*)realloc(*resultp, length));
    *resultp = result;
    if (result == NULL)
    {
        errno = ENOMEM;
        return -1;
    }

    // Do the conversion for real.
    char *inptr = (char*)start;
    size_t insize = inlength;
    char* outptr = result;
    size_t outsize = length;
    while (insize > 0)
    {
        size_t res = reiconv_iconv(cd, &inptr, &insize, &outptr, &outsize);
        if (res == (size_t)(-1))
        {
            if (errno == EINVAL)
            {
                break;
            }
            else
            {
                return -1;
            }
        }
    }
    size_t res = reiconv_iconv(cd, NULL, NULL, &outptr, &outsize);
    if (res == (size_t)(-1))
    {
        return -1;
    }
    if (outsize != 0)
    {
        abort();
    }
    return 0;
}
