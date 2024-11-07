/**
 * @file check-stateful.hpp
 * @brief Simple check of a stateful encoding.
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

#include <cstdio>
#include <cstring>
#include <filesystem>

#include "buffer.hpp"
#include "cppp/reiconv.hpp"
#include "reiconv-test.hpp"
#include "utils.hpp"

std::filesystem::path datadir;
std::string charset;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        print_stderr("Usage: check-stateful DATADIR CHARSET\n");
        return EXIT_FAILURE;
    }
    datadir = argv[1];
    charset = argv[2];

    std::string charsetf = replace(charset, ":", "-");

    std::filesystem::path snippet_alt_file { datadir / (charsetf + "-snippet.alt") };
    std::filesystem::path utf8_snippet_file { datadir / (charsetf + "-snippet.UTF-8") };

    Buffer res, snippet_data;
    if (std::filesystem::exists(snippet_alt_file))
    {
        res = reiconv_test(charset, reiconv::Encodings::UTF8, snippet_alt_file);
        snippet_data = Buffer::read_from_file(utf8_snippet_file);
        res.compare_assert(snippet_data);
    }

    res = reiconv_test(charset, reiconv::Encodings::UTF8, datadir / (charsetf + "-snippet"));
    snippet_data = Buffer::read_from_file(utf8_snippet_file);
    res.compare_assert(snippet_data);

    res = reiconv_test(reiconv::Encodings::UTF8, charset, utf8_snippet_file);
    snippet_data = Buffer::read_from_file(datadir / (charsetf + "-snippet"));
    res.compare_assert(snippet_data);

    success("check-stateful", charset + " OK.");

    return EXIT_SUCCESS;
}
