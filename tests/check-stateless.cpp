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
  Complete check of a stateless encoding.
*/

#include <iostream>
#include <cstring>
#include <regex>

#include "file_utils.hpp"
#include "table-from.hpp"
#include "table-to.hpp"
#include "sort.hpp"
#include "uniq-u.hpp"

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

void check2_pre_process(const std::string& input_file_path, const std::string& output_file_path)
{
    std::ifstream input_file(input_file_path);
    std::ofstream output_file(output_file_path, std::ios::trunc);
    
    if (input_file.is_open() && output_file.is_open())
    {
        std::string line;
        std::regex pattern("\t.* 0x");
        
        while (std::getline(input_file, line))
        {
            if (!std::regex_search(line, pattern))
            {
                output_file << line << '\n';
            }
        }
        
        input_file.close();
        output_file.close();
    }
    else
    {
        error(input_file_path + " " + output_file_path, "Unable to open file.");
    }
}

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

    // Charset, modified for use in filenames.
    std::string charsetf = replace(charset, ":", "-");

    // Iconv in one direction.
    test::table_from("tmp-" + charsetf + ".TXT", charset);

    // Iconv in the other direction.
    test::table_to("tmp-" + charsetf + ".INVERSE.UNSORTED.TXT", charset);
    sort_file("tmp-" + charsetf + ".INVERSE.UNSORTED.TXT", "tmp-" + charsetf + ".INVERSE.TXT");

    // Check 1: charmap and iconv forward should be identical.
    assert_compare_file(srcdir + "/" + charsetf + ".TXT", "tmp-" + charsetf + ".TXT");

    // Check 2: the difference between the charmap and iconv backward.
    check2_pre_process(srcdir + "/" + charsetf + ".TXT", "tmp-noprecomposed-" + charsetf + ".TXT");

    if(file_exists(srcdir + "/" + charsetf + ".IRREVERSIBLE.TXT"))
    {
        std::vector<std::string> files = { "tmp-noprecomposed-" + charsetf + ".TXT", srcdir + "/" + charsetf + ".IRREVERSIBLE.TXT" };
        merge_files(files, "tmp-orig-" + charsetf + ".INVERSE.UNSORTED.TXT");
        sort_file("tmp-orig-" + charsetf + ".INVERSE.UNSORTED.TXT", "tmp-orig-" + charsetf + ".INVERSE.UNUNIQUED.TXT");
        uniq_u("tmp-orig-" + charsetf + ".INVERSE.UNUNIQUED.TXT", "tmp-orig-" + charsetf + ".INVERSE.TXT");
    }
    else
    {
        copy_file("tmp-noprecomposed-" + charsetf + ".TXT", "tmp-orig-" + charsetf + ".INVERSE.TXT");
    }
    assert_compare_file("tmp-orig-" + charsetf + ".INVERSE.TXT", "tmp-" + charsetf + ".INVERSE.TXT");

    remove_file("tmp-" + charsetf + ".TXT");
    remove_file("tmp-" + charsetf + ".INVERSE.UNSORTED.TXT");
    remove_file("tmp-" + charsetf + ".INVERSE.TXT");
    remove_file("tmp-orig-" + charsetf + ".INVERSE.UNSORTED.TXT");
    remove_file("tmp-orig-" + charsetf + ".INVERSE.UNUNIQUED.TXT");
    remove_file("tmp-orig-" + charsetf + ".INVERSE.TXT");
    remove_file("tmp-noprecomposed-" + charsetf + ".TXT");

    success("check-stateless", charset + " OK.");
    return 0;
}
