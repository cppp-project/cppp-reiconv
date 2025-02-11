# cppp-reiconv C API

尽管我们提供 C API，我们仍需 C++20 运行时

头文件 `cppp/reiconv.h` 包含所有的 C API.

## 版本信息 API

### `struct VersionInfo`

#### 描述

这是包含了版本信息的结构体。

#### 值

- `int major`：主版本号。
- `int minor`：次版本号。
- `int patch`：修订版本号。

### `reiconv_version`

#### 描述

这是一个描述当前库版本信息的变量。

#### 示例

```c
printf("cppp-reiconv 版本: %d.%d.%d\n", reiconv_version.major, reiconv_version.minor, reiconv_version.patch);
```

## 编码名称 API

### `reiconv_name_canonicalize()`

#### 定义

```c
extern _CPPP_API size_t reiconv_name_canonicalize(const char *name, char *outbuf);
```

#### 描述

统一化编码名称. `canonical` 指的是规范成内部的格式，不是 IANA 的格式。
我们会忽略 '-' 和 '_'，并将所有字符转换为大写。

当 `name` 或 `outbuf` 为 `nullptr` 时，会发生段错误。我们不会检查 `outbuf` 的长度。

**这是一个不推荐使用的函数。**

#### 参数

- `name`：需要统一化的编码名称。
- `outbuf`：用于存储统一化后的编码名称的缓冲区。必须分配足够的空间。

#### 返回值

统一化后的编码名称的长度。

#### 示例

```c
const char* name = "UCS-4"
char outbuf[256];
size_t outbuf_size = reiconv_name_canonicalize(name, outbuf);
// outbuf_size == 4, outbuf == "UCS4"
```

### `reiconv_lookup_from_name()`

#### 定义

```c
extern _CPPP_API int reiconv_lookup_from_name(const char *encoding);
```

#### 描述

通过编码名称查找编码。

#### 参数

- `encoding`：编码名称。大小写不敏感。
**必须是有效的指针，否则会导致未定义行为。**

#### 返回值

返回编码索引。未找到则返回 `-1`。

`encoding index` 是 cppp-reiconv 内部的唯一 ID。在 `reiconv_open()` 函数中使用。

#### 示例

```c
int encoding_index = reiconv_lookup_from_name("UTF-8");
```

### `reiconv_lookup_from_codepage()`

#### 定义

```c
extern _CPPP_API int reiconv_lookup_from_codepage(int codepage);
```

#### 描述

通过代码页查找一个编码。

#### 参数

- `codepage`：代码页。

#### 返回值

返回代码页索引，未找到则返回 `-1`。

#### 示例

```c
// 与 reiconv_lookup_from_name("CP936") 相同
int encoding_index = reiconv_lookup_from_codepage(936);
```

## 编码转换 API

### `reiconv_t`

#### 定义

```c
typedef void* reiconv_t;
```

#### 描述

这是一个指向内部 `conv_struct` 的指针。尽管 cppp-reiconv 基于 GNU LIBICONV，
但我们的 `conv_struct` 互不兼容。

### `ConvertFlag`

#### 定义

```c
enum ConvertFlag
{
    REICONV_NO_FLAGS = 0,
    REICONV_DISCARD_ILSEQ = 1,
};
```

#### 描述

这是一个位掩码，用于表明转换标志。

- `REICONV_NO_FLAGS`：无标志。默认传入这个。
- `REICONV_DISCARD_ILSEQ`：丢弃非法序列。与 iconv 的 `//IGNORE` 标志相同。

### `reiconv_open_from_index()`

#### 定义

```c
extern _CPPP_API reiconv_t reiconv_open_from_index(int fromcode, int tocode, enum ConvertFlag flags);
```

#### 描述

通过编码索引打开一个转换描述符。
**索引必须有效，否则行为未定义。**

#### 参数

- `fromcode`：源编码索引。
**注意：reiconv 的描述符打开函数的参数顺序是先有 `fromcode` 后有 `tocode`。**
**但是 iconv 先有 `tocode` 后有 `fromcode`！**
- `tocode`：目标编码索引。我们推荐你使用编码枚举而不是代码页。
编码枚举定义在 `cppp/encodings/reiconv.h`。这是自动生成的。参见下面的示例。
- `flags`：转换标志。
`flags` 是一个位掩码。参见 `ConvertFlag` 了解更多信息。

