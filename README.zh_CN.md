# cppp-reiconv

<img alt="C+++" src="https://avatars.githubusercontent.com/u/130828670" width="10%">

一个基于 GNU LIBICONV 的字符集转换库。**支持 C 和 C++20。**

如果你的 C++ 标准低于 C++20，需要修改一些代码。

## 构建

此库需要 `build-aux` 和 `cppp-platform` 两个子模块用于构建。

参见 [docs/](docs/zh_CN/README.md) 获取完整依赖列表。

**我们正在使用 [Rubisco](https://github.com/cppp-project/rubisco) 管理子模块。但它还没有准备好。所以我们现在不使用 git submodule。请手动克隆它们。**

使用以下命令克隆源代码，或者直接下载源码包：

```shell
git clone https://github.com/cppp-project/cppp-reiconv
cd cppp-reiconv
git clone https://github.com/cppp-project/build-aux --depth 1
git clone https://github.com/cppp-project/cppp-platform --depth 1
```

使用以下命令构建和安装：

```shell
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=[[BUILD_TYPE]] -DCMAKE_INSTALL_PREFIX=[[PREFIX]]
cmake --build . --config=[[BUILD_TYPE]]
cmake --install . --config=[[BUILD_TYPE]]
```

## 简单的用法

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
        std::cout << "正确！" << std::endl;
    }
    else
    {
        // 如果发生了这个，请提 issue！
        std::cout << "错误！" << std::endl;
    }

    return EXIT_SUCCESS;
}
```

完整文档参见 [docs/](docs/zh_CN/README.md)。

## 支持的编码

和 GNU LIBICONV 一样，它提供了以下编码的支持：

+ 欧洲语言
  + ASCII, ISO-8859-{1,2,3,4,5,7,9,10,13,14,15,16},
  + KOI8-R, KOI8-U, KOI8-RU,
  + CP{1250,1251,1252,1253,1254,1257}, CP{850,866,1131},
  + Mac{Roman,CentralEurope,Iceland,Croatian,Romania},
  + Mac{Cyrillic,Ukraine,Greek,Turkish},
  + Macintosh
+ 闪米特诸族语言
  + ISO-8859-{6,8}, CP{1255,1256}, CP862, Mac{Hebrew,Arabic}
+ 日本语
  + EUC-JP, SHIFT_JIS, CP932, ISO-2022-JP, ISO-2022-JP-2, ISO-2022-JP-1,
  + ISO-2022-JP-MS
+ 中文
  + EUC-CN, HZ, GBK, CP936, GB18030, GB18030:2022, EUC-TW, BIG5, CP950,
  + BIG5-HKSCS, BIG5-HKSCS:2004, BIG5-HKSCS:2001, BIG5-HKSCS:1999,
  + ISO-2022-CN, ISO-2022-CN-EXT
+ 韩语
  + EUC-KR, CP949, ISO-2022-KR, JOHAB
+ 亚美尼亚语
  + ARMSCII-8
+ 格鲁吉亚语
  + Georgian-Academy, Georgian-PS
+ 塔吉克语
  + KOI8-T
+ 哈萨克语
  + PT154, RK1048
+ 泰语
  + ISO-8859-11, TIS-620, CP874, MacThai
+ 老挝语
  + MuleLao-1, CP1133
+ 越南语
  + VISCII, TCVN, CP1258
+ 平台特定
  + HP-ROMAN8, NEXTSTEP
+ 完整的 Unicode
  + UTF-8
  + UCS-2, UCS-2BE, UCS-2LE
  + UCS-4, UCS-4BE, UCS-4LE
  + UTF-16, UTF-16BE, UTF-16LE
  + UTF-32, UTF-32BE, UTF-32LE
  + UTF-7
  + C99, JAVA
+ 完整的 Unicode，以 'uint16_t' 或 'uint32_t' 表示
  + UCS-2-INTERNAL, UCS-4-INTERNAL （具有设备依赖的字节序和对齐）

一些额外的编码。这些编码是 GNU LIBICONV 的额外编码。

+ 欧洲语言
  + CP{437,737,775,852,853,855,857,858,860,861,863,865,869,1125}
+ 闪米特诸族语言
  + CP864
+ 日本语
  + EUC-JISX0213, Shift_JISX0213, ISO-2022-JP-3
+ 中文
  + BIG5-2003 (experimental)
+ 土库曼语
  + TDS565
+ 平台特定
  + ATARIST, RISCOS-LATIN1
+ EBCDIC 兼容编码（不兼容ASCII，几乎不使用）
  + 欧洲语言
    + IBM-{037,273,277,278,280,282,284,285,297,423,500,870,871,875,880},
    + IBM-{905,924,1025,1026,1047,1112,1122,1123,1140,1141,1142,1143},
    + IBM-{1144,1145,1146,1147,1148,1149,1153,1154,1155,1156,1157,1158},
    + IBM-{1165,1166,4971}
  + 闪米特诸族语言
    + IBM-{424,425,12712,16804}
  + 波斯语
    + IBM-1097
  + 泰语
    + IBM-{838,1160}
  + 老挝语
    + IBM-1132
  + 越南语
    + IBM-{1130,1164}
  + 印度语
    + IBM-1137

它可以通过 Unicode 从这些编码中的任何一种转换为任何其他编码
转换。

## 编译选项

使用 CMake 进行构建

+ `BUILD_TESTING`: 编译测试工具。默认为 `ON`.

```shell
cmake .. -DBUILD_TESTING=ON
cmake --build . --config=RelWithDebInfo
ctest -C RelWithDebInfo --output-on-failure
```

+ `ICONV_COMPAT`: 启用 iconv 兼容。默认为 `OFF`.

如果 `ICONV_COMPAT` 开启，会安装 `iconv.h` 和基本的函数。
但是我们不支持 POSIX:2024 的所有功能。参见 [TODO](TODO).

## 安装

此库安装：

+ 动态库 `libcppp-reiconv`。
+ 静态库 `libcppp-reiconv.static`。
+ 头文件。

```text
include
├── cppp
│   ├── cppp-platform.h
│   ├── encodings
│   │   ├── reiconv.h
│   │   └── reiconv.hpp
│   ├── reiconv.h
│   └── reiconv.hpp
└── iconv.h       # 仅当 ICONV_COMPAT 开启才存在
```

## 版权

cppp-reiconv 使用 LGPLv3，参见 [LICENSE](./LICENSE).

## 下载

参见 <https://github.com/cppp-project/cppp-reiconv/releases>

## 主页

<https://github.com/cppp-project/cppp-reiconv>

## Bug 反馈

+ 请在 GitHub 创建 issue [来一个](https://github.com/cppp-project/cppp-reiconv/issues/new/)
