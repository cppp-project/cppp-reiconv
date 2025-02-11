/**
 * @file reiconv-test.hpp
 * @brief Conversion test.
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

#include <cppp/reiconv.hpp>

#include <filesystem>

#include "buffer.hpp"

inline Buffer reiconv_test(reiconv::Encoding from, reiconv::Encoding to, const std::filesystem::path &input_file_path)
{
    using namespace reiconv;
    Buffer input = Buffer::read_from_file(input_file_path);
    std::string res = convert(from, to, {input.data(), input.size}, ConvertFlag::DISCARD_ILSEQ);
    return Buffer(res, "converted");
}
