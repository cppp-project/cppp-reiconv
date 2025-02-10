/**
 * @file test-bom-state.cpp
 * @brief Checks the behaviour of iconv() with suffix //IGNORE.
 * @author Bruno Haible, ChenPi11
 * @copyright Copyright (C) 2024 Free Software Foundation, Inc.
 */
/*
 * This file is part of the cppp-reiconv Library.
 *
 * The cppp-reiconv Library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * The cppp-reiconv Library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the cppp-reiconv Library; see the file LICENSE.
 * If not, see <https://www.gnu.org/licenses/>.
 */

#include "cppp/reiconv.h"
#include "iconv.h"

#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <errno.h>

static const char input1[8] = "3\xd4\xe2\x84\x83\xc3\x9f";
static const char input2[8] = "3\xe2\x84\x83\xd4\xc3\x9f";

static void test_default(::reiconv_t cd)
{
    char output[10];
    char *inbuf;
    std::size_t inbytesleft;
    char *outbuf;
    std::size_t outbytesleft;
    std::size_t ret;

    inbuf = (char *)input1;
    inbytesleft = sizeof(input1) - 1;
    outbuf = output;
    outbytesleft = sizeof(output);
    ret = ::reiconv_iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (ret != (size_t)(-1) || errno != EILSEQ || sizeof(input1) - 1 - inbytesleft != 1)
    {
        std::abort();
    }
    if (sizeof(output) - outbytesleft != 1 || output[0] != '3')
    {
        std::abort();
    }

    inbuf = (char *)input2;
    inbytesleft = sizeof(input2) - 1;
    outbuf = output;
    outbytesleft = sizeof(output);
    ret = iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (ret != (std::size_t)(-1) || errno != EILSEQ || sizeof(input2) - 1 - inbytesleft != 1)
    {
        std::abort();
    }
    if (sizeof(output) - outbytesleft != 1 || output[0] != '3')
    {
        std::abort();
    }
}

static void test_translit(::reiconv_t cd)
{
    char output[10];
    char *inbuf;
    std::size_t inbytesleft;
    char *outbuf;
    std::size_t outbytesleft;
    std::size_t ret;

    inbuf = (char *)input1;
    inbytesleft = sizeof(input1) - 1;
    outbuf = output;
    outbytesleft = sizeof(output);
    ret = ::reiconv_iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (ret != (std::size_t)(-1) || errno != EILSEQ || sizeof(input1) - 1 - inbytesleft != 1)
    {
        std::abort();
    }
    if (sizeof(output) - outbytesleft != 1 || output[0] != '3')
    {
        std::abort();
    }

    inbuf = (char *)input2;
    inbytesleft = sizeof(input2) - 1;
    outbuf = output;
    outbytesleft = sizeof(output);
    ret = iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (ret != (std::size_t)(-1) || errno != EILSEQ || sizeof(input2) - 1 - inbytesleft != 4)
    {
        std::abort();
    }
    if (sizeof(output) - outbytesleft != 3 || output[0] != '3' || output[1] != '\xb0' || output[2] != 'C')
    {
        std::abort();
    }
}

static void test_ignore(::reiconv_t cd)
{
    char output[10];
    char *inbuf;
    std::size_t inbytesleft;
    char *outbuf;
    std::size_t outbytesleft;
    std::size_t ret;

    inbuf = (char *)input1;
    inbytesleft = sizeof(input1) - 1;
    outbuf = output;
    outbytesleft = sizeof(output) - 1;
    ret = ::reiconv_iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (ret != 1 || inbytesleft != 0)
    {
        std::abort();
    }
    if (sizeof(output) - outbytesleft != 3 || output[0] != '3' || output[1] != '\xdf')
    {
        std::abort();
    }

    inbuf = (char *)input2;
    inbytesleft = sizeof(input2) - 1;
    outbuf = output;
    outbytesleft = sizeof(output) - 1;
    ret = ::reiconv_iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (ret != 1 || inbytesleft != 0)
    {
        std::abort();
    }
    if (sizeof(output) - outbytesleft != 3 || output[0] != '3' || output[1] != '\xdf')
    {
        std::abort();
    }
}

static void test_ignore_translit(::reiconv_t cd)
{
    char output[10];
    char *inbuf;
    std::size_t inbytesleft;
    char *outbuf;
    std::size_t outbytesleft;
    std::size_t ret;

    inbuf = (char *)input1;
    inbytesleft = sizeof(input1) - 1;
    outbuf = output;
    outbytesleft = sizeof(output);
    ret = ::reiconv_iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (ret != 1 || inbytesleft != 0)
    {
        std::abort();
    }
    if (sizeof(output) - outbytesleft != 4 || output[0] != '3' || output[1] != '\xb0' || output[2] != 'C' ||
        output[3] != '\xdf')
    {
        std::abort();
    }

    inbuf = (char *)input2;
    inbytesleft = sizeof(input2) - 1;
    outbuf = output;
    outbytesleft = sizeof(output);
    ret = ::reiconv_iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (ret != 1 || inbytesleft != 0)
    {
        std::abort();
    }
    if (sizeof(output) - outbytesleft != 4 || output[0] != '3' || output[1] != '\xb0' || output[2] != 'C' ||
        output[3] != '\xdf')
    {
        std::abort();
    }
}

int main()
{
    ::reiconv_t cd;

#pragma region Default conversion

    cd = ::reiconv_open("ISO-8859-1", "UTF-8");
    test_default(cd);
    ::reiconv_handle_close(cd);

    cd = ::reiconv_open_from_index(ENCODING_UTF8, ENCODING_ISO8859_1, REICONV_NO_FLAGS);
    test_default(cd);
    ::reiconv_handle_close(cd);

    cd = ::reiconv_open_from_codepage(65001, 28591, REICONV_NO_FLAGS);
    test_default(cd);
    ::reiconv_handle_close(cd);

#pragma endregion

#pragma region Ignore conversion

    cd = ::reiconv_open("ISO-8859-1//IGNORE", "UTF-8");
    test_ignore(cd);
    ::reiconv_handle_close(cd);

    cd = ::reiconv_open("ISO-8859-1", "UTF-8//IGNORE");
    test_ignore(cd);
    ::reiconv_handle_close(cd);

    cd = ::reiconv_open_from_index(ENCODING_UTF8, ENCODING_ISO8859_1, REICONV_DISCARD_ILSEQ);
    test_ignore(cd);
    ::reiconv_handle_close(cd);

    cd = ::reiconv_open_from_codepage(65001, 28591, REICONV_DISCARD_ILSEQ);
    test_ignore(cd);
    ::reiconv_handle_close(cd);

#pragma endregion

#if TEST_TRANSLIT
#pragma region Translit conversion
    cd = ::reiconv_open("ISO-8859-1//TRANSLIT", "UTF-8");
    test_translit(cd);
    ::reiconv_handle_close(cd);

    cd = ::reiconv_open("ISO-8859-1", "UTF-8//TRANSLIT");
    test_translit(cd);
    ::reiconv_handle_close(cd);

    // TODO: Translit support.

#pragma endregion
#endif

#if TEST_TRANSLIT
    {
        iconv_t cd = iconv_open("ISO-8859-1//IGNORE//TRANSLIT", "UTF-8");
        test_ignore_translit(cd);
        iconv_close(cd);
    }
    {
        iconv_t cd = iconv_open("ISO-8859-1//TRANSLIT//IGNORE", "UTF-8");
        test_ignore_translit(cd);
        iconv_close(cd);
    }
#endif

    return EXIT_SUCCESS;
}
