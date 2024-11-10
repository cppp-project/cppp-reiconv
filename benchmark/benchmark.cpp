#include "benchmark.hpp"
#include "cppp/reiconv.h"
#include <benchmark/benchmark.h>
#include <unicode/ucnv.h>

#include <cctype>
#include <cstring>
#include <string_view>

char *test_string_utf8;
std::size_t test_string_utf8_len;

static void reiconv(benchmark::State &state)
{
    char output[test_string_utf8_len * 4];
    void *cd = reiconv_iconv_open();
    for (auto _ : state)
    {
        reiconv_convert_static_size(cd, test_string_utf8, test_string_utf8_len, output, test_string_utf8_len * 4);
    }
}
BENCHMARK(reiconv);

static void glibc(benchmark::State &state)
{
    char output[test_string_utf8_len * 4];
    void *cd = glibc_iconv_open();
    for (auto _ : state)
    {
        glibc_static_size_convert(cd, test_string_utf8, test_string_utf8_len, output, test_string_utf8_len * 4);
    }
}
BENCHMARK(glibc);

static void libiconv(benchmark::State &state)
{
    char output[test_string_utf8_len * 4];
    void *cd = libiconv_iconv_open();
    for (auto _ : state)
    {
        libiconv_static_size_convert(cd, test_string_utf8, test_string_utf8_len, output, test_string_utf8_len * 4);
    }
}
BENCHMARK(libiconv);

static void libicu(benchmark::State &state)
{
    UErrorCode status{U_ZERO_ERROR};
    char output[test_string_utf8_len * 4];

    for (auto _ : state)
    {
        ucnv_convert("GB18030", "UTF-8", output, test_string_utf8_len * 4, test_string_utf8, test_string_utf8_len,
                     &status);
    }
}
BENCHMARK(libicu);

void init_test_string(std::size_t len)
{
    constexpr const char *const test_string =
        "\u6211\u80fd\u541e\u4e0b\u8eab\u4f53\u800c\u4e0d\u4f24\u8eab\u4f53\u30021234567890ABCD";
    constexpr const std::size_t test_string_len = 50;
    test_string_utf8 = new char[test_string_len * len];
    test_string_utf8_len = test_string_len * len;
    for (std::size_t i = 0; i < len; ++i)
    {
        std::memcpy(test_string_utf8 + i * test_string_len, test_string, test_string_len);
    }
}

static inline bool isdigit(const std::string_view str)
{
    for (const char c : str)
    {
        if (!std::isdigit(c))
        {
            return false;
        }
    }
    return true;
}

const char *const_argv_default[2] = {"benchmark", "--benchmark_format=json"};
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::fputs("Usage: benchmark <test_string_repeat_times>\n", stderr);
        return EXIT_FAILURE;
    }
    if (!isdigit(argv[1]))
    {
        std::fputs("Error: test_string_repeat_times must be a number.\n", stderr);
        return EXIT_FAILURE;
    }

    std::size_t len = std::atoi(argv[1]);
    init_test_string(len);

    int argc_default = 2;
    ::benchmark::Initialize(&argc_default, const_cast<char **>(const_argv_default));
    if (::benchmark::ReportUnrecognizedArguments(argc_default, const_cast<char **>(const_argv_default)))
    {
        return EXIT_FAILURE;
    }
    ::benchmark::RunSpecifiedBenchmarks();
    ::benchmark::Shutdown();

    delete[] test_string_utf8; // Not necessary.
    return EXIT_SUCCESS;
}
