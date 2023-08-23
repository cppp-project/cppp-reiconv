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
  Sort file lines.
*/

#ifndef _SORT_HPP
#define _SORT_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

#include "throw_error.hpp"

void sort_file(const std::string& file_name, const std::string& output_file_name)
{
    std::vector<std::string> lines;

    std::ifstream input_file(file_name);
    if(!input_file.is_open())
    {
        error("sort", "Failed to open file: " + file_name);
    }

    std::ofstream output_file(output_file_name, std::ios::trunc);
    if(!output_file.is_open())
    {
        error("sort", "Failed to open file: " + output_file_name);
    }

    std::string line;
    while (std::getline(input_file, line))
    {
        lines.push_back(line);
    }
    input_file.close();

    std::sort(lines.begin(), lines.end());

    for (const std::string& line : lines)
    {
        output_file << line << std::endl;
    }
}

#endif
