/**
 * @file utils.hpp
 * @brief Utils for tests.
 * @author ChenPi11
 * @copyright Copyright (C) 2024 The C++ Plus Project
 */
/*
 * Copyright (C) 2024 The C++ Plus Project.
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

#include <cerrno>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

#include "output.hpp"

class Buffer : public std::pair<std::shared_ptr<std::byte[]>, std::size_t>
{
  public:
    std::string id;
    Buffer() : std::pair<std::shared_ptr<std::byte[]>, std::size_t>(), id("<unnamed>")
    {
    }
    Buffer(std::shared_ptr<std::byte[]> first, std::size_t second, std::string id = "<unnamed>")
        : std::pair<std::shared_ptr<std::byte[]>, std::size_t>(first, second), id(id)
    {
    }
    Buffer(const Buffer &buffer) : std::pair<std::shared_ptr<std::byte[]>, std::size_t>(buffer), id(buffer.id)
    {
    }
};

/**
 * @brief Dump a buffer to a file.
 */
inline void dump_data(const Buffer &buffer, const std::filesystem::path &output_file_path)
{
    std::ofstream output_file{output_file_path, std::ios::binary | std::ios::trunc};
    if (!output_file.good())
    {
        error(output_file_path, "Unable to open output file.");
    }

    output_file.write((char *)buffer.first.get(), buffer.second);
    output_file.close();
}

/**
 * @brief Compare two buffers.
 * @param buffer1 The first buffer.
 * @param buffer2 The second buffer.
 */
inline void compare_data(const Buffer &buffer1, const Buffer &buffer2)
{
    if (buffer1.second != buffer2.second || std::memcmp(buffer1.first.get(), buffer2.first.get(), buffer1.second) != 0)
    {
        dump_data(buffer1, "buffer1.dump");
        dump_data(buffer2, "buffer2.dump");
        print_stderr("{} {}\n", colorize(buffer1.id, COLOR_RED | CONTROL_UNDERLINE),
                     colorize(buffer2.id, COLOR_RED | CONTROL_UNDERLINE));
        error("compare_data", "The data is different.");
    }
    success("compare_data", "The data is the same.");
}

/**
 * @brief Read all content from a file.
 * @param input_file_path The file path.
 * @return The content of the file and its size.
 */
inline Buffer read_all(const std::filesystem::path &input_file_path)
{
    std::ifstream input_file{input_file_path, std::ios::binary};
    if (!input_file.good())
    {
        error(input_file_path, "Unable to open input file.");
    }

    std::size_t size = std::filesystem::file_size(input_file_path);
    auto buffer = std::make_shared<std::byte[]>(size);
    input_file.read((char *)buffer.get(), size);
    input_file.close();

    return {std::move(buffer), size, input_file_path.string()};
}

/**
 * @brief Compare two files.
 * @param file1 The first file.
 * @param file2 The second file.
 */
inline void compare_files(const std::filesystem::path &file1, const std::filesystem::path &file2)
{
    auto buffer1 = read_all(file1);
    auto buffer2 = read_all(file2);
    compare_data(buffer1, buffer2);
}

/**
 * @brief Write all content to a file.
 * @param output_file_path The file path.
 * @param buffer The content to write.
 * @param append Append to the file.
 */
inline void write_all(const std::filesystem::path &output_file_path, const std::string &buffer, bool append = false)
{
    std::ofstream output_file{output_file_path,
                              std::ios::binary | std::ios::ate | (append ? std::ios::app : std::ios::trunc)};
    if (!output_file.good())
    {
        error(output_file_path, "Unable to open output file.");
    }

    output_file.write(buffer.data(), buffer.size());
    output_file.close();
}

/**
 * @brief Write all content to a file.
 * @param output_file_path The file path.
 * @param buffer The content to write.
 * @param size The size of the content.
 * @param append Append to the file.
 */
