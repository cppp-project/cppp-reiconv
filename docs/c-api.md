# cppp-reiconv C API

Although we have C API, we still require C++20 runtime.

header file `cppp/reiconv.h` contains all C API.

## Version Information API

### `struct VersionInfo`

#### Description

This struct contains version information.

#### Values

- `int major`: Major version.
- `int minor`: Minor version.
- `int patch`: Patch version.

### `reiconv_version`

#### Description

It's a variable for version information of current library.

#### Example

```c
printf("cppp-reiconv version: %d.%d.%d\n", reiconv_version.major, reiconv_version.minor, reiconv_version.patch);
```

## Encoding Names API

### `reiconv_name_canonicalize()`

#### Definition

```c
extern _CPPP_API size_t reiconv_name_canonicalize(const char *name, char *outbuf);
```

#### Description

Canonicalize an encoding name. the `canonical` means the internal name of
encoding. Not the canonical name of IANA.
We will ignore '-' and '_', and uppercase all characters.

Segment fault if `name` or `outbuf` is `nullptr`. We will not check the
length of `outbuf`

**This function is not recommended to use.**

#### Parameters

- `name`: The encoding name to be canonicalized.
- `outbuf`: The buffer for storing the canonicalized name.
Must allocated with enough space.

#### Return

The length of canonicalized name.

#### Example

```c
const char* name = "UCS-4"
char outbuf[256];
size_t outbuf_size = reiconv_name_canonicalize(name, outbuf);
// outbuf_size == 4, outbuf == "UCS4"
```

### `reiconv_lookup_from_name()`

#### Definition

```c
extern _CPPP_API int reiconv_lookup_from_name(const char *encoding);
```

#### Description

Lookup an encoding by it's name.

#### Parameters

- `encoding`: The encoding name. It's not case sensitive.
**It must be a valid pointer, or it will cause undefined behavior.**

#### Return

The encoding index. If the it is not found, `-1` is returned.

The `encoding index` is the unique ID in cppp-reiconv's internal.
Used in `reiconv_open()` function.

#### Example

```c
int encoding_index = reiconv_lookup_from_name("UTF-8");
```

### `reiconv_lookup_from_codepage()`

#### Definition

```c
extern _CPPP_API int reiconv_lookup_from_codepage(int codepage);
```

#### Description

Lookup an encoding by it's codepage.

#### Parameters

- `codepage`: The codepage.

#### Return

The encoding index. If the it is not found, `-1` is returned.

#### Example

```c
// Same as reiconv_lookup_from_name("CP936")
int encoding_index = reiconv_lookup_from_codepage(936);
```

## Encoding Conversion API

### `reiconv_t`

#### Definition

```c
typedef void* reiconv_t;
```

#### Description

This is our conversion descriptor type. It's a pointer to a internal `conv_struct`.
Although cppp-reiconv is based on GNU LIBICONV, but our `conv_struct` is not
compatible with GNU LIBICONV's.

### `ConvertFlag`

#### Definition

```c
enum ConvertFlag
{
    REICONV_NO_FLAGS = 0,
    REICONV_DISCARD_ILSEQ = 1,
};
```

#### Description

This is a bitmask for conversion flags.

- `REICONV_NO_FLAGS`: No flags. Pass it by default.
- `REICONV_DISCARD_ILSEQ`: Discard invalid sequence.
It's same as iconv's `//IGNORE` flag.

### `reiconv_open_from_index()`

#### Definition

```c
extern _CPPP_API reiconv_t reiconv_open_from_index(int fromcode, int tocode, enum ConvertFlag flags);
```

#### Description

Open a conversion descriptor from encoding index.
**Indexes MUST BE VALID or the behavior is undefined.**

#### Parameters

- `fromcode`: The encoding index of source encoding.
**CAUTION: reiconv's descriptor open function parameters order is `fromcode` -> `tocode`.**
**But iconv's is `tocode` -> `fromcode`!**
- `tocode`: The encoding index of target encoding. We recommend you to use
encodings enum defined in `cppp/encodings/reiconv.h`. It's automatically generated.
See example below.
- `flags`: The conversion flags.
The `flags` is a bitmask. See `ConvertFlag` for more information.

#### Return

If the conversion descriptor cannot be created, returns `(reiconv_t)(-1)`
with errno set. It's same as iconv's return value. **NOT NULL!**
<!-- Why not NULL? -->

This function will error only when memory allocation failed.
**It will not check the validity of `fromcode` and `tocode`!**
**You should always pass encoding index from encodings enum!**

#### Example

