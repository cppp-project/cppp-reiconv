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
  Throw error for reiconv-test.
*/

#ifndef _THROW_ERROR_HPP
#define _THROW_ERROR_HPP

#include <iostream>
#ifdef _MSC_VER
#include <io.h>
#else
#include <unistd.h>
#endif

#ifdef _MSC_VER
#define isatty _isatty
#define fileno _fileno
#endif

const bool stderr_is_tty = isatty(fileno(stderr));

void error(const std::string& op, const std::string& msg)
{
    int saved_errno = errno;
    if(stderr_is_tty)
    {
        std::cerr << "\033[31m";
    }
    if(saved_errno)
    {
        perror(op.c_str());
    }
    else
    {
        std::cerr << op << ": ";
    }
    std::cerr << msg << std::endl;
    if(stderr_is_tty)
    {
        std::cerr << "\033[0m";
    }
    if(saved_errno)
    {
        exit(saved_errno);
    }
    else
    {
        exit(1);
    }
}

void success(const std::string& op, const std::string& msg)
{
    if(stderr_is_tty)
    {
        std::cerr << "\033[32m";
    }
    std::cerr << op << ": ";
    std::cerr << msg << std::endl;
    if(stderr_is_tty)
    {
        std::cerr << "\033[0m";
    }
}

#endif
