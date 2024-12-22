/**
 * @file test-bom-state.cpp
 * @brief Checks that iconv does not forget about the byte-order state.
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

#include <cerrno>
#include <cstdlib>
#include <cstring>

/*
 * This test checks that iconv(cd, nullptr, nullptr, ...) does not forget about
 * the byte-order state in conversions from UCS-2, UCS-4, UTF-16, UTF-32.
 *
 * The POSIX specification
 * <https://pubs.opengroup.org/onlinepubs/9799919799/functions/iconv.html>
 * is clear that iconv(cd, nullptr, nullptr, ...) has an effect for state-dependent
 * encodings only. The manual page
 * <https://www.kernel.org/doc/man-pages/online/pages/man3/iconv.3.html>
 * is not so clear about it. But Ulrich Drepper states it correctly in
 * <https://bugzilla.redhat.com/show_bug.cgi?id=165368>:
 *   "Flushing using iconv() only resets the shift state.  This is needed
 *    for stateful encodings with states where the caller wants a converted
 *    string to end in the initial state.  The BOM recognition has nothing
 *    to do with shift states.  Once the byte order is determined this is
 *    a property which stays with the iconv_t descriptor for its lifetime."
 *
 * Based on a bug report from Tomas Kalibera <tomas.kalibera@gmail.com> in
 * <https://lists.gnu.org/archive/html/bug-gnu-libiconv/2024-12/msg00000.html>.
 */

static void test_one_input(const char *fromcode, const char *input, std::size_t input_size)
{
    char outbuf1[3];
    char outbuf2[3];

    ::reiconv_t cd = ::reiconv_open("UTF-8", fromcode);
    if (cd == (::reiconv_t)(-1))
    {
        std::abort();
    }

    // Convert the first character.
    char *inbuf = (char *)input;
    std::size_t inbytesleft = input_size;
    char *outbuf = outbuf1;
    std::size_t outbytesleft = sizeof(outbuf1);
    std::size_t ret = ::reiconv_iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (ret != (std::size_t)(-1) || errno != E2BIG || outbytesleft != 0)
    {
        std::abort();
    }
    if (std::memcmp(outbuf1, "\xe2\x94\xa6", 3) != 0) // Should be U+2526.
    {
        std::abort();
    }

    // Reset the shift state.
    ret = ::reiconv_iconv(cd, nullptr, nullptr, nullptr, nullptr);
    if (ret)
    {
        std::abort();
    }

    // Convert the second character.
    outbuf = outbuf2;
    outbytesleft = sizeof(outbuf2);
    ret = ::reiconv_iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (ret != 0 || outbytesleft != 0)
    {
        std::abort();
    }
    if (memcmp(outbuf2, "\xe2\x98\xa9", 3) != 0) // Should be U+2629.
    {
        std::abort();
    }

    ::reiconv_handle_close(cd);
}

static void test_both_inputs(const char *fromcode, const char *be_input, const char *le_input, std::size_t input_size)
{
    test_one_input(fromcode, be_input, input_size);
    test_one_input(fromcode, le_input, input_size);
}

int main()
{
    static const char ucs2_be_input[] = "\xfe\xff\x25\x26\x26\x29";
    static const char ucs2_le_input[] = "\xff\xfe\x26\x25\x29\x26";
    test_both_inputs("UCS-2", ucs2_be_input, ucs2_le_input, sizeof(ucs2_be_input) - 1);
    test_both_inputs("UTF-16", ucs2_be_input, ucs2_le_input, sizeof(ucs2_be_input) - 1);

    static const char ucs4_be_input[] = "\x00\x00\xfe\xff\x00\x00\x25\x26\x00\x00\x26\x29";
    static const char ucs4_le_input[] = "\xff\xfe\x00\x00\x26\x25\x00\x00\x29\x26\x00\x00";
    test_both_inputs("UCS-4", ucs4_be_input, ucs4_le_input, sizeof(ucs4_be_input) - 1);
    test_both_inputs("UTF-32", ucs4_be_input, ucs4_le_input, sizeof(ucs4_be_input) - 1);

    return EXIT_SUCCESS;
}
