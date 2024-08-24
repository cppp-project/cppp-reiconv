#include "benchmark.hpp"
#include "cppp/encodings/reiconv.hpp"
#include "test_string.hpp"

#include <benchmark/benchmark.h>
#include <cppp/reiconv.hpp>
#include <unicode/ucnv.h>

#include <cstddef>
#include <stdexcept>

static void reiconv_handle_open_by_name(benchmark::State& state)
{
    using namespace cppp::base;
    auto inbuf = reiconv::InputBuffer(simple_test_string_utf8);
    for (auto _: state)
    {
        auto s = reiconv::convert("UTF-8", "GB18030", inbuf);
        free(s.buffer);
    }
}

BENCHMARK(reiconv_handle_open_by_name);

static void reiconv_handle_open_by_codepage(benchmark::State& state)
{
    using namespace cppp::base;
    auto inbuf = reiconv::InputBuffer(simple_test_string_utf8);
    for (auto _: state)
    {
        auto s = reiconv::convert(65001, 54936, inbuf);
        free(s.buffer);
    }
}

BENCHMARK(reiconv_handle_open_by_codepage);

static void reiconv_handle_open_by_index(benchmark::State& state)
{
    using namespace cppp::base;
    auto inbuf = reiconv::InputBuffer(simple_test_string_utf8);
    for (auto _: state)
    {
        auto s = reiconv::convert(encoding::Encodings::UTF8, encoding::Encodings::GB18030, inbuf);
        free(s.buffer);
    }
}

BENCHMARK(reiconv_handle_open_by_index);

static void glibc_iconv_dynamic_length(benchmark::State& state)
{
    char* output = nullptr;
    std::size_t length = 0;
    if(glibc_iconv_string("GB18030", "UTF-8", simple_test_string_utf8, simple_test_string_utf8 + 1, &output, &length) != 0)
    {
        free(output);
        throw std::runtime_error("glibc_iconv_string failed");
    }
    free(output);

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
    if(libiconv_iconv_string("GB18030", "UTF-8", simple_test_string_utf8, simple_test_string_utf8 + 1, &output, &length) != 0)
    {
        free(output);
        throw std::runtime_error("libiconv_iconv_string failed");
    }
    free(output);

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
    using namespace cppp::base;
    auto inbuf = reiconv::InputBuffer((const std::byte*)big_test_string_utf8, big_test_string_utf8_len);
    for (auto _: state)
    {
        auto s = reiconv::convert(encoding::Encodings::UTF8, encoding::Encodings::GB18030, inbuf);
        free(s.buffer);
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
        ucnv_convert("GB18030",
            NULL,
            output,
            enough_size,
            big_test_string_utf8,
            big_test_string_utf8_len,
            &status);
        free(output);
    }
}

BENCHMARK(libicu_convert);

BENCHMARK_MAIN();
