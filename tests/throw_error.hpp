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
 * License along with the cppp-reiconv Library; see the file LICENSE.
 * If not, see <https://www.gnu.org/licenses/>.
 */

/*
  Throw error for test.
*/

#pragma once

#include <iostream>

void error_(const std::string& op, const std::string& msg, const std::string& file, size_t line)
{
    int saved_errno = errno;
    std::cerr << "\033[31m";
    if(saved_errno)
    {
        perror(op.c_str());
    }
    else
    {
        std::cerr << op << ": ";
    }
    std::cerr << msg << std::endl;
    std::cerr << file << ":" << line << std::endl;
    std::cerr << "\033[0m";
    if(saved_errno)
    {
        exit(saved_errno);
    }
    else
    {
        exit(1);
    }
}

#define error(op, msg) error_(op, msg, __FILE__, __LINE__)

void success(const std::string& op, const std::string& msg)
{
    std::cerr << "\033[32m";
    std::cerr << op << ": ";
    std::cerr << msg << std::endl;
    std::cerr << "\033[0m";
}
