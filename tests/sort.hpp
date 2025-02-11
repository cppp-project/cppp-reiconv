/**
 * @file sort.hpp
 * @brief Sort file lines.
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

#pragma once

#include <algorithm>
#include <fstream>
#include <filesystem>
#include <string>
#include <vector>

#include "output.hpp"
#include "utils.hpp"

inline void sort_file(const std::filesystem::path &file_name, const std::filesystem::path &output_file_name)
{
    std::vector<std::string> lines;

    std::ifstream input_file {file_name};
    if (!input_file.good())
    {
        error("sort", "Failed to open the input file.");
    }

    std::ofstream output_file {output_file_name, std::ios::trunc};
    if (!output_file.good())
    {
        error("sort", "Failed to open the output file.");
    }

    std::string line;
    while (std::getline(input_file, line))
    {
        lines.push_back(line);
    }
    input_file.close();

    std::sort(lines.begin(), lines.end());

    for (const std::string &line : lines)
    {
        print_string("");
        write_stream(output_file, line + "\n");
    }
}
