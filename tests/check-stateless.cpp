/**
 * @file check-stateless.hpp
 * @brief Completely check of a stateless encoding.
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

#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <regex>

#include "output.hpp"
#include "sort.hpp"
#include "table-from.hpp"
#include "table-to.hpp"
#include "uniq-u.hpp"
#include "utils.hpp"

void check2_pre_process(const std::filesystem::path &input_file_path, const std::filesystem::path &output_file_path)
{
    std::ifstream input_file {input_file_path};
    if (!input_file.good())
    {
        error(input_file_path.string(), "Unable to open input file.");
    }
    std::ofstream output_file {output_file_path, std::ios::trunc};
    if (!output_file.good())
    {
        error(output_file_path.string(), "Unable to open output file.");
    }

    std::string line;
    std::regex pattern {"\t.* 0x"};

    while (std::getline(input_file, line))
    {
        if (!std::regex_search(line, pattern))
        {
            write_stream(output_file, line + "\n");
        }
    }

    input_file.close();
    output_file.close();
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    if (argc != 3 && argc != 4)
    {
        print_stderr("Usage: check-stateless DATADIR CHARSET [--debug]\n");
        return EXIT_FAILURE;
    }
    bool debug = false;
    if (argc == 4)
    {
        debug = true;
        print_stderr("Debug mode enabled.\n");
    }
    std::filesystem::path srcdir = argv[1];
    std::string charset = argv[2];

    // Charset, modified for use in filenames.
    std::string charsetf = replace(charset, ":", "-");

    // Iconv in one direction.
    std::filesystem::path table_from_file = "tmp-" + charsetf + ".TXT";
    table_from(table_from_file, charset);

    // Iconv in the other direction.
    std::filesystem::path table_to_file_unsorted = "tmp-" + charsetf + ".INVERSE.UNSORTED.TXT";
    std::filesystem::path table_to_file = "tmp-" + charsetf + ".INVERSE.TXT";
    table_to(table_to_file_unsorted, charset);
    sort_file(table_to_file_unsorted, table_to_file);

    // Check 1: Charmap and iconv forward should be identical.
    std::filesystem::path standard_file = srcdir / (charsetf + ".TXT");
    compare_files(standard_file, table_from_file);

    // Check 2: the difference between the charmap and iconv backward.
    std::filesystem::path noprecomposed_tmp_file = "tmp-noprecomposed-" + charsetf + ".TXT";
    check2_pre_process(standard_file, noprecomposed_tmp_file);

    std::filesystem::path irreversible_file = srcdir / (charsetf + ".IRREVERSIBLE.TXT");
    std::filesystem::path orig_inverse_unsorted_file = "tmp-orig-" + charsetf + ".INVERSE.UNSORTED.TXT";
    std::filesystem::path orig_inverse_ununiqued_file = "tmp-orig-" + charsetf + ".INVERSE.UNUNIQUED.TXT";
    std::filesystem::path orig_inverse_file = "tmp-orig-" + charsetf + ".INVERSE.TXT";
    if (std::filesystem::exists(irreversible_file))
    {
        std::vector<std::filesystem::path> files = {noprecomposed_tmp_file, irreversible_file};
        merge_files(files, orig_inverse_unsorted_file);
        sort_file(orig_inverse_unsorted_file, orig_inverse_ununiqued_file);
        uniq_u(orig_inverse_ununiqued_file, orig_inverse_file);
    }
    else
    {
        if (std::filesystem::exists(orig_inverse_file))
        {
            std::filesystem::remove(orig_inverse_file);
        }
        std::filesystem::copy_file(noprecomposed_tmp_file, orig_inverse_file);
    }
    compare_files(orig_inverse_file, table_to_file);

    if (!debug)
    {
        std::filesystem::remove(table_from_file);
        std::filesystem::remove(table_to_file_unsorted);
        std::filesystem::remove(table_to_file);
        std::filesystem::remove(orig_inverse_unsorted_file);
        std::filesystem::remove(orig_inverse_ununiqued_file);
        std::filesystem::remove(orig_inverse_file);
        std::filesystem::remove(noprecomposed_tmp_file);
    }

    success("check-stateless", charset + " OK.");

    return EXIT_SUCCESS;
}