```c
reiconv_t cd = reiconv_open_from_index(
    ENCODING_UTF8, /* Encodings enum always starts with ENCODING_ in C API. */
    ENCODING_GB18030, /* See the header file for more information. */
    REICONV_DISCARD_ILSEQ /* This flag means discard invalid sequence. */
);
if (cd == (reiconv_t)(-1))
{
    perror("reiconv_open_from_index");
}
```

### `reiconv_open_from_codepage()`

#### Definition

```c
extern _CPPP_API reiconv_t reiconv_open_from_codepage(int fromcode, int tocode, enum ConvertFlag flags);
```

#### Description

Open a conversion descriptor from codepage. This is a shortcut for
`reiconv_lookup_from_codepage()` + `reiconv_open_from_index()`.
See `reiconv_open_from_index()` for more information of parameters.

#### Parameters

- `fromcode`: The codepage of source encoding.
- `tocode`: The codepage of target encoding.
- `flags`: The conversion flags.

#### Return

If the conversion descriptor cannot be created,
returns `(reiconv_t)(-1)` with errno set.
It will check the validity of `fromcode` and `tocode`.

Some encodings may not have codepage. You should open them by index or name.

#### Example

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

CP936 is a little different from GBK instead. See `lib/converters/cp936.h`.

The comments in `lib/converters/cp936.h` says (from Bruno Haible):

> The IANA has CP936 as an alias of GBK. But GBK is an official Chinese
> specification, whereas CP936 is de-facto maintained by Microsoft. And,
> of course, Microsoft modified CP936 since 1999.
>
> The differences from GBK are:
>
> - A single character:
>
> | GBK    | CP936              |
> | :----: | :----:             |
> | 0x80   | 0x20AC # EURO SIGN |
>
> Some variants of CP936 (in JDK, Windows-2000, ICU) also add:
>
> - Private area mappings:
>
> | code                      | Unicode        |
> | :----:                    | :----:         |
> | 0x{A1..A2}{40..7E,80..A0} | U+E4C6..U+E585 |
> | 0x{AA..AF,F8..FE}{A1..FE} | U+E000..U+E4C5 |
>
> We add them too because, although there are backward compatibility problems
> when a character from a private area is moved to an official Unicode code
> point, they are useful for some people in practice.

### `reiconv_open_from_name()`

#### Definition

```c
extern _CPPP_API reiconv_t reiconv_open_from_name(const char *fromcode, const char *tocode, enum ConvertFlag flags);
```

#### Description

Open a conversion descriptor from encoding name.
This is a shortcut for `reiconv_lookup_from_name()` + `reiconv_open_from_index()`.
See `reiconv_open_from_index()` for more information of parameters.

#### Parameters

- `fromcode`: The name of source encoding. It can only pass encoding name.
control suffix like `//IGNORE` or `//TRANSLIT` **is not allowed**.
- `tocode`: The name of target encoding.
- `flags`: The conversion flags.

#### Return

If the conversion descriptor cannot be created,
returns `(reiconv_t)(-1)` with errno set.
It will check the validity of `fromcode` and `tocode`.

#### Example

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

#### Definition

```c
extern _CPPP_API size_t reiconv_result_size(reiconv_t cd, const char *start, size_t inlength);
```

#### Description

Get the size of converted string.

#### Parameters

- `cd`: The conversion descriptor.
- `start`: The start of input string.
- `inlength`: The length of input string.

#### Return

The size of converted string. If the conversion failed, returns `(size_t)(-1)`

**It's don't support flags now, so `flags` is always `REICONV_NO_FLAGS`. We will**
**support it in the next version. So this API will change in the next version.**

#### Example

```c
const char input[] = "Hello, World!";
size_t result_size = reiconv_result_size(cd, input, strlen(input));

if (result_size == (size_t)(-1))
{
    perror("reiconv_result_size");
}
```

### `reiconv_convert_static_size()`

#### Definition

```c
extern _CPPP_API int reiconv_convert_static_size(reiconv_t cd, const char *input_data, size_t input_length,
                                                 char *output_data, size_t output_length);
```

#### Description

Converts a string using conversion descriptor `cd`, with a static size output buffer.

If the output buffer is too small, -1 is returned.

If the output buffer is too big, the rest of the buffer will not change.

This function is useful when you want to convert a string to a fixed size buffer
like stack buffer. It's faster than `reiconv_convert`

#### Parameters

- `cd`: The conversion descriptor.
- `input_data`: The input buffer.
- `input_length`: The length of input buffer.
- `output_data`: The output buffer.
- `output_length`: The length of output buffer.

#### Return

The length of converted string. If the conversion failed, returns `(size_t)(-1)`.

#### Example

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

#### Definition

```c
extern _CPPP_API int reiconv_convert(reiconv_t cd, const char *input_data, size_t input_length, char **output_data_ptr,
                                     size_t *output_length_ptr);
```

