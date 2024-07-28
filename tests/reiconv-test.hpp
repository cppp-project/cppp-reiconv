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

#pragma once

#include <cppp/reiconv.hpp>

#include "utils.hpp"

#include <iostream>
#include <fstream>
#include <errno.h>
#include <cstring>
#include <vector>
#include <initializer_list>

#include "throw_error.hpp"

using namespace cppp::base::reiconv;

namespace test
{
    namespace iconv
    {
        void main(const std::string& from, const std::string& to,  const std::string& input_file_path, const std::string& output_file_path)
        {
            char* res = nullptr;
            size_t len = 0;

            FILE* src = fopen(input_file_path.c_str(), "rb");
            size_t srclen = get_file_size(input_file_path.c_str());
            char* s = (char*)malloc(srclen);
            fread(s, 1, srclen, src);
            fclose(src);
            cppp::base::reiconv::convert(to.c_str(), from.c_str(), s, srclen, &res, &len, true);

            FILE* out = fopen(output_file_path.c_str(), "wb");
            fwrite(res, 1, len, out);
            fclose(out);
            free(s);
        }
    }
}
