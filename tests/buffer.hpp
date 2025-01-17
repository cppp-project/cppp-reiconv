/**
 * @file buffer.hpp
 * @brief A simple buffer class.
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

#include <cstddef>
#include <cstring>
#include <fstream>
#include <string>

#include "output.hpp"
#include <filesystem>

class Buffer
{
  private:
    Buffer(char *buffer, std::size_t size, const std::string_view id) : id(id), buffer(buffer), size(size)
    {
    }

  public:
    std::string id;
    char *buffer;
    std::size_t size;

    Buffer() : id("<unnamed>"), buffer(nullptr), size(0)
    {
    }

    Buffer(Buffer &&other) : id(other.id), buffer(other.buffer), size(other.size)
    {
        other.buffer = nullptr;
        other.size = 0;
        other.id = "<unnamed>";
    }

    Buffer(const Buffer &source) : Buffer(source.copy())
    {
    }

    Buffer(const std::string_view source, const std::string_view id = "<unnamed>")
    {
        size = source.size();
        buffer = static_cast<char *>(std::malloc(size));
        if (buffer == nullptr)
        {
            error("malloc", "Unable to allocate buffer.");
        }
        std::memcpy(buffer, source.data(), size);
        this->id = id;
    }

    void dump(const std::filesystem::path &output_file_path) const
    {
        print_stderr("DEBUG: Dumping buffer {} to file {}.\n", colorize(id, CONTROL_UNDERLINE),
                     colorize(output_file_path.string(), CONTROL_UNDERLINE));
        std::ofstream output_file{output_file_path, std::ios::binary | std::ios::trunc};
        if (!output_file.good())
        {
            error(output_file_path.string(), "Unable to open output file.");
        }

        output_file.write(buffer, size);
        output_file.close();
    }

    constexpr char *data() noexcept
    {
        return buffer;
    }

    constexpr const char *data() const noexcept
    {
        return buffer;
    }

    Buffer &operator=(Buffer &&other) noexcept
    {
        reset(other.buffer, other.size, other.id);
        other.buffer = nullptr;
        other.reset();
        return *this;
    }

    Buffer &operator=(const Buffer &source)
    {
        Buffer copy = source.copy();
        reset(copy.buffer);
        copy.reset();
        return *this;
    }

    Buffer &reset(char *new_buffer = nullptr, const std::size_t new_size = 0,
                  const std::string_view new_id = "<unnamed>") noexcept
    {
        std::free(buffer);
        buffer = new_buffer;
        size = new_size;
        id = new_id;
        return *this;
    }

    Buffer copy() const
    {
        Buffer res = Buffer::allocate(size, id);
        std::memcpy(res.buffer, buffer, size);
        return std::move(res);
    }

    constexpr operator bool() const
    {
        return buffer != nullptr;
    }

    constexpr bool operator!() const
    {
        return !buffer;
    }

    constexpr bool operator==(const Buffer &other) const
    {
        // Check if the buffer is the same, but ignore CR and LF.
        std::size_t i = 0, j = 0;
        while (i < size || j < other.size)
        {
            i = std::min(i, size);
            j = std::min(j, other.size);
            if (buffer[i] == '\r' || buffer[i] == '\n')
            {
                i++;
                continue;
            }
            if (other.buffer[j] == '\r' || other.buffer[j] == '\n')
            {
                j++;
                continue;
            }
            if (buffer[i] != other.buffer[j])
            {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }

    constexpr bool operator!=(const Buffer &other) const
    {
        return !(*this == other);
    }

    void compare_assert(const Buffer &other) const
    {
        if (*this != other)
        {
            std::string str_cwd = std::filesystem::current_path().string();
            print_stderr("DEBUG: Dumping 'this.dmp' and 'other.dmp' into '{}' ...\n\tThis: {}\n\tOther: {}\n",
                         colorize(str_cwd, CONTROL_UNDERLINE), colorize(id, CONTROL_UNDERLINE),
                         colorize(other.id, CONTROL_UNDERLINE));
            dump(std::filesystem::path("this.dmp"));
            other.dump(std::filesystem::path("other.dmp"));
            error("compare_assert", "The data is different.");
        }
        success("compare_assert", "The data is the same.");
    }

    void write_stream(std::ostream &stream, bool newline = false, bool flush = true) const
    {
        stream.write(buffer, size);
        if (newline)
        {
            stream.write("\n", 1);
        }
        if (flush)
        {
            stream.flush();
        }
        if (!stream.good())
        {
            error("write_stream", "Unable to write to stream.");
        }
    }

    ~Buffer()
    {
        reset();
    }

    static Buffer allocate(const std::size_t size, const std::string_view id)
    {
        char *c_buffer = static_cast<char *>(std::malloc(size));
        std::memset(c_buffer, 0, size);
        if (c_buffer == nullptr)
        {
            error("malloc", "Unable to allocate buffer.");
        }
        return Buffer(c_buffer, size, id);
    }

    static Buffer read_from_file(const std::filesystem::path &input_file_path, bool binary = true)
    {
        std::ifstream input_file{input_file_path, binary ? std::ios::binary : std::ios::in};
        if (!input_file.good())
        {
            error(input_file_path.string(), "Unable to open file " + input_file_path.string());
        }

        std::size_t size = std::filesystem::file_size(input_file_path);

        Buffer buffer = Buffer::allocate(size, input_file_path.string());
        input_file.read(buffer.buffer, size);
        input_file.close();
        return std::move(buffer);
    }
};