#### 返回值

如果转换描述符无法创建，返回 `(reiconv_t)(-1)`，并且设置 errno。
这和 iconv 的返回值相同。**不是 NULL！**
<!-- Why not NULL? -->

这个函数只会在内存分配失败时出错。
**它不会检查 `fromcode` 和 `tocode` 的有效性！**
**你应该只传递编码枚举的索引！**

#### 示例

```c
reiconv_t cd = reiconv_open_from_index(
    ENCODING_UTF8, /* C API 中的编码枚举项均以 ENCODING_ 为前缀。 */
    ENCODING_GB18030, /* 查看头文件获取详细信息。 */
    REICONV_DISCARD_ILSEQ /* 这个标志意思是丢弃非法序列。 */
);
if (cd == (reiconv_t)(-1))
{
    perror("reiconv_open_from_index");
}
```

### `reiconv_open_from_codepage()`

#### 定义

```c
extern _CPPP_API reiconv_t reiconv_open_from_codepage(int fromcode, int tocode, enum ConvertFlag flags);
```

#### 描述

通过代码页打开一个转换描述符。这是 `reiconv_lookup_from_codepage()` + `reiconv_open_from_index()`
的快捷方式。
参见 `reiconv_open_from_index()` 了解更多参数信息。

#### 参数

- `fromcode`：源编码的代码页。
- `tocode`：目标编码的代码页。
- `flags`：转换标志。

#### 返回值

如果转换描述符无法创建，返回 `(reiconv_t)(-1)`，并且设置 errno。
我们会检查 `fromcode` 和 `tocode` 的有效性。

一些编码可能没有代码页。你应该通过索引或名称来打开它们。

#### 示例

```c
reiconv_t cd = reiconv_open_from_codepage(
    65001, /* UTF-8 */
    936, /* CP936 */
    REICONV_DISCARD_ILSEQ
);
if (cd == (reiconv_t)(-1))
{
    perror("reiconv_open_from_codepage");
}
```

CP936 和 GBK 实际上有些区别. 参见 `lib/converters/cp936.h`.

`lib/converters/cp936.h` 中的注释是这样说的（来自 Bruno Haible）：

> IANA 将 CP936 作为 GBK 的别名。但 GBK 是官方的中文规范，而 CP936 实际上是由微软维护的。
> 当然，自 1999 年以来，微软对 CP936 进行了修改。
>
> 与 GBK 的区别如下：
>
> - 单个字符：
>
> | GBK    | CP936              |
> | :----: | :----:             |
> | 0x80   | 0x20AC # 欧元符号   |
>
> 一些 CP936 的变体（在 JDK、Windows-2000、ICU 中）还添加了：
>
> - 私有区域映射：
>
> | 代码                      | Unicode        |
> | :----:                    | :----:         |
> | 0x{A1..A2}{40..7E,80..A0} | U+E4C6..U+E585 |
> | 0x{AA..AF,F8..FE}{A1..FE} | U+E000..U+E4C5 |
>
> 我们也添加了这些映射，因为尽管当私有区域的字符被移动到官方的 Unicode 码点时会出现向后兼容性问题，但它们在实践中对某些人非常有用。

### `reiconv_open_from_name()`

#### 定义

```c
extern _CPPP_API reiconv_t reiconv_open_from_name(const char *fromcode, const char *tocode, enum ConvertFlag flags);
```

#### 描述

通过编码名称打开一个转换描述符。
这是 `reiconv_lookup_from_name()` + `reiconv_open_from_index()` 的快捷方式。
参见 `reiconv_open_from_index()` 了解更多参数信息。

#### 参数

- `fromcode`：源编码的名称。只能传入编码名称，**不允许传入**`//IGNORE` or `//TRANSLIT` 等控制后缀。
- `tocode`：目标编码的名称。
- `flags`：转换标志。

#### 返回值

如果转换描述符无法创建，返回 `(reiconv_t)(-1)`，并且设置 errno。
它会检查 `fromcode` 和 `tocode` 的有效性。

#### 示例

