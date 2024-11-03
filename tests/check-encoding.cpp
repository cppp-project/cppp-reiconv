/**
 * @file check-encoding.hpp
 * @brief Simple check of a Encoding class.
 * @author ChenPi11
 * @copyright Copyright (C) 2024 The C++ Plus Project
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

#include <cppp/reiconv.hpp>

#include <cstdlib>
#include <string>

#include "output.hpp"

#define COMPARE(name, codepage, index) Encoding(name) == Encoding(codepage) && Encoding(name) == Encoding(index)
#define ASSERT(name, codepage, index)                                                                                  \
    if (!(COMPARE(name, codepage, index)))                                                                             \
    {                                                                                                                  \
        error("check-encoding", print_string("name={}, codepage={}, index={} are not equal.", name,                    \
                                             std::to_string(codepage), std::to_string((int)index)));                        \
    }

int main()
{
    using namespace reiconv;

    ASSERT("ASCII", 367, Encodings::ASCII);
    ASSERT("UTF-8", 65001, Encodings::UTF8);
    ASSERT("CP936", 936, Encodings::CP936);
    ASSERT("ISO-8859-1", 28591, Encodings::ISO8859_1);
    ASSERT("MSEE", 1250, Encodings::MSEE);
    ASSERT("IBM-850", 850, Encodings::IBM850);
    ASSERT("MacRoman", 10000, Encodings::MACINTOSH);
    ASSERT("MacRoman", 10000, Encodings::MAC_ROMAN);
    ASSERT("PT154", 154, Encodings::PT154);
    ASSERT("IBM-856", 856, Encodings::IBM856);
    ASSERT("csPC8codepage437", 437, Encodings::CP437);
    ASSERT("CP0037", 37, Encodings::EBCDIC_037);

    return EXIT_SUCCESS;
}
