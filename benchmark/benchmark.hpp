#pragma once

#include <benchmark/benchmark.h>

#include <cstddef>

extern void* glibc_iconv_open();
extern int glibc_static_size_convert(void* cd, const char *input_data, size_t input_length, char *output_data,
                              size_t output_length);

extern void* libiconv_iconv_open();
extern int libiconv_static_size_convert(void* cd, const char *input_data, size_t input_length, char *output_data,
                              size_t output_length);

extern void* reiconv_iconv_open();

