/**
 * @file sort.cpp
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

#include <cstdlib>

#include "sort.hpp"
#include "output.hpp"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        print_stderr("Usage: ./sort INPUT-FILE OUTPUT-FILE\n");
        return EXIT_FAILURE;
    }

    sort_file(argv[1], argv[2]);
    return EXIT_SUCCESS;
}
