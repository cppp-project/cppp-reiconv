/**
 * @file encoding.h
 * @brief Encoding structure definition.
 * @copyright Copyright (C) 1999-2008, 2011, 2016, 2018, 2020, 2022-2023 Free Software Foundation, Inc.
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

#include <cppp/reiconv.h>

#include <errno.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#include "all_encodings.h"
#include "codepage_to_ei.h"
#include "encoding.h"
#include "loop_funcs.h"
#include "loops.h"

/*
 * Alias lookup function.
 * Defines
 *   struct alias { int name; unsigned int encoding_index; };
 *   const struct alias * aliases_lookup (const char *str, unsigned int len);
 *   #define MAX_WORD_LENGTH ...
 */
#include "generated/aliases.h"

#define TEMP_BUFFER_SIZE 4096

_CPPP_API struct VersionInfo reiconv_version = {VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH};

_CPPP_API size_t reiconv_name_canonicalize(const char *name, char *outbuf)
{
    char *bp = outbuf;
    const char *cp = name;
    for (; *cp; cp++, bp++)
    {
        char c = (char)*cp;
        if (c >= 'a' && c <= 'z') // Uppercase.
        {
            c -= 'a' - 'A';
        }
        if (c == '-' || c == '_') // Ignore '-' and '_'.
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

_CPPP_API int reiconv_lookup_from_name(const char *encoding)
{
    char buf[MAX_WORD_LENGTH + 2];
    size_t buf_len = reiconv_name_canonicalize(encoding, buf);

    const struct alias *ap = aliases_lookup(buf, buf_len);
    return ap ? ap->encoding_index : -1;
}

_CPPP_API int reiconv_lookup_from_codepage(int codepage)
{
    return codepage_to_eindex[codepage] - 1;
}

_CPPP_API reiconv_t reiconv_open_from_index(int fromcode, int tocode, enum ConvertFlag flags)
{
    struct conv_struct *cd = (struct conv_struct *)malloc(sizeof(struct conv_struct));
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
    cd->ibyteorder = 0;

    // Initialize the operation flags.
    cd->discard_ilseq = flags & REICONV_DISCARD_ILSEQ;

    return cd;
}

_CPPP_API reiconv_t reiconv_open_from_codepage(int fromcode, int tocode, enum ConvertFlag flags)
{
    int from_index = reiconv_lookup_from_codepage(fromcode);
    int to_index = reiconv_lookup_from_codepage(tocode);

    if (from_index == -1 || to_index == -1)
    {
        errno = EINVAL;
        return (reiconv_t)(-1);
    }
    return reiconv_open_from_index(from_index, to_index, flags);
}

_CPPP_API reiconv_t reiconv_open_from_name(const char *fromcode, const char *tocode, enum ConvertFlag flags)
{
    int from_index = reiconv_lookup_from_name(fromcode);
    int to_index = reiconv_lookup_from_name(tocode);

    if (from_index == -1 || to_index == -1)
    {
        errno = EINVAL;
        return (reiconv_t)(-1);
    }
    return reiconv_open_from_index(from_index, to_index, flags);
}

_CPPP_API reiconv_t reiconv_open(const char *tocode, const char *fromcode)
{
    char fromcode_buf[MAX_WORD_LENGTH + 2];
    char tocode_buf[MAX_WORD_LENGTH + 2];

    size_t fromcode_len = reiconv_name_canonicalize(fromcode, fromcode_buf);
    size_t tocode_len = reiconv_name_canonicalize(tocode, tocode_buf);

    enum ConvertFlag flag = REICONV_NO_FLAGS;

    for (size_t i = 0; i < fromcode_len; i++)
    {
        if (fromcode_buf[i] == '/')
        {
            fromcode_buf[i] = '\0';
            if (i + 7 < fromcode_len && memcmp(fromcode_buf + i + 1, "/IGNORE", 8) == 0)
            {
                flag |= REICONV_DISCARD_ILSEQ;
            }
        }
    }

    for (size_t i = 0; i < tocode_len; i++)
    {
        if (tocode_buf[i] == '/')
        {
            tocode_buf[i] = '\0';
            if (i + 7 < tocode_len && memcmp(tocode_buf + i + 1, "/IGNORE", 7) == 0)
            {
                flag |= REICONV_DISCARD_ILSEQ;
            }
        }
    }

    int from_index = reiconv_lookup_from_name(fromcode_buf);
    int to_index = reiconv_lookup_from_name(tocode_buf);
    if (from_index == -1 || to_index == -1)
    {
        errno = EINVAL;
        return (reiconv_t)(-1);
    }

    return reiconv_open_from_index(from_index, to_index, flag);
}

_CPPP_API size_t reiconv_iconv(reiconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft)
{
    if (inbuf == NULL || *inbuf == NULL)
    {
        return ((conv_t)cd)->lfuncs.loop_reset(cd, outbuf, outbytesleft);
    }
    return ((conv_t)cd)->lfuncs.loop_convert(cd, (const char **)inbuf, inbytesleft, outbuf, outbytesleft);
}

_CPPP_API int reiconv_handle_close(reiconv_t icd)
{
    free(icd);
    return 0;
}

_CPPP_API size_t reiconv_result_size(reiconv_t cd, const char *start, size_t inlength)
{
    size_t count = 0;
    char tmpbuf[TEMP_BUFFER_SIZE];
    char *inptr = (char *)start;
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
            return (size_t)(-1);
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
        return (size_t)(-1);
    }
    reiconv_iconv(cd, NULL, NULL, NULL, NULL);
    return count + outptr - tmpbuf;
}

_CPPP_API int reiconv_convert_static_size(reiconv_t cd, const char *input_data, size_t input_length, char *output_data,
                                          size_t output_length)
{
    char *inptr = (char *)input_data;
    size_t insize = input_length;
    char *outptr = output_data;
    size_t outsize = output_length;
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
    if (reiconv_iconv(cd, NULL, NULL, &outptr, &outsize) == (size_t)(-1))
    {
        return -1;
    }
    return 0;
}

_CPPP_API int reiconv_convert(reiconv_t cd, const char *input_data, size_t input_length, char **output_data_ptr,
                              size_t *output_length_ptr)
{
    size_t output_length = reiconv_result_size(cd, input_data, input_length);
    if (output_length == (size_t)(-1))
    {
        return -1;
    }

    if (output_length_ptr != NULL)
    {
        *output_length_ptr = output_length;
    }

    if (output_data_ptr == NULL)
    {
        errno = EINVAL;
        return -1;
    }

    *output_data_ptr =
        (*output_data_ptr == NULL ? (char *)malloc(output_length) : (char *)realloc(*output_data_ptr, output_length));

    if (reiconv_convert_static_size(cd, input_data, input_length, *output_data_ptr, output_length) == -1)
    {
        free(*output_data_ptr);
        *output_data_ptr = NULL;
        return -1;
    }

    return 0;
}
