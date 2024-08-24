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

#include <cppp/reiconv.hpp>

#include <cstdlib>
#include <cstring>
#include <limits.h>
#include <map>
#include <stdexcept>
#include <system_error>

namespace cppp::base::reiconv
{
    // Iconv handle.
    typedef void* iconv_t;

    // Data type for general conversion loop.
    struct loop_funcs
    {
        size_t (*loop_convert)(iconv_t icd, const char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
        size_t (*loop_reset)(iconv_t icd, char **outbuf, size_t *outbytesleft);
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
#define DEFCODEPAGE(codepage, xxx) {codepage, ei_##xxx},
#define DEFINDEX(alias, name)

    static const std::map<int, int> codepage_to_eindex =
    {
        #include "encodings.h.snippet"
    };

#undef DEFINDEX
#undef DEFENCODING
#undef DEFCODEPAGE

    // Conversion loops.
    #include "loops.h"

    /**
     * Alias lookup function.
     * Defines
     *   struct alias { int name; unsigned int encoding_index; };
     *   const struct alias * HashPool::aliases_lookup (const char *str, unsigned int len);
     *   #define MAX_WORD_LENGTH ...
     */
    #include "generated/aliases.h"

#pragma region Utility functions.
    static inline int lookup_by_codepage(int codepage)
    {
        auto it = codepage_to_eindex.find(codepage);
        return it != codepage_to_eindex.end() ? it->second : -1;
    }

    static inline size_t name_canonicalize(const char* name, char* buf)
    {
        char* bp = buf;
        const char* cp = name;
        for (; *cp; cp++, bp++)
        {
            unsigned char c = (unsigned char)*cp;
            if (c >= 'a' && c <= 'z')  // Uppercase
            {
                c -= 'a' - 'A';
            }
            if (c == '-' || c == '_')  // Ignore '-' and '_'
            {
                bp--;
            }
            else
            {
                *bp = c;
            }
        }
        *bp = '\0';
        return bp - buf;
    }

    static inline int lookup_by_name(const char* name)
    {
        char buf[MAX_WORD_LENGTH + 9 + 9 + 1];
        size_t buf_len = name_canonicalize(name, buf);

        if (buf_len >= 2 && buf[0] == 'C' && buf[1] == 'P')
        {
            int codepage = atoi(buf + 2);
            return lookup_by_codepage(codepage);
        }

        const struct alias* ap = HashPool::aliases_lookup(buf, buf_len);
        if (ap)
        {
            return ap->encoding_index;
        }
        return -1;
    }

    static inline struct conv_struct* iconv_open_from_index(int to_index, int from_index, int discard_ilseq)
    {
        struct conv_struct* cd;
        cd = (struct conv_struct*)malloc(sizeof(struct conv_struct));
        if (cd == nullptr)
        {
            errno = ENOMEM;
            return (struct conv_struct*)(-1);
        }
        cd->iindex = from_index;
        cd->ifuncs = all_encodings[from_index].ifuncs;
        cd->oindex = to_index;
        cd->ofuncs = all_encodings[to_index].ofuncs;
        /* Initialize the loop functions. */
        cd->lfuncs.loop_convert = unicode_loop_convert;
        cd->lfuncs.loop_reset = unicode_loop_reset;
        /* Initialize the states. */
        cd->istate = 0;
        cd->ostate = 0;
        /* Initialize the operation flags. */
        cd->discard_ilseq = discard_ilseq;

        return cd;
    }

#pragma endregion

#pragma region Hidden APIs.

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
    }

    _CPPP_API iconv_t iconv_open(int tocode, int fromcode, bool strict)
    {
        unsigned int to_index = lookup_by_codepage(tocode);
        unsigned int from_index = lookup_by_codepage(fromcode);

        if (to_index == -1 || from_index == -1)
        {
            errno = EINVAL;
            return (iconv_t)(-1);
        }

        struct conv_struct* cd = iconv_open_from_index(to_index, from_index, (int)!strict);

        return (iconv_t)cd;
    }

    _CPPP_API size_t iconv(iconv_t icd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft)
    {
        conv_t cd = (conv_t)icd;
        if (inbuf == nullptr || *inbuf == nullptr)
        {
            return cd->lfuncs.loop_reset(icd, outbuf, outbytesleft);
        }
        else
        {
            return cd->lfuncs.loop_convert(icd, (const char **)inbuf, inbytesleft, outbuf, outbytesleft);
        }
    }

    _CPPP_API void iconv_close(iconv_t icd)
    {
        free(icd);
    }

#pragma endregion

    _CPPP_API VersionInfo version = {VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH};

#pragma region Encoding class implementation.

    _CPPP_API Encoding::Encoding(const char* const name)
    {
        int index = lookup_by_name(name);
        if (index == -1)
        {
            throw std::invalid_argument("Invalid encoding name.");
        }
        this->_index = index;
    }

    _CPPP_API Encoding::Encoding(const int codepage)
    {
        int index = lookup_by_codepage(codepage);
        if (index == -1)
        {
            throw std::invalid_argument("Invalid codepage.");
        }
        this->_index = index;
    }

#pragma endregion

    constexpr const std::size_t TEMP_BUFFER_SIZE = 4096;

    _CPPP_API int convert(iconv_t cd, const char *start, size_t inlength, char **resultp,
                    size_t *lengthp)
    {
        size_t length;
        char* result;

        // Determine the length we need.
        size_t count = 0;
        char tmpbuf[TEMP_BUFFER_SIZE];
        char* inptr = (char*)start;
        size_t insize = inlength;
        while (insize > 0)
        {
            char *outptr = tmpbuf;
            size_t outsize = TEMP_BUFFER_SIZE;
            size_t res = iconv(cd, &inptr, &insize, &outptr, &outsize);
            if (res == (size_t)(-1) && errno != E2BIG)
            {
                return (errno == EINVAL ? EILSEQ : errno);
            }
            count += outptr - tmpbuf;
        }
        {
            char *outptr = tmpbuf;
            size_t outsize = TEMP_BUFFER_SIZE;
            size_t res = iconv(cd, nullptr, nullptr, &outptr, &outsize);
            if (res == (size_t)(-1))
            {
                return errno;
            }
            count += outptr - tmpbuf;
        }
        length = count;

        if (lengthp != nullptr)
        {
            *lengthp = length;
        }
        if (resultp == nullptr)
        {
            // If resultp is nullptrptr, we can't save results.
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
            return errno = ENOMEM;
        }
        // Return to the initial state.
        iconv(cd, nullptr, nullptr, nullptr, nullptr);

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

    _CPPP_API OutputBuffer convert(Encoding from, Encoding to, InputBuffer input, bool strict)
    {
        iconv_t cd = iconv_open_from_index(to, from, strict);
        if (cd == (iconv_t)(-1))
        {
            throw std::system_error(errno, std::system_category(), "iconv_open");
        }

        char* result = nullptr;
        std::size_t length = 0;
        int err = convert(cd, (const char*)input.buffer, input.length, &result, &length);
        iconv_close(cd);

        if (err != 0)
        {
            free(result);
            throw std::system_error(err, std::system_category(), "iconv");
        }

        return {(std::byte*)result, length};
    }

} // namespace cppp::base::reiconv
