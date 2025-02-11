# cppp-reiconv C++ API

C++ API 也许比 C API 慢一些。但它更方便。

## 版本信息 API

### `struct VersionInfo`

#### 描述

结构包含版本信息。

#### 值

- `int major`：主版本。
- `int minor`：次版本。
- `int patch`：修订版本。

### `reiconv::version`

#### 描述

这是一个描述当前库版本信息的变量。

#### 示例

```cpp
std::cout << "cppp-reiconv 版本：" << reiconv::version.major << "."
          << reiconv::version.minor << "." << reiconv::version.patch << std::endl;
```

## 编码转换 API

### `class reiconv::Encoding`

编码类封装了编码查找函数。

它可以转换为一个 int 值，等于内部的编码 id。

#### 从编码名称构造

从编码名称构造编码对象。

##### 定义

```cpp
public:
_CPPP_API Encoding(const char* const name);
_CPPP_API Encoding(const std::string& name);
```

##### 参数

- `name`：编码名称. 不允许 `//` 后缀。

##### 返回

- `Encoding`：编码对象。

##### 异常

- `std::invalid_argument`：如果编码名称无效。

#### 从代码页构造

从代码页构造编码对象。

##### 定义

```cpp
public:
_CPPP_API Encoding(const int codepage);
```

##### 参数

- `codepage`：代码页。这不能打开一个没有代码页的编码。

##### 返回

- `Encoding`：编码对象。

##### 异常

- `std::invalid_argument`：如果代码页无效。

#### 从编码 id 构造

##### 定义

```cpp
public:
constexpr Encoding(const Encodings index);
```

##### 参数

- `index`：编码 id。可用的编码 id 定义在枚举类 `reiconv::Encodings` 中。

##### 返回

- `Encoding`：编码对象。

##### 异常

无异常，**但我们不会检查编码 id 是否有效。所以请从 `reiconv::Encodings` 传递一个有效的编码 id。**
**否则，将发生未定义行为。**

#### 转换到 int

##### 定义

```cpp
public:
operator int() const noexcept;
```

##### 返回

- `int`：编码 id。

#### 比较

##### 定义

```cpp
public:
bool operator==(const Encoding other) const noexcept;
```

##### 参数

- `other`：另一个编码对象。

##### 返回

- `bool`：如果两个编码对象相等，则返回 true，则它们具有相同的编码 id。

#### 示例

```cpp
reiconv::Encoding gb18030(reiconv::Encodings::GB18030); // 从编码 id 构造
reiconv::Encoding cp936(936); // 从代码页构造
reiconv::Encoding cp936_2("cp936"); // 从编码名称构造
reiconv::Encoding utf8("UTF-8");

std::cout << "(int)gb18030: " << (int)gb18030 << std::endl;
std::cout << "cp936 == cp936_2: " << (cp936 == cp936_2) << std::endl; // 真
std::cout << "cp936 == utf8: " << (cp936 == utf8) << std::endl; // 假
```

### `enum class reiconv::ConvertFlag`

#### 定义

```c
enum class ConvertFlag
{
    NO_FLAGS = 0,
    DISCARD_ILSEQ = 1,
};
```

#### 描述

这是一个转换标志的位掩码。

- `NO_FLAGS`：无标志。这是默认值。
- `DISCARD_ILSEQ`：丢弃非法序列。与 iconv 的 `//IGNORE` 标志相同。

使用 `|` 来组合标志。在 `reiconv::convert` 函数中使用。

### `reiconv::convert()`

#### 定义

```cpp
extern _CPPP_API std::string convert(Encoding from, Encoding to, const std::string_view input, enum ConvertFlag flag = ConvertFlag::NO_FLAGS);
```

#### 描述

从一个编码转换为另一个编码。它会自动给输出字符串分配内存。

#### 参数

- `from`：源编码。
- `to`：目标编码。
- `input`：输入字符串。
- `flag`：转换标志。默认值为 `ConvertFlag::NO_FLAGS`。

#### 返回

- `std::string`：转换后的字符串。

#### 异常

- `std::system_error`：如果转换失败。用它因为它有 errno 设置。

#### 示例

```cpp
const std::string_view src = "\xb8\xfc\xcf\xb2\xe1\xba\xc9\xbd\xc7\xa7\xc0\xef\xd1\xa9\xa3\xac\xc8\xfd\xbe\xfc\xb9\xfd\xba\xf3\xbe\xa1\xbf\xaa\xd1\xd5\xa3\xa1";
std::string result = reiconv::convert(reiconv::Encodings::GB18030, "UTF-8", src);
std::cout << result << std::endl;
```

## 本地编码 API

### `reiconv::locale_charset()`

#### 定义

```c
extern _CPPP_API std::string_view locale_charset();
```

#### 描述

判断当前的本地编码。但是和 GNU LIBICONV 的实现不同，我们不会统一化编码名称。但是大多数的结果
可以在 `reiconv_open_from_name()` 中使用。除了一些非常罕见的编码或一些旧的 OSX 版本中的一些
特定的编码。这些编码在 cppp-reiconv 和 GNU LIBICONV 中都不支持。

#### 返回

当前本地编码的名称。

#### 示例

```cpp
std::setlocale(LC_ALL, "");
std::string_view charset = reiconv::locale_charset();
std::cout <<"Your locale charset is: " << charset << std::endl;
```
