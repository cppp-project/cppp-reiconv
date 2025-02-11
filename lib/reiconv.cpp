/**
 * @file reiconv.cpp
 * @brief reiconv C++ bindings implementation.
 * @copyright Copyright (C) 2024 The C++ Plus Project.
 */
/*
 * This file is part of the cppp-reiconv library.
 *
 * The cppp-reiconv library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * The cppp-reiconv library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the cppp-reiconv library; see the file LICENSE.
 * If not, see <https://www.gnu.org/licenses/>.
 */

#include <cppp/reiconv.hpp>

#include <cstdlib>
#include <cstring>
#include <limits.h>
#include <stdexcept>
#include <system_error>

#include <cppp/reiconv.h>

_CPPP_API reiconv::Encoding::Encoding(const char *const name)
{
    _index = ::reiconv_lookup_from_name(name);
    if (_index == -1)
    {
        throw std::invalid_argument("Invalid encoding name.");
    }
}

_CPPP_API reiconv::Encoding::Encoding(const int codepage)
{
    _index = ::reiconv_lookup_from_codepage(codepage);
    if (_index == -1)
    {
        throw std::invalid_argument("Invalid codepage.");
    }
}

_CPPP_API reiconv::VersionInfo reiconv::version{VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH};

_CPPP_API std::string reiconv::convert(reiconv::Encoding from, reiconv::Encoding to, const std::string_view input,
                                       enum ConvertFlag flag)
{
    ::reiconv_t cd = ::reiconv_open_from_index(from, to, (enum ::ConvertFlag)flag);
    if (cd == (::reiconv_t)(-1))
    {
        throw std::system_error(errno, std::system_category(), "reiconv_open_from_index");
    }
    std::size_t outlen = ::reiconv_result_size(cd, input.data(), input.size());

    std::string res(outlen, '\0');
    char *result = const_cast<char *>(res.data());
    if (::reiconv_convert_static_size(cd, input.data(), input.size(), result, outlen) != 0)
    {
        ::reiconv_handle_close(cd);
        throw std::system_error(errno, std::system_category(), "reiconv_convert");
    }

    ::reiconv_handle_close(cd);
    return std::move(res);
}
