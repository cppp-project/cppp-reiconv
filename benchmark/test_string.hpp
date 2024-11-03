constexpr const char* simple_test_string_utf8 = "S";

#define _big_test_string_utf8 "The quick brown fox jumps over the lazy dog.0123456789你好，世界！"

constexpr const char big_test_string_utf8[] = _big_test_string_utf8;

constexpr const char big_test_string_gb18030[] = "The quick brown fox jumps over the lazy dog.0123456789\xc4\xe3\xba\xc3\xa3\xac\xca\xc0\xbd\xe7\xa3\xa1";
