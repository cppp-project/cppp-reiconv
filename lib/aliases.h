/* ANSI-C code produced by gperf version 3.0 */
/* Command-line: gperf -m 10 lib/aliases.gperf  */
/* Computed positions: -k'1,3-11,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "lib/aliases.gperf"
struct alias { const char* name; unsigned int encoding_index; };

#define TOTAL_KEYWORDS 324
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 15
#define MAX_HASH_VALUE 879
/* maximum key range = 865, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
aliases_hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      880, 880, 880, 880, 880, 880, 880, 880, 880, 880,
      880, 880, 880, 880, 880, 880, 880, 880, 880, 880,
      880, 880, 880, 880, 880, 880, 880, 880, 880, 880,
      880, 880, 880, 880, 880, 880, 880, 880, 880, 880,
      880, 880, 880, 880, 880,   6,  69, 880,  44,   5,
        6,  18,  60,   9,   8,  50,  14,  13, 271, 880,
      880, 880, 880, 880, 880, 107, 152,   5,  29,   7,
       43, 112,  42,   5, 341, 106,  10, 158,   8,   5,
        6, 880,  61,  38,  98, 152, 194, 112,  30,  10,
        6, 880, 880, 880, 880,  60, 880, 880, 880, 880,
      880, 880, 880, 880, 880, 880, 880, 880, 880, 880,
      880, 880, 880, 880, 880, 880, 880, 880, 880, 880,
      880, 880, 880, 880, 880, 880, 880, 880
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct alias aliases[] =
  {
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 271 "lib/aliases.gperf"
    {"CN", ei_iso646_cn},
    {(char*)0},
#line 60 "lib/aliases.gperf"
    {"L1", ei_iso8859_1},
#line 68 "lib/aliases.gperf"
    {"L2", ei_iso8859_2},
    {(char*)0},
#line 133 "lib/aliases.gperf"
    {"L6", ei_iso8859_10},
#line 125 "lib/aliases.gperf"
    {"L5", ei_iso8859_9},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 147 "lib/aliases.gperf"
    {"L8", ei_iso8859_14},
    {(char*)0}, {(char*)0},
#line 196 "lib/aliases.gperf"
    {"862", ei_cp862},
#line 76 "lib/aliases.gperf"
    {"L3", ei_iso8859_3},
    {(char*)0}, {(char*)0},
#line 200 "lib/aliases.gperf"
    {"866", ei_cp866},
#line 51 "lib/aliases.gperf"
    {"C99", ei_c99},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 301 "lib/aliases.gperf"
    {"EUCCN", ei_euc_cn},
    {(char*)0}, {(char*)0},
#line 167 "lib/aliases.gperf"
    {"CP1251", ei_cp1251},
    {(char*)0},
#line 170 "lib/aliases.gperf"
    {"CP1252", ei_cp1252},
#line 194 "lib/aliases.gperf"
    {"CP862", ei_cp862},
#line 300 "lib/aliases.gperf"
    {"EUC-CN", ei_euc_cn},
    {(char*)0},
#line 182 "lib/aliases.gperf"
    {"CP1256", ei_cp1256},
#line 198 "lib/aliases.gperf"
    {"CP866", ei_cp866},
#line 179 "lib/aliases.gperf"
    {"CP1255", ei_cp1255},
#line 311 "lib/aliases.gperf"
    {"HZ", ei_hz},
    {(char*)0},
#line 331 "lib/aliases.gperf"
    {"CP1361", ei_johab},
#line 294 "lib/aliases.gperf"
    {"CP932", ei_cp932},
    {(char*)0},
#line 57 "lib/aliases.gperf"
    {"CP819", ei_iso8859_1},
    {(char*)0},
#line 306 "lib/aliases.gperf"
    {"CP936", ei_ces_gbk},
#line 265 "lib/aliases.gperf"
    {"X0212", ei_jisx0212},
#line 188 "lib/aliases.gperf"
    {"CP1258", ei_cp1258},
    {(char*)0}, {(char*)0},
#line 140 "lib/aliases.gperf"
    {"L7", ei_iso8859_13},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 173 "lib/aliases.gperf"
    {"CP1253", ei_cp1253},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 84 "lib/aliases.gperf"
    {"L4", ei_iso8859_4},
    {(char*)0}, {(char*)0},
#line 227 "lib/aliases.gperf"
    {"CP1133", ei_cp1133},
    {(char*)0},
#line 219 "lib/aliases.gperf"
    {"R8", ei_hp_roman8},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0},
#line 276 "lib/aliases.gperf"
    {"CHINESE", ei_gb2312},
#line 62 "lib/aliases.gperf"
    {"ISO8859-1", ei_iso8859_1},
    {(char*)0},
#line 70 "lib/aliases.gperf"
    {"ISO8859-2", ei_iso8859_2},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 102 "lib/aliases.gperf"
    {"ISO8859-6", ei_iso8859_6},
#line 53 "lib/aliases.gperf"
    {"ISO-8859-1", ei_iso8859_1},
#line 93 "lib/aliases.gperf"
    {"ISO8859-5", ei_iso8859_5},
#line 63 "lib/aliases.gperf"
    {"ISO-8859-2", ei_iso8859_2},
#line 252 "lib/aliases.gperf"
    {"X0201", ei_jisx0201},
    {(char*)0},
#line 159 "lib/aliases.gperf"
    {"ISO8859-16", ei_iso8859_16},
#line 94 "lib/aliases.gperf"
    {"ISO-8859-6", ei_iso8859_6},
#line 154 "lib/aliases.gperf"
    {"ISO8859-15", ei_iso8859_15},
#line 87 "lib/aliases.gperf"
    {"ISO-8859-5", ei_iso8859_5},
#line 127 "lib/aliases.gperf"
    {"ISO8859-9", ei_iso8859_9},
    {(char*)0},
#line 119 "lib/aliases.gperf"
    {"ISO8859-8", ei_iso8859_8},
#line 155 "lib/aliases.gperf"
    {"ISO-8859-16", ei_iso8859_16},
#line 192 "lib/aliases.gperf"
    {"850", ei_cp850},
#line 150 "lib/aliases.gperf"
    {"ISO-8859-15", ei_iso8859_15},
    {(char*)0},
#line 120 "lib/aliases.gperf"
    {"ISO-8859-9", ei_iso8859_9},
#line 328 "lib/aliases.gperf"
    {"CP949", ei_cp949},
#line 113 "lib/aliases.gperf"
    {"ISO-8859-8", ei_iso8859_8},
#line 78 "lib/aliases.gperf"
    {"ISO8859-3", ei_iso8859_3},
#line 16 "lib/aliases.gperf"
    {"ISO-IR-6", ei_ascii},
#line 258 "lib/aliases.gperf"
    {"X0208", ei_jisx0208},
#line 91 "lib/aliases.gperf"
    {"CYRILLIC", ei_iso8859_5},
    {(char*)0},
#line 308 "lib/aliases.gperf"
    {"ISO-2022-CN", ei_iso2022_cn},
#line 141 "lib/aliases.gperf"
    {"ISO8859-13", ei_iso8859_13},
#line 71 "lib/aliases.gperf"
    {"ISO-8859-3", ei_iso8859_3},
#line 164 "lib/aliases.gperf"
    {"CP1250", ei_cp1250},
#line 322 "lib/aliases.gperf"
    {"CP950", ei_cp950},
#line 190 "lib/aliases.gperf"
    {"CP850", ei_cp850},
#line 269 "lib/aliases.gperf"
    {"ISO646-CN", ei_iso646_cn},
#line 291 "lib/aliases.gperf"
    {"SJIS", ei_sjis},
#line 136 "lib/aliases.gperf"
    {"ISO-8859-13", ei_iso8859_13},
#line 106 "lib/aliases.gperf"
    {"ISO-IR-126", ei_iso8859_7},
#line 158 "lib/aliases.gperf"
    {"ISO-IR-226", ei_iso8859_16},
#line 235 "lib/aliases.gperf"
    {"ISO-IR-166", ei_tis620},
    {(char*)0},
#line 277 "lib/aliases.gperf"
    {"ISO-IR-165", ei_isoir165},
    {(char*)0},
#line 185 "lib/aliases.gperf"
    {"CP1257", ei_cp1257},
#line 13 "lib/aliases.gperf"
    {"ASCII", ei_ascii},
    {(char*)0},
#line 274 "lib/aliases.gperf"
    {"ISO-IR-58", ei_gb2312},
    {(char*)0},
#line 19 "lib/aliases.gperf"
    {"CP367", ei_ascii},
#line 59 "lib/aliases.gperf"
    {"LATIN1", ei_iso8859_1},
#line 266 "lib/aliases.gperf"
    {"ISO-IR-159", ei_jisx0212},
#line 67 "lib/aliases.gperf"
    {"LATIN2", ei_iso8859_2},
    {(char*)0}, {(char*)0},
#line 145 "lib/aliases.gperf"
    {"ISO-IR-199", ei_iso8859_14},
#line 132 "lib/aliases.gperf"
    {"LATIN6", ei_iso8859_10},
    {(char*)0},
#line 124 "lib/aliases.gperf"
    {"LATIN5", ei_iso8859_9},
#line 54 "lib/aliases.gperf"
    {"ISO_8859-1", ei_iso8859_1},
#line 309 "lib/aliases.gperf"
    {"CSISO2022CN", ei_iso2022_cn},
#line 64 "lib/aliases.gperf"
    {"ISO_8859-2", ei_iso8859_2},
#line 116 "lib/aliases.gperf"
    {"ISO-IR-138", ei_iso8859_8},
    {(char*)0},
#line 176 "lib/aliases.gperf"
    {"CP1254", ei_cp1254},
#line 95 "lib/aliases.gperf"
    {"ISO_8859-6", ei_iso8859_6},
    {(char*)0},
#line 88 "lib/aliases.gperf"
    {"ISO_8859-5", ei_iso8859_5},
#line 146 "lib/aliases.gperf"
    {"LATIN8", ei_iso8859_14},
    {(char*)0},
#line 66 "lib/aliases.gperf"
    {"ISO-IR-101", ei_iso8859_2},
#line 156 "lib/aliases.gperf"
    {"ISO_8859-16", ei_iso8859_16},
#line 302 "lib/aliases.gperf"
    {"GB2312", ei_euc_cn},
#line 151 "lib/aliases.gperf"
    {"ISO_8859-15", ei_iso8859_15},
#line 148 "lib/aliases.gperf"
    {"ISO-CELTIC", ei_iso8859_14},
#line 121 "lib/aliases.gperf"
    {"ISO_8859-9", ei_iso8859_9},
#line 75 "lib/aliases.gperf"
    {"LATIN3", ei_iso8859_3},
#line 114 "lib/aliases.gperf"
    {"ISO_8859-8", ei_iso8859_8},
#line 329 "lib/aliases.gperf"
    {"UHC", ei_cp949},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 135 "lib/aliases.gperf"
    {"ISO8859-10", ei_iso8859_10},
#line 152 "lib/aliases.gperf"
    {"ISO_8859-15:1998", ei_iso8859_15},
#line 204 "lib/aliases.gperf"
    {"MAC", ei_mac_roman},
#line 72 "lib/aliases.gperf"
    {"ISO_8859-3", ei_iso8859_3},
#line 74 "lib/aliases.gperf"
    {"ISO-IR-109", ei_iso8859_3},
    {(char*)0},
#line 112 "lib/aliases.gperf"
    {"ISO8859-7", ei_iso8859_7},
#line 128 "lib/aliases.gperf"
    {"ISO-8859-10", ei_iso8859_10},
#line 22 "lib/aliases.gperf"
    {"CSASCII", ei_ascii},
#line 137 "lib/aliases.gperf"
    {"ISO_8859-13", ei_iso8859_13},
#line 138 "lib/aliases.gperf"
    {"ISO-IR-179", ei_iso8859_13},
    {(char*)0}, {(char*)0},
#line 103 "lib/aliases.gperf"
    {"ISO-8859-7", ei_iso8859_7},
    {(char*)0},
#line 153 "lib/aliases.gperf"
    {"ISO-IR-203", ei_iso8859_15},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 282 "lib/aliases.gperf"
    {"ISO-IR-149", ei_ksc5601},
#line 166 "lib/aliases.gperf"
    {"MS-EE", ei_cp1250},
#line 123 "lib/aliases.gperf"
    {"ISO-IR-148", ei_iso8859_9},
#line 21 "lib/aliases.gperf"
    {"US", ei_ascii},
    {(char*)0},
#line 236 "lib/aliases.gperf"
    {"CP874", ei_cp874},
#line 86 "lib/aliases.gperf"
    {"ISO8859-4", ei_iso8859_4},
#line 82 "lib/aliases.gperf"
    {"ISO-IR-110", ei_iso8859_4},
#line 130 "lib/aliases.gperf"
    {"ISO_8859-10:1992", ei_iso8859_10},
    {(char*)0},
#line 157 "lib/aliases.gperf"
    {"ISO_8859-16:2000", ei_iso8859_16},
    {(char*)0},
#line 149 "lib/aliases.gperf"
    {"ISO8859-14", ei_iso8859_14},
#line 79 "lib/aliases.gperf"
    {"ISO-8859-4", ei_iso8859_4},
#line 195 "lib/aliases.gperf"
    {"IBM862", ei_cp862},
    {(char*)0}, {(char*)0},
#line 270 "lib/aliases.gperf"
    {"ISO-IR-57", ei_iso646_cn},
#line 199 "lib/aliases.gperf"
    {"IBM866", ei_cp866},
#line 142 "lib/aliases.gperf"
    {"ISO-8859-14", ei_iso8859_14},
#line 97 "lib/aliases.gperf"
    {"ISO-IR-127", ei_iso8859_6},
#line 310 "lib/aliases.gperf"
    {"ISO-2022-CN-EXT", ei_iso2022_cn_ext},
#line 259 "lib/aliases.gperf"
    {"ISO-IR-87", ei_jisx0208},
#line 131 "lib/aliases.gperf"
    {"ISO-IR-157", ei_iso8859_10},
#line 24 "lib/aliases.gperf"
    {"UCS-2", ei_ucs2},
#line 58 "lib/aliases.gperf"
    {"IBM819", ei_iso8859_1},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0},
#line 144 "lib/aliases.gperf"
    {"ISO_8859-14:1998", ei_iso8859_14},
#line 247 "lib/aliases.gperf"
    {"ISO-IR-14", ei_iso646_jp},
    {(char*)0}, {(char*)0},
#line 108 "lib/aliases.gperf"
    {"ELOT_928", ei_iso8859_7},
    {(char*)0},
#line 139 "lib/aliases.gperf"
    {"LATIN7", ei_iso8859_13},
#line 38 "lib/aliases.gperf"
    {"UTF-16", ei_utf16},
    {(char*)0},
#line 129 "lib/aliases.gperf"
    {"ISO_8859-10", ei_iso8859_10},
    {(char*)0},
#line 26 "lib/aliases.gperf"
    {"CSUNICODE", ei_ucs2},
#line 31 "lib/aliases.gperf"
    {"UCS-2LE", ei_ucs2le},
#line 23 "lib/aliases.gperf"
    {"UTF-8", ei_utf8},
#line 56 "lib/aliases.gperf"
    {"ISO-IR-100", ei_iso8859_1},
#line 104 "lib/aliases.gperf"
    {"ISO_8859-7", ei_iso8859_7},
#line 41 "lib/aliases.gperf"
    {"UTF-32", ei_utf32},
#line 334 "lib/aliases.gperf"
    {"CHAR", ei_local_char},
    {(char*)0}, {(char*)0},
#line 29 "lib/aliases.gperf"
    {"UNICODE-1-1", ei_ucs2be},
#line 30 "lib/aliases.gperf"
    {"CSUNICODE11", ei_ucs2be},
    {(char*)0},
#line 230 "lib/aliases.gperf"
    {"TIS620", ei_tis620},
#line 326 "lib/aliases.gperf"
    {"EUCKR", ei_euc_kr},
#line 40 "lib/aliases.gperf"
    {"UTF-16LE", ei_utf16le},
#line 83 "lib/aliases.gperf"
    {"LATIN4", ei_iso8859_4},
    {(char*)0}, {(char*)0},
#line 279 "lib/aliases.gperf"
    {"KSC_5601", ei_ksc5601},
#line 229 "lib/aliases.gperf"
    {"TIS-620", ei_tis620},
#line 325 "lib/aliases.gperf"
    {"EUC-KR", ei_euc_kr},
    {(char*)0},
#line 228 "lib/aliases.gperf"
    {"IBM-CP1133", ei_cp1133},
    {(char*)0},
#line 80 "lib/aliases.gperf"
    {"ISO_8859-4", ei_iso8859_4},
#line 43 "lib/aliases.gperf"
    {"UTF-32LE", ei_utf32le},
#line 238 "lib/aliases.gperf"
    {"VISCII", ei_viscii},
#line 160 "lib/aliases.gperf"
    {"KOI8-R", ei_koi8_r},
    {(char*)0}, {(char*)0},
#line 143 "lib/aliases.gperf"
    {"ISO_8859-14", ei_iso8859_14},
    {(char*)0},
#line 161 "lib/aliases.gperf"
    {"CSKOI8R", ei_koi8_r},
    {(char*)0},
#line 109 "lib/aliases.gperf"
    {"GREEK8", ei_iso8859_7},
#line 169 "lib/aliases.gperf"
    {"MS-CYRL", ei_cp1251},
    {(char*)0}, {(char*)0},
#line 240 "lib/aliases.gperf"
    {"CSVISCII", ei_viscii},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0},
#line 191 "lib/aliases.gperf"
    {"IBM850", ei_cp850},
    {(char*)0}, {(char*)0},
#line 90 "lib/aliases.gperf"
    {"ISO-IR-144", ei_iso8859_5},
    {(char*)0}, {(char*)0},
#line 316 "lib/aliases.gperf"
    {"BIG5", ei_ces_big5},
#line 37 "lib/aliases.gperf"
    {"UCS-4LE", ei_ucs4le},
#line 307 "lib/aliases.gperf"
    {"GB18030", ei_gb18030},
    {(char*)0},
#line 210 "lib/aliases.gperf"
    {"MACCYRILLIC", ei_mac_cyrillic},
#line 46 "lib/aliases.gperf"
    {"CSUNICODE11UTF7", ei_utf7},
#line 45 "lib/aliases.gperf"
    {"UNICODE-1-1-UTF-7", ei_utf7},
#line 317 "lib/aliases.gperf"
    {"BIG-5", ei_ces_big5},
    {(char*)0},
#line 20 "lib/aliases.gperf"
    {"IBM367", ei_ascii},
#line 231 "lib/aliases.gperf"
    {"TIS620-0", ei_tis620},
    {(char*)0},
#line 321 "lib/aliases.gperf"
    {"CSBIG5", ei_ces_big5},
#line 221 "lib/aliases.gperf"
    {"NEXTSTEP", ei_nextstep},
    {(char*)0},
#line 283 "lib/aliases.gperf"
    {"CSKSC56011987", ei_ksc5601},
#line 61 "lib/aliases.gperf"
    {"CSISOLATIN1", ei_iso8859_1},
#line 284 "lib/aliases.gperf"
    {"KOREAN", ei_ksc5601},
#line 69 "lib/aliases.gperf"
    {"CSISOLATIN2", ei_iso8859_2},
#line 320 "lib/aliases.gperf"
    {"CN-BIG5", ei_ces_big5},
#line 44 "lib/aliases.gperf"
    {"UTF-7", ei_utf7},
    {(char*)0},
#line 134 "lib/aliases.gperf"
    {"CSISOLATIN6", ei_iso8859_10},
#line 92 "lib/aliases.gperf"
    {"CSISOLATINCYRILLIC", ei_iso8859_5},
#line 126 "lib/aliases.gperf"
    {"CSISOLATIN5", ei_iso8859_9},
    {(char*)0},
#line 241 "lib/aliases.gperf"
    {"TCVN", ei_tcvn},
    {(char*)0}, {(char*)0},
#line 232 "lib/aliases.gperf"
    {"TIS620.2529-1", ei_tis620},
    {(char*)0}, {(char*)0},
#line 304 "lib/aliases.gperf"
    {"CSGB2312", ei_euc_cn},
    {(char*)0},
#line 25 "lib/aliases.gperf"
    {"ISO-10646-UCS-2", ei_ucs2},
#line 33 "lib/aliases.gperf"
    {"UCS-4", ei_ucs4},
#line 226 "lib/aliases.gperf"
    {"MULELAO-1", ei_mulelao},
#line 332 "lib/aliases.gperf"
    {"ISO-2022-KR", ei_iso2022_kr},
#line 107 "lib/aliases.gperf"
    {"ECMA-118", ei_iso8859_7},
#line 273 "lib/aliases.gperf"
    {"GB_2312-80", ei_gb2312},
#line 35 "lib/aliases.gperf"
    {"CSUCS4", ei_ucs4},
#line 305 "lib/aliases.gperf"
    {"GBK", ei_ces_gbk},
#line 77 "lib/aliases.gperf"
    {"CSISOLATIN3", ei_iso8859_3},
#line 14 "lib/aliases.gperf"
    {"ISO646-US", ei_ascii},
    {(char*)0},
#line 12 "lib/aliases.gperf"
    {"US-ASCII", ei_ascii},
#line 234 "lib/aliases.gperf"
    {"TIS620.2533-1", ei_tis620},
#line 225 "lib/aliases.gperf"
    {"KOI8-T", ei_koi8_t},
#line 172 "lib/aliases.gperf"
    {"MS-ANSI", ei_cp1252},
#line 281 "lib/aliases.gperf"
    {"KS_C_5601-1989", ei_ksc5601},
#line 268 "lib/aliases.gperf"
    {"GB_1988-80", ei_iso646_cn},
    {(char*)0}, {(char*)0},
#line 314 "lib/aliases.gperf"
    {"EUCTW", ei_euc_tw},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 110 "lib/aliases.gperf"
    {"GREEK", ei_iso8859_7},
    {(char*)0}, {(char*)0},
#line 313 "lib/aliases.gperf"
    {"EUC-TW", ei_euc_tw},
#line 168 "lib/aliases.gperf"
    {"WINDOWS-1251", ei_cp1251},
#line 171 "lib/aliases.gperf"
    {"WINDOWS-1252", ei_cp1252},
#line 248 "lib/aliases.gperf"
    {"JP", ei_iso646_jp},
#line 183 "lib/aliases.gperf"
    {"WINDOWS-1256", ei_cp1256},
#line 180 "lib/aliases.gperf"
    {"WINDOWS-1255", ei_cp1255},
    {(char*)0},
#line 239 "lib/aliases.gperf"
    {"VISCII1.1-1", ei_viscii},
#line 333 "lib/aliases.gperf"
    {"CSISO2022KR", ei_iso2022_kr},
    {(char*)0},
#line 189 "lib/aliases.gperf"
    {"WINDOWS-1258", ei_cp1258},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 174 "lib/aliases.gperf"
    {"WINDOWS-1253", ei_cp1253},
#line 222 "lib/aliases.gperf"
    {"ARMSCII-8", ei_armscii_8},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 201 "lib/aliases.gperf"
    {"CSIBM866", ei_cp866},
    {(char*)0},
#line 218 "lib/aliases.gperf"
    {"ROMAN8", ei_hp_roman8},
#line 312 "lib/aliases.gperf"
    {"HZ-GB-2312", ei_hz},
#line 286 "lib/aliases.gperf"
    {"EUCJP", ei_euc_jp},
#line 233 "lib/aliases.gperf"
    {"TIS620.2533-0", ei_tis620},
#line 280 "lib/aliases.gperf"
    {"KS_C_5601-1987", ei_ksc5601},
#line 207 "lib/aliases.gperf"
    {"MACICELAND", ei_mac_iceland},
#line 34 "lib/aliases.gperf"
    {"ISO-10646-UCS-4", ei_ucs4},
#line 27 "lib/aliases.gperf"
    {"UCS-2BE", ei_ucs2be},
    {(char*)0},
#line 285 "lib/aliases.gperf"
    {"EUC-JP", ei_euc_jp},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 165 "lib/aliases.gperf"
    {"WINDOWS-1250", ei_cp1250},
#line 100 "lib/aliases.gperf"
    {"ARABIC", ei_iso8859_6},
#line 39 "lib/aliases.gperf"
    {"UTF-16BE", ei_utf16be},
    {(char*)0}, {(char*)0},
#line 242 "lib/aliases.gperf"
    {"TCVN-5712", ei_tcvn},
#line 186 "lib/aliases.gperf"
    {"WINDOWS-1257", ei_cp1257},
    {(char*)0},
#line 197 "lib/aliases.gperf"
    {"CSPC862LATINHEBREW", ei_cp862},
    {(char*)0},
#line 243 "lib/aliases.gperf"
    {"TCVN5712-1", ei_tcvn},
    {(char*)0}, {(char*)0},
#line 42 "lib/aliases.gperf"
    {"UTF-32BE", ei_utf32be},
    {(char*)0}, {(char*)0},
#line 177 "lib/aliases.gperf"
    {"WINDOWS-1254", ei_cp1254},
    {(char*)0},
#line 327 "lib/aliases.gperf"
    {"CSEUCKR", ei_euc_kr},
    {(char*)0},
#line 99 "lib/aliases.gperf"
    {"ASMO-708", ei_iso8859_6},
    {(char*)0}, {(char*)0},
#line 101 "lib/aliases.gperf"
    {"CSISOLATINARABIC", ei_iso8859_6},
#line 203 "lib/aliases.gperf"
    {"MACINTOSH", ei_mac_roman},
#line 47 "lib/aliases.gperf"
    {"UCS-2-INTERNAL", ei_ucs2internal},
#line 85 "lib/aliases.gperf"
    {"CSISOLATIN4", ei_iso8859_4},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 98 "lib/aliases.gperf"
    {"ECMA-114", ei_iso8859_6},
    {(char*)0},
#line 278 "lib/aliases.gperf"
    {"CN-GB-ISOIR165", ei_isoir165},
    {(char*)0},
#line 18 "lib/aliases.gperf"
    {"ANSI_X3.4-1986", ei_ascii},
#line 272 "lib/aliases.gperf"
    {"CSISO57GB1988", ei_iso646_cn},
    {(char*)0},
#line 275 "lib/aliases.gperf"
    {"CSISO58GB231280", ei_gb2312},
#line 217 "lib/aliases.gperf"
    {"HP-ROMAN8", ei_hp_roman8},
    {(char*)0},
#line 17 "lib/aliases.gperf"
    {"ANSI_X3.4-1968", ei_ascii},
#line 216 "lib/aliases.gperf"
    {"MACTHAI", ei_mac_thai},
    {(char*)0},
#line 36 "lib/aliases.gperf"
    {"UCS-4BE", ei_ucs4be},
#line 220 "lib/aliases.gperf"
    {"CSHPROMAN8", ei_hp_roman8},
    {(char*)0},
#line 303 "lib/aliases.gperf"
    {"CN-GB", ei_euc_cn},
    {(char*)0},
#line 32 "lib/aliases.gperf"
    {"UNICODELITTLE", ei_ucs2le},
#line 89 "lib/aliases.gperf"
    {"ISO_8859-5:1988", ei_iso8859_5},
    {(char*)0}, {(char*)0},
#line 122 "lib/aliases.gperf"
    {"ISO_8859-9:1989", ei_iso8859_9},
    {(char*)0},
#line 115 "lib/aliases.gperf"
    {"ISO_8859-8:1988", ei_iso8859_8},
#line 162 "lib/aliases.gperf"
    {"KOI8-U", ei_koi8_u},
    {(char*)0}, {(char*)0},
#line 73 "lib/aliases.gperf"
    {"ISO_8859-3:1988", ei_iso8859_3},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 295 "lib/aliases.gperf"
    {"ISO-2022-JP", ei_iso2022_jp},
#line 297 "lib/aliases.gperf"
    {"ISO-2022-JP-1", ei_iso2022_jp1},
#line 298 "lib/aliases.gperf"
    {"ISO-2022-JP-2", ei_iso2022_jp2},
#line 118 "lib/aliases.gperf"
    {"CSISOLATINHEBREW", ei_iso8859_8},
    {(char*)0}, {(char*)0},
#line 246 "lib/aliases.gperf"
    {"ISO646-JP", ei_iso646_jp},
    {(char*)0}, {(char*)0},
#line 287 "lib/aliases.gperf"
    {"EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE", ei_euc_jp},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 49 "lib/aliases.gperf"
    {"UCS-4-INTERNAL", ei_ucs4internal},
    {(char*)0},
#line 55 "lib/aliases.gperf"
    {"ISO_8859-1:1987", ei_iso8859_1},
#line 65 "lib/aliases.gperf"
    {"ISO_8859-2:1987", ei_iso8859_2},
    {(char*)0},
#line 96 "lib/aliases.gperf"
    {"ISO_8859-6:1987", ei_iso8859_6},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 296 "lib/aliases.gperf"
    {"CSISO2022JP", ei_iso2022_jp},
#line 299 "lib/aliases.gperf"
    {"CSISO2022JP2", ei_iso2022_jp2},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0},
#line 81 "lib/aliases.gperf"
    {"ISO_8859-4:1988", ei_iso8859_4},
    {(char*)0}, {(char*)0},
#line 206 "lib/aliases.gperf"
    {"MACCENTRALEUROPE", ei_mac_centraleurope},
    {(char*)0}, {(char*)0},
#line 117 "lib/aliases.gperf"
    {"HEBREW", ei_iso8859_8},
    {(char*)0},
#line 181 "lib/aliases.gperf"
    {"MS-HEBR", ei_cp1255},
    {(char*)0},
#line 15 "lib/aliases.gperf"
    {"ISO_646.IRV:1991", ei_ascii},
    {(char*)0},
#line 315 "lib/aliases.gperf"
    {"CSEUCTW", ei_euc_tw},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 163 "lib/aliases.gperf"
    {"KOI8-RU", ei_koi8_ru},
    {(char*)0},
#line 237 "lib/aliases.gperf"
    {"WINDOWS-874", ei_cp874},
    {(char*)0}, {(char*)0},
#line 257 "lib/aliases.gperf"
    {"JIS0208", ei_jisx0208},
#line 224 "lib/aliases.gperf"
    {"GEORGIAN-PS", ei_georgian_ps},
    {(char*)0}, {(char*)0},
#line 105 "lib/aliases.gperf"
    {"ISO_8859-7:1987", ei_iso8859_7},
    {(char*)0},
#line 111 "lib/aliases.gperf"
    {"CSISOLATINGREEK", ei_iso8859_7},
#line 260 "lib/aliases.gperf"
    {"JIS_C6226-1983", ei_jisx0208},
    {(char*)0}, {(char*)0},
#line 202 "lib/aliases.gperf"
    {"MACROMAN", ei_mac_roman},
#line 48 "lib/aliases.gperf"
    {"UCS-2-SWAPPED", ei_ucs2swapped},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 205 "lib/aliases.gperf"
    {"CSMACINTOSH", ei_mac_roman},
    {(char*)0}, {(char*)0},
#line 319 "lib/aliases.gperf"
    {"BIGFIVE", ei_ces_big5},
#line 267 "lib/aliases.gperf"
    {"CSISO159JISX02121990", ei_jisx0212},
#line 249 "lib/aliases.gperf"
    {"CSISO14JISC6220RO", ei_iso646_jp},
#line 193 "lib/aliases.gperf"
    {"CSPC850MULTILINGUAL", ei_cp850},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 318 "lib/aliases.gperf"
    {"BIG-FIVE", ei_ces_big5},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0},
#line 245 "lib/aliases.gperf"
    {"JIS_C6220-1969-RO", ei_iso646_jp},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 262 "lib/aliases.gperf"
    {"JIS_X0212", ei_jisx0212},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 324 "lib/aliases.gperf"
    {"BIG5HKSCS", ei_big5hkscs},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 251 "lib/aliases.gperf"
    {"JISX0201-1976", ei_jisx0201},
#line 223 "lib/aliases.gperf"
    {"GEORGIAN-ACADEMY", ei_georgian_academy},
    {(char*)0},
#line 323 "lib/aliases.gperf"
    {"BIG5-HKSCS", ei_big5hkscs},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 261 "lib/aliases.gperf"
    {"CSISO87JISX0208", ei_jisx0208},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0},
#line 212 "lib/aliases.gperf"
    {"MACGREEK", ei_mac_greek},
#line 175 "lib/aliases.gperf"
    {"MS-GREEK", ei_cp1253},
    {(char*)0},
#line 50 "lib/aliases.gperf"
    {"UCS-4-SWAPPED", ei_ucs4swapped},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 208 "lib/aliases.gperf"
    {"MACCROATIAN", ei_mac_croatian},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 250 "lib/aliases.gperf"
    {"JIS_X0201", ei_jisx0201},
    {(char*)0}, {(char*)0},
#line 335 "lib/aliases.gperf"
    {"WCHAR_T", ei_local_wchar_t},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 28 "lib/aliases.gperf"
    {"UNICODEBIG", ei_ucs2be},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 264 "lib/aliases.gperf"
    {"JIS_X0212-1990", ei_jisx0212},
#line 254 "lib/aliases.gperf"
    {"JIS_X0208", ei_jisx0208},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0},
#line 215 "lib/aliases.gperf"
    {"MACARABIC", ei_mac_arabic},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 253 "lib/aliases.gperf"
    {"CSHALFWIDTHKATAKANA", ei_jisx0201},
#line 255 "lib/aliases.gperf"
    {"JIS_X0208-1983", ei_jisx0208},
#line 290 "lib/aliases.gperf"
    {"SHIFT-JIS", ei_sjis},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 211 "lib/aliases.gperf"
    {"MACUKRAINE", ei_mac_ukraine},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 288 "lib/aliases.gperf"
    {"CSEUCPKDFMTJAPANESE", ei_euc_jp},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0},
#line 256 "lib/aliases.gperf"
    {"JIS_X0208-1990", ei_jisx0208},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 293 "lib/aliases.gperf"
    {"CSSHIFTJIS", ei_sjis},
#line 263 "lib/aliases.gperf"
    {"JIS_X0212.1990-0", ei_jisx0212},
#line 214 "lib/aliases.gperf"
    {"MACHEBREW", ei_mac_hebrew},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0},
#line 289 "lib/aliases.gperf"
    {"SHIFT_JIS", ei_sjis},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0},
#line 244 "lib/aliases.gperf"
    {"TCVN5712-1:1993", ei_tcvn},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 178 "lib/aliases.gperf"
    {"MS-TURK", ei_cp1254},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0},
#line 213 "lib/aliases.gperf"
    {"MACTURKISH", ei_mac_turkish},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0},
#line 209 "lib/aliases.gperf"
    {"MACROMANIA", ei_mac_romania},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0},
#line 184 "lib/aliases.gperf"
    {"MS-ARAB", ei_cp1256},
    {(char*)0}, {(char*)0},
#line 52 "lib/aliases.gperf"
    {"JAVA", ei_java},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 292 "lib/aliases.gperf"
    {"MS_KANJI", ei_sjis},
#line 330 "lib/aliases.gperf"
    {"JOHAB", ei_johab},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
    {(char*)0}, {(char*)0}, {(char*)0},
#line 187 "lib/aliases.gperf"
    {"WINBALTRIM", ei_cp1257}
  };

#ifdef __GNUC__
__inline
#endif
const struct alias *
aliases_lookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = aliases_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = aliases[key].name;

          if (s && *str == *s && !strcmp (str + 1, s + 1))
            return &aliases[key];
        }
    }
  return 0;
}
