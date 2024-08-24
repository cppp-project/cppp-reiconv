#pragma once

#include <benchmark/benchmark.h>

#include <cstddef>

extern int glibc_iconv_string(const char* tocode,
                              const char* fromcode,
                              const char* start,
                              const char* end,
                              char** resultp,
                              std::size_t* lengthp);

extern void glibc_static_size_convert(const char* tocode,
                                     const char* fromcode,
                                     const char* data,
                                     std::size_t size,
                                     char** resultp,
                                     std::size_t result_size);

extern int libiconv_iconv_string(const char* tocode,
                                 const char* fromcode,
                                 const char* start,
                                 const char* end,
                                 char** resultp,
                                 std::size_t* lengthp);

extern void libiconv_static_size_convert(const char* tocode,
                                        const char* fromcode,
                                        const char* data,
                                        std::size_t size,
                                        char** resultp,
                                        std::size_t result_size);
