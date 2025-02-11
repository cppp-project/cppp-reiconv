# cppp-reiconv 文档

## 介绍

这是 `cppp-reiconv 3.0.0` 文档。不稳定版本。

cppp-reiconv 是一个可移植的 C/C++ 库，用于字符编码之间的转换和字符集检测。

## 依赖

### 构建

- 一个支持 C++20 的 C++ 编译器。
- CMake 3.12 或更高版本.

### 运行时

- C 运行时。
- 支持 C++20 的 C++ 运行时。

### 生成数据

我们需要为编码生成索引，它们存储在 `lib/generated` 中。

**如果你不感兴趣，你可以跳过这步骤。**
**我们已经在 Git 仓库和源码包提供了相关数据。**

- GNU Make.
- GNU Gperf.
- 一个 POSIX 操作系统.

安装以上工具以后，你可以用下面的命令生成数据：

```shell
make -f Makefile.devel -B
```

## API 参考

- [C API 和 iconv 兼容 API 参考](c-api.md)
- [C++ API 参考](cpp-api.md)
