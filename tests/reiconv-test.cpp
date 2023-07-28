/*
 * Copyright (C) 1999-2008, 2011, 2016, 2018, 2020, 2022-2023 Free Software Foundation, Inc.
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

#include <cppp/reiconv.hpp>

#include <iostream>
#include <fstream>
#include <errno.h>
#include <cstring>
#include <vector>
#include <initializer_list>

using namespace cppp::base::reiconv;

#pragma region get_file_size

#if defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
#elif defined(__unix__) || defined(__unix) || defined(unix) || (defined(__APPLE__) && defined(__MACH__))
    #include <sys/stat.h>
#else
    #error Unsupported operating system
#endif

long long get_file_size(const char* filename) {
    long long fileSize = -1;

#if defined(_WIN32) || defined(_WIN64)
    WIN32_FILE_ATTRIBUTE_DATA fileInfo;
    if (GetFileAttributesEx(filename, GetFileExInfoStandard, &fileInfo)) {
        fileSize = ((long long)fileInfo.nFileSizeHigh << 32) | fileInfo.nFileSizeLow;
    }
#elif defined(__unix__) || defined(__unix) || defined(unix) || (defined(__APPLE__) && defined(__MACH__))
    struct stat st;
    if (stat(filename, &st) == 0) {
        fileSize = st.st_size;
    }
#else
    #error Unsupported operating system.
#endif
    return fileSize;
}
#pragma endregion

std::string from;
std::string to;
std::string input_file_path;
std::string output_file_path;

std::ifstream input_file;
std::ofstream output_file;

void error_(std::string msg, std::string op, int line)
{
    std::cerr << "Error: " << op << " " << strerror(errno) << "\n";
    std::cerr << "At " << __FILE__ << ":" << line << "\n";
    if(errno)
    {
        std::exit(errno);
    }
}

#define error(msg, op) error_(msg, op, __LINE__)

/* This code is not optimal, only for test. */
std::vector<char> read_all()
{
    size_t size = get_file_size(input_file_path.c_str());
    char* buffer = new char[size];
    input_file.read(buffer, size);

    return std::vector<char>(buffer, buffer + size);
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, getenv("LANG"));
    errno = 0;

    if(argc < 7)
    {
        std::cerr << "Usage: " << argv[0] << " -f from -t to input_file output_file\n";
        return 1;
    }

    from = argv[2];
    to = argv[4];
    input_file_path = argv[5];
    output_file_path = argv[6];

    input_file.open(input_file_path, std::ios::binary);
    output_file.open(output_file_path, std::ios::trunc | std::ios::binary);

    std::vector<char> buffer;
    std::cerr << "Test start: " << to << " -> " << from << "\n";
    buffer = read_all();

    char* result = NULL;
    size_t rlength;
    if (iconv_string(to.c_str(), from.c_str(),
                    buffer.data(), buffer.data() + buffer.size(), &result, &rlength) < 0)
    {
        error("Conversation error", "iconv_string");
    }
    output_file.write(result, rlength);
    
    free(result);
    return 0;
}
