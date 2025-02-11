/**
 * @file output.hpp
 * @brief Output utils.
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

#include <cstdio>
#include <initializer_list>
#include <source_location>
#include <string>

enum
{
    NOCONTROL = 0b000000000,
    COLOR_RED = 0b000000001,
    COLOR_GREEN = 0b000000010,
    COLOR_YELLOW = 0b000000100,
    COLOR_BLUE = 0b000001000,
    COLOR_MAGENTA = 0b000010000,
    COLOR_CYAN = 0b000100000,
    COLOR_WHITE = 0b001000000,
    CONTROL_BOLD = 0b010000000,
    CONTROL_UNDERLINE = 0b100000000,
};

inline std::string colorize(const std::string &str, int control, bool reset = true)
{
    if (control & NOCONTROL)
    {
        return str;
    }

    std::string color_code;
    if (control & COLOR_RED)
    {
        color_code = "\033[31m";
    }
    else if (control & COLOR_GREEN)
    {
        color_code = "\033[32m";
    }
    else if (control & COLOR_YELLOW)
    {
        color_code = "\033[33m";
    }
    else if (control & COLOR_BLUE)
    {
        color_code = "\033[34m";
    }
    else if (control & COLOR_MAGENTA)
    {
        color_code = "\033[35m";
    }
    else if (control & COLOR_CYAN)
    {
        color_code = "\033[36m";
    }
    else if (control & COLOR_WHITE)
    {
        color_code = "\033[37m";
    }

    std::string control_code;
    if (control & CONTROL_BOLD)
    {
        control_code = "\033[1m";
    }
    if (control & CONTROL_UNDERLINE)
    {
        control_code = "\033[4m";
    }

    return color_code + control_code + str + (reset ? "\033[0m" : "");
}

template <typename... Args> inline std::string print_string(const std::string &format, Args... args)
{
    std::initializer_list<std::string> args_ = {args...};
    std::string str = format;
    for (const auto &arg : args_)
    {
        size_t pos = 0;
        if ((pos = str.find_first_of("{}", pos)) != std::string::npos)
        {
            str.replace(pos, 2, arg);
        }
    }
    return str;
}

template <typename... Args> inline void print_stdout(const std::string &format, Args... args)
{
    std::string str = print_string(format, args...);
    std::puts(str.c_str());
}

template <typename... Args> inline void print_stderr(const std::string &format, Args... args)
{
    std::string str = print_string(format, args...);
    std::fputs(str.c_str(), stderr);
}

inline void error(const std::string &operation, const std::string &msg,
                  const std::source_location location = std::source_location::current())
{
    print_stderr(colorize("", COLOR_RED, false));
    if (errno)
    {
        std::perror(operation.c_str());
    }
    else
    {
        print_stderr("{}: ", operation);
    }
    std::string file_info = std::string(location.file_name()) + ":" + std::to_string(location.line());
    print_stderr(msg);
    print_stderr("\n\tAt {}", colorize(file_info, CONTROL_UNDERLINE));

    exit(EXIT_FAILURE);
}

inline void success(const std::string &operation, const std::string &msg)
{
    print_stdout(colorize("{}: {}", COLOR_GREEN), operation, msg);
}
