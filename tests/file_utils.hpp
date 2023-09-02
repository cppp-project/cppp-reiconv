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
  File operations utils for tests.
*/

#ifndef _FILE_UTILS_HPP
#define _FILE_UTILS_HPP

#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <cerrno>
#include <vector>

#if defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
#else
    #include <sys/stat.h>
#endif

#include "throw_error.hpp"



// Compare 2 files difference but ignore CR.
void assert_compare_file(const std::string& path1, const std::string& path2)
{
    std::ifstream file1(path1, std::ios::binary);
    if (!file1.is_open())
    {
        error(path1, path1 + " " + strerror(errno));
    }
    std::ifstream file2(path2, std::ios::binary);
    if (!file2.is_open())
    {
        error(path2, path2 + " " + strerror(errno));
    }

    std::cerr << "Comparing " << path1 << " and " << path2 << " ..." << std::endl;

    char file1_c;
    char file2_c;
    size_t read_seek = 0;

    while(1)
    {
        ++read_seek;

        if(file1.get(file1_c).eof()) { file1_c = EOF; }
        if(file1_c == '\r') { continue; }

        if(file2.get(file2_c).eof()) { file2_c = EOF; }
        if(file2_c == '\r') { file1.unget(); continue; }

        if(file1_c != file2_c)
        {
            errno = 0;
            error("assert_compare_file", "Files are not equal at " + std::to_string(read_seek) + " byte.");
        }

        if(file1_c == EOF && file2_c == EOF) { break; }

    }

    success("assert_compare_file", "Files are equal.");
    
}


// Get file size.
long long get_file_size(const std::string& file_name)
{
    const char* filename = file_name.c_str();
    long long file_size = -1;

#if defined(_WIN32) || defined(_WIN64)
    WIN32_FILE_ATTRIBUTE_DATA fileInfo;
    if (GetFileAttributesEx(filename, GetFileExInfoStandard, &fileInfo)) {
        file_size = ((long long)fileInfo.nFileSizeHigh << 32) | fileInfo.nFileSizeLow;
    }
#else
    struct stat st;
    if (stat(filename, &st) == 0) {
        file_size = st.st_size;
    }
#endif
    return file_size;
}


/* This code is not optimal, only for test. */
// Read all data in a file.
std::vector<char> read_all(const std::string& input_file_path)
{
    std::ifstream input_file(input_file_path);
    if (!input_file.is_open())
    {
        error(input_file_path, "Unable to open input file.");
    }

    size_t size = get_file_size(input_file_path.c_str());
    char* buffer = new char[size];
    input_file.read(buffer, size);

    input_file.close();

    return std::vector<char>(buffer, buffer + size);
}

// Check if a file exists.
bool file_exists(const std::string& file_name)
{
    std::ifstream file(file_name);
    bool result = file.good();
    file.close();
    return result;
}

// Remove file.
bool remove_file(const std::string& file_name)
{
    if (std::remove(file_name.c_str()) == 0)
    {
        return true;
    }
    return false;
}


// Merge files.
void merge_files(const std::vector<std::string>& files, const std::string& output_file_path)
{
    std::ofstream output_file(output_file_path, std::ios::trunc);
    
    if (!output_file.is_open())
    {
        error(output_file_path, "Unable to open output file.");
    }
    
    for (const std::string& file : files)
    {
        std::ifstream input_file(file);
        
        if (!input_file.is_open())
        {
            error(file, "Unable to open input file.");
        }
        output_file << input_file.rdbuf() << std::endl;
        input_file.close();
    }
    
    output_file.close();
}

// Copy file.
void copy_file(const std::string& from, const std::string& to)
{
    std::ifstream input_file(from, std::ios::binary);
    std::ofstream output_file(to, std::ios::binary | std::ios::trunc);
    
    if (input_file.is_open() && output_file.is_open())
    {
        output_file << input_file.rdbuf();
        input_file.close();
        output_file.close();
    }
    else
    {
        error(from + " " + to, "Unable to open file.");
    }
}

// Copy file to a stream.
void cat(const std::string& input_file_path, FILE* dstfile)
{
    FILE* srcfile;
    char buffer[1024];
    size_t len = 0;
    srcfile = fopen(input_file_path.c_str(), "r");
    if (srcfile == NULL)
    {
        error(input_file_path, "Error opening source file");
    }
    while ((len = fread(buffer, 1, sizeof(buffer), srcfile)) > 0)
    {
        fwrite(buffer, 1, len, dstfile);
    }
    fclose(srcfile);
}

// Move file.
void mv(const std::string& from, const std::string& to)
{
    if (rename(from.c_str(), to.c_str()) != 0)
    {
        error(from + " " + to, "Unable to move file.");
    }
}

#endif