```c
reiconv_t cd = reiconv_open_from_name(
    "UTF-8",
    "GB18030",
    REICONV_NO_FLAGS
);
if (cd == (reiconv_t)(-1))
{
    perror("reiconv_open_from_name");
}
```

### `reiconv_result_size()`

#### 定义

```c
extern _CPPP_API size_t reiconv_result_size(reiconv_t cd, const char *start, size_t inlength);
```

#### 描述

获取转换后的字符串大小。

#### 参数

- `cd`：转换描述符。
- `start`：输入的字符串。
- `inlength`：输入字符串的长度。

#### 返回值

转换后的字符串大小。如果转换失败，返回 `(size_t)(-1)`。

**目前这个 API 不支持转换标志。所以 `flags` 永远是 `REICONV_NO_FLAGS`。我们会在**
**下一个版本中支持它。所以这个 API 会在下一个版本中改变。**

#### 示例

```c
const char input[] = "Hello, World!";
size_t result_size = reiconv_result_size(cd, input, strlen(input));

if (result_size == (size_t)(-1))
{
    perror("reiconv_result_size");
}
```

### `reiconv_convert_static_size()`

#### 定义

```c
extern _CPPP_API int reiconv_convert_static_size(reiconv_t cd, const char *input_data, size_t input_length,
                                                 char *output_data, size_t output_length);
```

#### 描述

用转换描述符 `cd` 转换一个字符串，使用一个静态大小的输出缓冲区。

如果输出缓冲区太小，返回 `-1`。

如果输出缓冲区太大，输出缓冲区的其余部分不会改变。

当你想要将一个字符串转换为一个固定大小的缓冲区（比如栈缓冲区）时，这个函数非常有用。
它比 `reiconv_convert` 快。

#### 参数

- `cd`：转换描述符。
- `input_data`：输入的字符串。
- `input_length`：输入字符串的长度。
- `output_data`：输出的字符串。
- `output_length`：输出字符串的长度。

#### 返回值

转换后的字符串长度。如果转换失败，返回 `(size_t)(-1)`。

#### 示例

```c
const char input[] = "Hello, World!";
char output[256];
size_t result_size = reiconv_convert_static_size(cd, input, strlen(input), output, sizeof(output));
if (result_size == (size_t)(-1))
{
    perror("reiconv_convert_static_size");
}
```

### `reiconv_convert()`

#### 定义

```c
extern _CPPP_API int reiconv_convert(reiconv_t cd, const char *input_data, size_t input_length, char **output_data_ptr,
                                     size_t *output_length_ptr);
```

#### 描述

把一段文本从一个编码转换到另一个编码。

这是 cppp-reiconv 中最方便的函数。它会自动计算转换后的字符串大小，并且为你分配内存。

但是计算转换后的字符串大小总是很慢的。如果你知道转换后的字符串大小，你应该使用
`reiconv_convert_static_size()` 代替。

此函数不会特殊处理零字符。

Its code comes from `iconv_string()` in GNU LIBICONV's repository.

它的代码来自 GNU LIBICONV 仓库中的 `iconv_string()`。

参见 <https://git.savannah.gnu.org/cgit/libiconv.git/tree/extras/iconv_string.h>

Bruno Haible 把这个文件放到了公共领域。`iconv_string.h` 不是 GNU LIBICONV 库的一部分。

#### 参数

- `cd`：转换描述符。
- `input_data`：输入的字符串。
- `input_length`：输入字符串的长度。
- `output_data_ptr`：输出缓冲区的指针。如果它指向一个 `NULL` 指针，我们会为你分配内存,
并且将它设置为结果缓冲区。如果指向某个指针但不是 `NULL`，我们将使用它作为输出缓冲区，
并且重新分配它。所以它必须是一个可以修改的指针。
**但是不要让 output_data_ptr 的值为 `NULL`！**
- `output_length_ptr`：输出缓冲区的长度。如果为 `NULL`，会发生错误。

#### 返回值

我们只在成功时返回 `0`。如果失败，返回 `-1` 并设置 errno。我们将输出缓冲区保存在
`output_data_ptr` 中。

**注意：请在使用后释放输出缓冲区！它总是动态分配的！**

