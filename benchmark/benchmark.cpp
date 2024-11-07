#include "benchmark.hpp"
#include "test_string.hpp"

#include <benchmark/benchmark.h>
#include <cppp/reiconv.hpp>
#include <cppp/reiconv.h>
#include <unicode/ucnv.h>

#include <cstddef>
#include <stdexcept>


static void reiconv_handle_open_by_name(benchmark::State& state)
{
    for (auto _: state)
    {
        volatile reiconv::Encoding index = {"UTF-8"};
        volatile reiconv::Encoding index2 = {"CP936"};
    }
}

BENCHMARK(reiconv_handle_open_by_name);

static void reiconv_handle_open_by_codepage(benchmark::State& state)
{
    for (auto _: state)
    {
        volatile reiconv::Encoding index = {65001};
        volatile reiconv::Encoding index2 = {936};
    }
}

BENCHMARK(reiconv_handle_open_by_codepage);

static void reiconv_handle_open_by_index(benchmark::State& state)
{
    for (auto _: state)
    {
        volatile reiconv::Encoding index = {reiconv::Encodings::UTF8};
        volatile reiconv::Encoding index2 = {reiconv::Encodings::CP936};
    }
}

BENCHMARK(reiconv_handle_open_by_index);

static void glibc_iconv_dynamic_length(benchmark::State& state)
{
    char* output = nullptr;
    std::size_t length = 0;

    for (auto _: state)
    {
        output = nullptr;
        length = 0;
        glibc_iconv_string("GB18030", "UTF-8", simple_test_string_utf8, simple_test_string_utf8 + 1, &output, &length);
        free(output);
    }
}

BENCHMARK(glibc_iconv_dynamic_length);

static void libiconv_iconv_dynamic_length(benchmark::State& state)
{
    char* output = nullptr;
    std::size_t length = 0;

    for (auto _: state)
    {
        output = nullptr;
        length = 0;
        libiconv_iconv_string("GB18030", "UTF-8", simple_test_string_utf8, simple_test_string_utf8 + 1, &output, &length);
        free(output);
    }
}

BENCHMARK(libiconv_iconv_dynamic_length);

static void glibc_iconv_static_length(benchmark::State& state)
{
    char* output = nullptr;
    std::size_t length = 0;
    glibc_static_size_convert("GB18030", "UTF-8", simple_test_string_utf8, 1, &output, length);
    free(output);

    for (auto _: state)
    {
        output = nullptr;
        length = 0;
        glibc_static_size_convert("GB18030", "UTF-8", simple_test_string_utf8, 1, &output, length);
        free(output);
    }
}

static void libiconv_static_length(benchmark::State& state)
{
    char* output = nullptr;
    std::size_t length = 0;
    libiconv_static_size_convert("GB18030", "UTF-8", simple_test_string_utf8, 1, &output, length);
    free(output);

    for (auto _: state)
    {
        output = nullptr;
        length = 0;
        libiconv_static_size_convert("GB18030", "UTF-8", simple_test_string_utf8, 1, &output, length);
        free(output);
    }
}

static void libicu_static_length(benchmark::State& state)
{
    UErrorCode status{ U_ZERO_ERROR };
    size_t enough_size = 24;
    char* output = (char*)malloc(enough_size);
    memset(output, 0, enough_size);
    int len = ucnv_convert("GB18030",
        "UTF-8",
        output,
        enough_size,
        simple_test_string_utf8,
        1,
        &status);
    
    if (U_FAILURE(status))
    {
        free(output);
        throw std::runtime_error("ucnv_convert failed");
    }
    free(output);

    for (auto _: state)
    {
        output = (char*)malloc(enough_size);
        memset(output, 0, enough_size);
        len = ucnv_convert("GB18030",
            NULL,
            output,
            enough_size,
            simple_test_string_utf8,
            1,
            &status);
        free(output);
    }
}

BENCHMARK(libicu_static_length);



constexpr std::size_t big_test_string_utf8_len = sizeof(big_test_string_utf8) - 1;

static void reiconv_convert(benchmark::State& state)
{
    using namespace reiconv;
    for (auto _: state)
    {
        reiconv_t cd = reiconv_open_from_index(reiconv_lookup_from_name("UTF-8"), reiconv_lookup_from_name("GB18030"), false);
        char* output = nullptr;
        size_t length = 0;
        reiconv_convert(cd, big_test_string_utf8, big_test_string_utf8_len, &output, &length);
        free(output);
    }
}

BENCHMARK(reiconv_convert);

static void glibc_convert(benchmark::State& state)
{
    char* output = nullptr;
    std::size_t length = 0;
    for (auto _: state)
    {
        output = nullptr;
        length = 0;
        glibc_iconv_string("GB18030", "UTF-8", big_test_string_utf8, big_test_string_utf8 + big_test_string_utf8_len, &output, &length);
        free(output);
    }
}

BENCHMARK(glibc_convert);

static void libiconv_convert(benchmark::State& state)
{
    char* output = nullptr;
    std::size_t length = 0;
    for (auto _: state)
    {
        output = nullptr;
        length = 0;
        libiconv_iconv_string("GB18030", "UTF-8", big_test_string_utf8, big_test_string_utf8 + big_test_string_utf8_len, &output, &length);
        free(output);
    }
}

BENCHMARK(libiconv_convert);

static void libicu_convert(benchmark::State& state)
{
    UErrorCode status{ U_ZERO_ERROR };
    size_t enough_size = big_test_string_utf8_len * 4;
    char* output = nullptr;
    for (auto _: state)
    {
        output = (char*)malloc(enough_size);
        memset(output, 0, enough_size);
        
        ucnv_convert_72("GB18030",
            NULL,
            output,
            enough_size + 1,
            big_test_string_utf8,
            big_test_string_utf8_len,
            &status);
        free(output);
    }
}

BENCHMARK(libicu_convert);

BENCHMARK_MAIN();
