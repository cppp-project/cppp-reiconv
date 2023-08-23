/*
 * Copyright (C) 2023 The C++ Plus Project.
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
 * License along with the cppp-reiconv Library; see the file COPYING.
 * If not, see <https://www.gnu.org/licenses/>.
 */

/*
  Simple check of a stateful encoding.
*/

#include <iostream>
#include <cstring>

#include "file_utils.hpp"
#include "reiconv-test.hpp"


std::string replace(const std::string& src, const std::string& from, const std::string& to)
{
    std::string result = src;
    size_t pos = 0;

    while ((pos = result.find(from, pos)) != std::string::npos)
    {
        result.replace(pos, from.length(), to);
        pos += to.length();
    }

    return result;
}

std::string srcdir, charset;

// Usage: check-stateful SRCDIR CHARSET
int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        std::cerr << "Usage: check-stateful SRCDIR CHARSET\n";
        return 1;
    }
    srcdir = argv[1];
    charset = argv[2];

    std::string charsetf = replace(charset, ":", "-");

    if(file_exists(srcdir + "/" + charsetf + "-snippet.alt"))
    {
        test::iconv::main(charset, "UTF-8", srcdir + "/" + charsetf + "-snippet.alt", "tmp-snippet");
        assert_compare_file(srcdir + "/" + charsetf + "-snippet.UTF-8", "tmp-snippet");
    }

    test::iconv::main(charset, "UTF-8", srcdir + "/" + charsetf + "-snippet", "tmp-snippet");
    assert_compare_file(srcdir + "/" + charsetf + "-snippet.UTF-8", "tmp-snippet");

    test::iconv::main("UTF-8", charset, srcdir + "/" + charsetf + "-snippet.UTF-8", "tmp-snippet");
    assert_compare_file(srcdir + "/" + charsetf + "-snippet", "tmp-snippet");

    remove_file("tmp-snippet");

    success("check-stateful", charset + " OK.");
    return 0;
}
