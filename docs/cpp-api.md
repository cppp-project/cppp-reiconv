# cppp-reiconv C++ API

C++ API may a bit slower than C API. But it is more convenient to use.

## Version Information API

### `struct VersionInfo`

#### Description

This struct contains version information.

#### Values

- `int major`: Major version.
- `int minor`: Minor version.
- `int patch`: Patch version.

### `reiconv::version`

#### Description

It's a variable for version information of current library.

#### Example

```cpp
std::cout << "cppp-reiconv version: " << reiconv::version.major << "."
          << reiconv::version.minor << "." << reiconv::version.patch << std::endl;
```

## Encoding Conversion API

### `class reiconv::Encoding`

Encoding class wraps encoding lookup functions.

It can convert to a int value, equals to the internal encoding id.

#### Construct from a encoding name

Construct an encoding object from a encoding name.

##### Definition

```cpp
public:
_CPPP_API Encoding(const char* const name);
_CPPP_API Encoding(const std::string& name);
```

##### Parameters

- `name`: The encoding name. `//` suffix is not allowed.

##### Return

- `Encoding`: The encoding object.

##### Throws

- `std::invalid_argument`: If the encoding name is not valid.

#### Construct from a codepage

Construct an encoding object from a codepage.

##### Definition

```cpp
public:
_CPPP_API Encoding(const int codepage);
```

##### Parameters

- `codepage`: The codepage. This cannot open a encoding that do not have a
codepage.

##### Return

- `Encoding`: The encoding object.

##### Throws

- `std::invalid_argument`: If the codepage is invalid.

#### Construct from a encoding id

##### Definition

```cpp
public:
constexpr Encoding(const Encodings index);
```

##### Parameters

- `index`: The encoding id. Available encoding ids are defined in enum class `reiconv::Encodings`.

##### Return

- `Encoding`: The encoding object.

##### Throws

noexcept, **but we will not check if the encoding id is valid. So please pass a valid**
**encoding id from `reiconv::Encodings`. Or you will get undefined behavior.**

#### Convert to int

##### Definition

```cpp
public:
operator int() const noexcept;
```

##### Return

- `int`: The encoding id.

#### Comparation

##### Definition

```cpp
public:
bool operator==(const Encoding other) const noexcept;
```

##### Parameters

- `other`: The other encoding object.

##### Return

- `bool`: True if the two encoding objects are equal. If equal, they have the
same encoding id.

#### Example

```cpp
reiconv::Encoding gb18030(reiconv::Encodings::GB18030); // Open from encoding id.
reiconv::Encoding cp936(936); // Open from codepage.
reiconv::Encoding cp936_2("cp936"); // Open from encoding name.
reiconv::Encoding utf8("UTF-8");

std::cout << "(int)gb18030: " << (int)gb18030 << std::endl;
std::cout << "cp936 == cp936_2: " << (cp936 == cp936_2) << std::endl; // True
std::cout << "cp936 == utf8: " << (cp936 == utf8) << std::endl; // False
```

### `enum class reiconv::ConvertFlag`

#### Definition

```c
enum class ConvertFlag
{
    NO_FLAGS = 0,
    DISCARD_ILSEQ = 1,
};
```

#### Description

This is a bitmask for conversion flags.

- `NO_FLAGS`: No flags. Pass it by default.
- `DISCARD_ILSEQ`: Discard invalid sequence.
It's same as iconv's `//IGNORE` flag.

Use `|` to combine flags. Use it in `reiconv::convert` function.

### `reiconv::convert()`

#### Definition

```cpp
extern _CPPP_API std::string convert(Encoding from, Encoding to, const std::string_view input, enum ConvertFlag flag = ConvertFlag::NO_FLAGS);
```

#### Description

Convert a string from one encoding to another. It will automatically allocate
memory for the output string.

#### Parameters

- `from`: The source encoding.
- `to`: The target encoding.
- `input`: The input string.
- `flag`: The conversion flags. Default is `ConvertFlag::NO_FLAGS`.

#### Return

- `std::string`: The converted string.

#### Throws

std::system_error if the conversion failed. Use it because it's has errno set.

#### Example

```cpp
const std::string_view src = "\xb8\xfc\xcf\xb2\xe1\xba\xc9\xbd\xc7\xa7\xc0\xef\xd1\xa9\xa3\xac\xc8\xfd\xbe\xfc\xb9\xfd\xba\xf3\xbe\xa1\xbf\xaa\xd1\xd5\xa3\xa1";
std::string result = reiconv::convert(reiconv::Encodings::GB18030, "UTF-8", src);
std::cout << result << std::endl;
```

## Locale charset API

### `reiconv::locale_charset()`

#### Definition

```c
extern _CPPP_API std::string_view locale_charset();
```

#### Description

Determine the current locale's character encoding. But not same as GNU LIBICONV's
implementation, we will not canonicalize the encoding name. But nearly the most of
it's result can be used in `reiconv::Encoding()`. Except for some VERY RARE
encodings or some OSX specific encodings in old OSX versions. These encodings are
not supported in cppp-reiconv and GNU LIBICONV.

#### Return

The current locale's character encoding.

#### Example

```c
std::setlocale(LC_ALL, "");
std::string_view charset = reiconv::locale_charset();
std::cout <<"Your locale charset is: " << charset << std::endl;
```