#### 示例

```c
const char input[] = "Hello, World!";
char *output = NULL; /* NULL 意味着我们会为你动态分配内存。 */
size_t output_length = 0;
int result = reiconv_convert(cd, input, strlen(input), &output, &output_length);
if (result == -1)
{
    perror("reiconv_convert");
}
printf("%zu: %s\n", output_length, output);
free(output);
```

```c
const char input[] = "Hello, World!";
char* output = malloc(1); /* 我们会重分配它。 */
if (output == NULL)
{
    perror("malloc");
}
size_t output_length = 0;
int result = reiconv_convert(cd, input, strlen(input), &output, &output_length);
if (result == -1)
{
    perror("reiconv_convert");
}
printf("%zu: %s\n", output_length, output);
free(output);
```

### `reiconv_handle_close()`

#### 定义

```c
extern _CPPP_API int reiconv_handle_close(reiconv_t cd);
```

#### 描述

关闭一个转换描述符。

#### 参数

- `cd`：转换描述符。

#### 返回值

我们在成功时返回 `0`。现在我们只返回 `0`。因为我们只需要释放转换描述符的内存。

#### 示例

```c
/* 这还要示例？？？ */
reiconv_handle_close(cd);
```

## 本地编码 API

### `locale_charset()`

#### 定义

```c
extern _CPPP_API const char* locale_charset();
```

#### 描述

判断当前的本地编码。但是和 GNU LIBICONV 的实现不同，我们不会统一化编码名称。但是大多数的结果
可以在 `reiconv_open_from_name()` 中使用。除了一些非常罕见的编码或一些旧的 OSX 版本中的一些
特定的编码。这些编码在 cppp-reiconv 和 GNU LIBICONV 中都不支持。

#### 返回值

当前本地编码的名称。

#### 示例

```c
setlocale(LC_ALL, "");
const char* charset = locale_charset();
printf("你的本地编码是：%s\n", charset);
```

## Iconv 兼容 API

**这些 API 不推荐在 `cppp/reiconv.h` 中使用。请在 `iconv.h` 中使用它们。**

Iconv 兼容性默认是禁用的。你可以在配置 cppp-reiconv 时定义 `-DICONV_COMPAT=ON` 来启用它。

### `iconv_t`，即 `cppp/reiconv.h` 中的 `reiconv_t`

#### 定义

```c
#define iconv_t reiconv_t
```

和上文 `reiconv_t` 相同。

### `iconv_open`，即 `cppp/reiconv.h` 中的 `reiconv_open()`

#### 定义

在 `cppp/reiconv.h` 中：

```c
extern _CPPP_API reiconv_t reiconv_open(const char *tocode, const char *fromcode);
```

在 `iconv.h` 中：

```c
#define iconv_open reiconv_open
```

#### 描述

打开一个转换描述符。用于 iconv 兼容性。

#### 参数

- `tocode`：目标编码的名称。**注意：iconv 兼容 API 的参数顺序是先 `fromcode` 后 `tocode`！**
- `fromcode`：源编码的名称。我们现在支持 `//IGNORE`。

#### 返回值

转换描述符。如果出错，返回 `(reiconv_t)(-1)`，并且设置 errno。

### `iconv`，即 `cppp/reiconv.h` 中的 `reiconv_iconv()`

#### 定义

在 `cppp/reiconv.h` 中：

```c
extern _CPPP_API size_t reiconv_iconv(reiconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf,
                                      size_t *outbytesleft);
```

在 `iconv.h` 中：

```c
#define iconv reiconv_iconv
```

#### 描述

执行转换。用于 iconv 兼容性。

参见 `man 3 iconv`。

#### 参数

- `cd`：转换描述符。
- `inbuf`：输入缓冲区。
- `inbytesleft`：输入缓冲区的长度。
- `outbuf`：输出缓冲区。
- `outbytesleft`：输出缓冲区的长度。

#### 返回值

转换后的字符串长度。

### `iconv_close`，即 `cppp/reiconv.h` 中的 `reiconv_handle_close()`

#### 定义

在 `iconv.h` 中：

```c
#define iconv_close reiconv_handle_close
```

与上文 `reiconv_handle_close()` 相同。