#### Description

Converts an string from one encoding to another.

This function is the most convenient function of cppp-reiconv. It will automatically
summary the size of converted string, and allocate memory for you.

But size summary is always a little slow. If you know the size of converted string,
you should use `reiconv_convert_static_size()` instead.

This function does not treat zero characters specially.

Its code comes from `iconv_string()` in GNU LIBICONV's repository.

See <https://git.savannah.gnu.org/cgit/libiconv.git/tree/extras/iconv_string.h>

Bruno Haible put this file into the public domain.
`iconv_string.h` is not part of the GNU LIBICONV Library.

#### Parameters

- `cd`: The conversion descriptor.
- `input_data`: The input buffer.
- `input_length`: The length of input buffer.
- `output_data_ptr`: The output buffer's pointer. If it point to a `NULL` pointer,
we will allocate memory for you and set it to the result buffer. If pointed but
not `NULL`, we will use it as the output buffer but reallocate it. So it must be
a pointer that can be modified.
**But don't let it value to `NULL`!**
- `output_length_ptr`: The length of output buffer. If NULL, error will be occured.

#### Return

We only return `0` if success. If failed, returns `-1` with errno set.
Our output buffer is saved in `output_data_ptr`.

**NOTE: Please free the output buffer after use it!**
**It's always dynamic allocated!**

#### Example

```c
const char input[] = "Hello, World!";
char *output = NULL; /* NULL means we will allocate memory for you. */
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
char* output = malloc(1); /* We will reallocate it. */
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

#### Definition

```c
extern _CPPP_API int reiconv_handle_close(reiconv_t cd);
```

#### Description

Close a conversion descriptor.

#### Parameters

- `cd`: The conversion descriptor.

#### Return

We only return `0` if success. We always return `0` now.
Because we only need to free the conversion descriptor's memory.

#### Example

```c
/* This function need a example??? */
reiconv_handle_close(cd);
```

## Locale charset API

### `locale_charset()`

#### Definition

```c
extern _CPPP_API const char* locale_charset();
```

#### Description

Determine the current locale's character encoding. But not same as GNU LIBICONV's
implementation, we will not canonicalize the encoding name. But nearly the most of
it's result can be used in `reiconv_open_from_name()`. Except for some VERY RARE
encodings or some OSX specific encodings in old OSX versions. These encodings are
not supported in cppp-reiconv and GNU LIBICONV.

#### Return

The current locale's character encoding.

#### Example

```c
setlocale(LC_ALL, "");
const char* charset = locale_charset();
printf("Your locale charset is: %s\n", charset);
```

## Iconv compatibility API

**This API is not recommended to use in `cppp/reiconv.h`. Use it in our `iconv.h`**
**instead.**

Iconv compatibility is disabled by default. You can enable it by defining
`-DICONV_COMPAT=ON` when you configure cppp-reiconv.

See "Iconv support" section below.

### `iconv_t`, aka `reiconv_t` in `cppp/reiconv.h`

#### Definition

```c
#define iconv_t reiconv_t
```

Same as `reiconv_t` up above.

### `iconv_open`, aka `reiconv_open()` in `cppp/reiconv.h`

#### Definition

In `cppp/reiconv.h`:

```c
extern _CPPP_API reiconv_t reiconv_open(const char *tocode, const char *fromcode);
```

In `iconv.h`:

```c
#define iconv_open reiconv_open
```

#### Description

Open a conversion descriptor. For iconv compatibility.

#### Parameters

- `tocode`: The name of target encoding. **CAUTION: iconv-compatible API's**
**parameters order is `fromcode` -> `tocode`!**
- `fromcode`: The name of source encoding. We support `//IGNORE` now.

#### Return

The conversion descriptor. (reiconv_t)(-1) is returned if error occured with
errno set.

### `iconv`, aka `reiconv_iconv()` in `cppp/reiconv.h`

#### Definition

In `cppp/reiconv.h`:

```c
extern _CPPP_API size_t reiconv_iconv(reiconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf,
                                      size_t *outbytesleft);
```

In `iconv.h`:

```c
#define iconv reiconv_iconv
```

#### Description

Do conversion. For iconv compatibility.

See `man 3 iconv`.

#### Parameters

- `cd`: The conversion descriptor.
- `inbuf`: The input buffer.
- `inbytesleft`: The length of input buffer.
- `outbuf`: The output buffer.
- `outbytesleft`: The length of output buffer.

#### Return

The length of converted string.

### `iconv_close`, aka `reiconv_handle_close()` in `cppp/reiconv.h`

#### Definition

In `iconv.h`:

```c
#define iconv_close reiconv_handle_close
```

Same as `reiconv_handle_close()` up above.
