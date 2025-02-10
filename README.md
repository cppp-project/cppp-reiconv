# cppp-reiconv

<img alt="C+++" src="https://avatars.githubusercontent.com/u/130828670" width="10%">

A character set conversion library based on GNU LIBICONV. **Supports C and C++20.**

If your C++ standard is lower than C++20. A few code needs to be modified.

## Build

This library requires `build-aux` and `cppp-platform` for building.

See [docs/](docs/README.md) for full requirements list.

**We are planning to use [Rubisco](https://github.com/cppp-project/rubisco) to manage submodules. But it is not ready yet. So we don not use git submodule for now. Please clone them manually.**

Use the following command to fetch source code:

```shell
git clone https://github.com/cppp-project/cppp-reiconv
cd cppp-reiconv
git clone https://github.com/cppp-project/build-aux --depth 1
git clone https://github.com/cppp-project/rubisco --depth 1
```

Use the following command to build and install.

```shell
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=[[BUILD_TYPE]] -DCMAKE_INSTALL_PREFIX=[[PREFIX]]
cmake --build . --config=[[BUILD_TYPE]]
cmake --install . --config=[[BUILD_TYPE]]
```

## Simple Usage

```cpp
#include <cppp/reiconv.hpp>

#include <cstdlib>
#include <iostream>

int main()
{
    const std::string_view src = "\xb8\xfc\xcf\xb2\xe1\xba\xc9\xbd\xc7\xa7\xc0\xef\xd1\xa9\xa3\xac\xc8\xfd\xbe\xfc\xb9\xfd\xba\xf3\xbe\xa1\xbf\xaa\xd1\xd5\xa3\xa1";

    std::string result = reiconv::convert("GB18030", "UTF-8", src);

    std::cout << result << std::endl;

    const std::string_view correct_result = "\u66f4\u559c\u5cb7\u5c71\u5343\u91cc\u96ea\uff0c\u4e09\u519b\u8fc7\u540e\u5c3d\u5f00\u989c\uff01";

    if (result == correct_result)
    {
        std::cout << "Correct!" << std::endl;
    }
    else
    {
        // If it happens, please report a bug.
        std::cout << "Wrong!" << std::endl;
    }

    return EXIT_SUCCESS;
}
```

The full documentation can be found in [docs/](docs/README.md).

## Supported Encodings

Same as GNU LIBICONV, It provides support for the encodings:

+ European languages
  + ASCII, ISO-8859-{1,2,3,4,5,7,9,10,13,14,15,16},
  + KOI8-R, KOI8-U, KOI8-RU,
  + CP{1250,1251,1252,1253,1254,1257}, CP{850,866,1131},
  + Mac{Roman,CentralEurope,Iceland,Croatian,Romania},
  + Mac{Cyrillic,Ukraine,Greek,Turkish},
  + Macintosh
+ Semitic languages
  + ISO-8859-{6,8}, CP{1255,1256}, CP862, Mac{Hebrew,Arabic}
+ Japanese
  + EUC-JP, SHIFT_JIS, CP932, ISO-2022-JP, ISO-2022-JP-2, ISO-2022-JP-1,
  + ISO-2022-JP-MS
+ Chinese
  + EUC-CN, HZ, GBK, CP936, GB18030, GB18030:2022, EUC-TW, BIG5, CP950,
  + BIG5-HKSCS, BIG5-HKSCS:2004, BIG5-HKSCS:2001, BIG5-HKSCS:1999,
  + ISO-2022-CN, ISO-2022-CN-EXT
+ Korean
  + EUC-KR, CP949, ISO-2022-KR, JOHAB
+ Armenian
  + ARMSCII-8
+ Georgian
  + Georgian-Academy, Georgian-PS
+ Tajik
  + KOI8-T
+ Kazakh
  + PT154, RK1048
+ Thai
  + ISO-8859-11, TIS-620, CP874, MacThai
+ Laotian
  + MuleLao-1, CP1133
+ Vietnamese
  + VISCII, TCVN, CP1258
+ Platform specifics
  + HP-ROMAN8, NEXTSTEP
+ Full Unicode
  + UTF-8
  + UCS-2, UCS-2BE, UCS-2LE
  + UCS-4, UCS-4BE, UCS-4LE
  + UTF-16, UTF-16BE, UTF-16LE
  + UTF-32, UTF-32BE, UTF-32LE
  + UTF-7
  + C99, JAVA
+ Full Unicode, in terms of 'uint16_t' or 'uint32_t'
  + UCS-2-INTERNAL, UCS-4-INTERNAL (with machine dependent endianness and alignment)

And some extra encodings. These encodings are GNU LIBICONV's extra encodings.

+ European languages
  + CP{437,737,775,852,853,855,857,858,860,861,863,865,869,1125}
+ Semitic languages
  + CP864
+ Japanese
  + EUC-JISX0213, Shift_JISX0213, ISO-2022-JP-3
+ Chinese
  + BIG5-2003 (experimental)
+ Turkmen
  + TDS565
+ Platform specifics
  + ATARIST, RISCOS-LATIN1
+ EBCDIC compatible (not ASCII compatible, very rarely used)
  + European languages
    + IBM-{037,273,277,278,280,282,284,285,297,423,500,870,871,875,880},
    + IBM-{905,924,1025,1026,1047,1112,1122,1123,1140,1141,1142,1143},
    + IBM-{1144,1145,1146,1147,1148,1149,1153,1154,1155,1156,1157,1158},
    + IBM-{1165,1166,4971}
  + Semitic languages
    + IBM-{424,425,12712,16804}
  + Persian
    + IBM-1097
  + Thai
    + IBM-{838,1160}
  + Laotian
    + IBM-1132
  + Vietnamese
    + IBM-{1130,1164}
  + Indic languages
    + IBM-1137

It can convert from any of these encodings to any other, through Unicode
conversion.

## Build Options

We use CMake for build

+ `BUILD_TESTING`: Build tests. Default is ON.

```shell
cmake .. -DBUILD_TESTING=ON
cmake --build . --config=RelWithDebInfo
ctest -C RelWithDebInfo --output-on-failure
```

+ `ICONV_COMPAT`: Enable compatibility with iconv. Default is OFF.

If `ICONV_COMPAT` is ON, it will install `iconv.h` with basic functions.
But we do not support all features of POSIX:2024. See [TODO](TODO).

## Install

This library installs:

+ A shared library `libcppp-reiconv`.
+ A static library `libcppp-reiconv.static`.
+ Header files

```text
include
├── cppp
│   ├── cppp-platform.h
│   ├── encodings
│   │   ├── reiconv.h
│   │   └── reiconv.hpp
│   ├── reiconv.h
│   └── reiconv.hpp
└── iconv.h       # Only if ICONV_COMPAT is ON
```

## Copyright

The cppp-reiconv is under LGPLv3,
see file [LICENSE](./LICENSE).

## Download

See <https://github.com/cppp-project/cppp-reiconv/releases>

## Homepage

<https://github.com/cppp-project/cppp-reiconv>

## Bug reports

+ Create a issue on GitHub [Report now](https://github.com/cppp-project/cppp-reiconv/issues/new/)