inline void write_all(const std::filesystem::path &output_file_path, const Buffer &buffer, bool append = false)
{
    std::ofstream output_file{output_file_path,
                              std::ios::binary | std::ios::ate | (append ? std::ios::app : std::ios::trunc)};
    if (!output_file.good())
    {
        error(output_file_path, "Unable to open output file.");
    }

    output_file.write((char *)buffer.first.get(), buffer.second);
    output_file.close();
}

/**
 * @brief Write a string to a stream.
 * @param output The stream.
 * @param buffer The string.
 */
inline void write_stream(std::ostream &output, const std::string_view buffer)
{
    output.write(buffer.data(), buffer.size());
    if (!output.good())
    {
        error("write_stream", "Unable to write to stream.");
    }
}

/**
 * @brief Merge files into one.
 * @param files The files to merge.
 * @param output_file_path The output file path.
 */
inline void merge_files(const std::vector<std::filesystem::path> &files, const std::filesystem::path &output_file_path)
{
    std::ofstream output_file{output_file_path, std::ios::binary | std::ios::trunc};
    if (!output_file.good())
    {
        error(output_file_path, "Unable to open output file.");
    }

    for (const auto &file : files)
    {
        std::ifstream input_file{file, std::ios::binary};
        if (!input_file.good())
        {
            error(file, "Unable to open input file.");
        }

        output_file << input_file.rdbuf() << std::endl; // Flush after each write.
        input_file.close();
    }

    output_file.close();
}

/**
 * @brief Replace A to B in string src.
 * @param src The source string.
 * @param from The string to replace.
 * @param to The string to replace with.
 * @return The replaced string.
 */
inline std::string replace(const std::string &src, const std::string &from, const std::string &to)
{
    std::string result = src;
    size_t pos = 0;

    while ((pos = result.find(from, pos)) != std::string::npos)
    {
        result.replace(pos, from.length(), to);
        pos += to.length();
    }

    return result;
}

constexpr std::uint32_t _fromhex(char hex) noexcept
{
    return (hex >= '0' && hex <= '9') ? hex - '0' : hex - 'A' + 10;
}

constexpr std::uint32_t _fromhex(char hex1, char hex2)
{
    return _fromhex(hex1) << 4 | _fromhex(hex2);
}

/**
 * @brief Check if the system is big endian.
 * @return True if the system is big endian, false otherwise.
 */
inline bool is_big_endian() noexcept
{
    return *reinterpret_cast<const std::uint16_t *>("\0\x01") == 1;
}

/**
 * @brief Convert a hex string to a number.
 * @param hex The hex string.
 * @return The number.
 */
inline std::uint64_t fromhex(std::string hex)
{
    if (hex.size() % 2 != 0)
    {
        hex.insert(hex.begin(), '0');
    }
    std::size_t x = 0;
    for (std::size_t i = 0; i < hex.size(); i += 2)
    {
        hex[i] = std::toupper(hex[i]);
        hex[i + 1] = std::toupper(hex[i + 1]);
        if (!std::isxdigit(hex[i]) || !std::isxdigit(hex[i + 1]))
        {
            throw std::invalid_argument("Invalid hex: " + hex);
        }
        if (is_big_endian())
        {
            x |= _fromhex(hex[i], hex[i + 1]) << (4 * i);
        }
        else
        {
            x |= _fromhex(hex[i], hex[i + 1]) << (4 * (hex.size() - i - 2));
        }
    }
    return x;
}

constexpr std::uint32_t log16(std::uint32_t value)
{
    std::uint32_t result = 0;
    while (value)
    {
        value >>= 4;
        result++;
    }
    return result;
}

/**
 * @brief Convert a number to a hex string.
 * @param value The number.
 * @param length The length of the hex string.
 */
inline std::string tohex(std::uint32_t value, std::size_t length)
{
    std::uint32_t orig_value = value;
    std::size_t orig_length = length;
    std::string hex(length, '0');

    while (value)
    {
        if (length <= 0)
        {
            return tohex(orig_value, orig_length + 1);
            error("tohex", print_string("Value too large: {} + {}", hex, std::to_string(value)));
        }
        hex[--length] = "0123456789ABCDEF"[value % 16];
        value /= 16;
    }

    return hex;
}
