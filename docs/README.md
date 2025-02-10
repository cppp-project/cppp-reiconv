# cppp-reiconv documentation

## Introduction

These docs is for `cppp-reiconv 3.0.0`.

It's a unstable version.

cppp-reiconv is a portable C/C++ library for converting between character
encodings and locale charset detection.

## Requirements

### Build

- A C++ compiler with C++20 support.
- CMake 3.12 or later.

### Runtime

- C runtime
- C++ runtime with C++20 support.

### Build with data generation

We need to generate index for encoding, they are stored in `lib/generated`.

**You can skip this section if you are not interested in it.**
**We already provide generated data in this Git repository and source tarball.**

- GNU Make.
- GNU Gperf.
- A POSIX system.

After you have installed these tools, you can use the following command to
generate data:

```shell
make -f Makefile.devel -B
```

## API Reference

- [C api reference and iconv compatibility](c-api.md)
- [C++ api reference](cpp-api.md)
