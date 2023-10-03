/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -Z HashPool -m 10 lib/generated/aliases.gperf  */
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
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "lib/generated/aliases.gperf"
struct alias { int name; unsigned int encoding_index; };

#define TOTAL_KEYWORDS 349
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 7
#define MAX_HASH_VALUE 875
/* maximum key range = 869, duplicates = 0 */

class HashPool
{
private:
  static inline unsigned int aliases_hash (const char *str, size_t len);
public:
  static const struct alias *aliases_lookup (const char *str, size_t len);
};

inline unsigned int
HashPool::aliases_hash (const char *str, size_t len)
{
  static const unsigned short asso_values[] =
    {
      876, 876, 876, 876, 876, 876, 876, 876, 876, 876,
      876, 876, 876, 876, 876, 876, 876, 876, 876, 876,
      876, 876, 876, 876, 876, 876, 876, 876, 876, 876,
      876, 876, 876, 876, 876, 876, 876, 876, 876, 876,
      876, 876, 876, 876, 876,   2,  87, 876,  73,   4,
       29,  66,  16,  22,  11, 179,   3,  10, 152, 876,
      876, 876, 876, 876, 876,  10, 221,   9,  35,  96,
      163,  49,  84,  63, 281, 195,  16,  84,   5,   2,
        3, 876,   2,   2, 110,  42, 132, 137, 230,  20,
        3, 876, 876, 876, 876,   3, 876, 876, 876, 876,
      876, 876, 876, 876, 876, 876, 876, 876, 876, 876,
      876, 876, 876, 876, 876, 876, 876, 876, 876, 876,
      876, 876, 876, 876, 876, 876, 876, 876
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[10])];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[static_cast<unsigned char>(str[9])];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[static_cast<unsigned char>(str[8])];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[static_cast<unsigned char>(str[7])];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[static_cast<unsigned char>(str[6])];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[static_cast<unsigned char>(str[5])];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[static_cast<unsigned char>(str[4])];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[static_cast<unsigned char>(str[3])];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[static_cast<unsigned char>(str[2])];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

struct stringpool_t
  {
    char stringpool_str7[sizeof("R8")];
    char stringpool_str16[sizeof("CN")];
    char stringpool_str21[sizeof("L8")];
    char stringpool_str22[sizeof("L1")];
    char stringpool_str28[sizeof("866")];
    char stringpool_str29[sizeof("L6")];
    char stringpool_str32[sizeof("C99")];
    char stringpool_str34[sizeof("L4")];
    char stringpool_str40[sizeof("L5")];
    char stringpool_str41[sizeof("CP819")];
    char stringpool_str46[sizeof("US")];
    char stringpool_str47[sizeof("L2")];
    char stringpool_str50[sizeof("CP866")];
    char stringpool_str60[sizeof("CP949")];
    char stringpool_str63[sizeof("UHC")];
    char stringpool_str64[sizeof("862")];
    char stringpool_str66[sizeof("PT154")];
    char stringpool_str72[sizeof("CP154")];
    char stringpool_str73[sizeof("SJIS")];
    char stringpool_str76[sizeof("CP1258")];
    char stringpool_str78[sizeof("CP1251")];
    char stringpool_str80[sizeof("PTCP154")];
    char stringpool_str83[sizeof("UCS-4")];
    char stringpool_str84[sizeof("L3")];
    char stringpool_str86[sizeof("CP862")];
    char stringpool_str89[sizeof("HZ")];
    char stringpool_str92[sizeof("CP1256")];
    char stringpool_str97[sizeof("CP1131")];
    char stringpool_str100[sizeof("CSUCS4")];
    char stringpool_str102[sizeof("CP1254")];
    char stringpool_str104[sizeof("CP1361")];
    char stringpool_str105[sizeof("MAC")];
    char stringpool_str107[sizeof("RK1048")];
    char stringpool_str109[sizeof("UCS-2")];
    char stringpool_str112[sizeof("CP936")];
    char stringpool_str113[sizeof("ROMAN8")];
    char stringpool_str114[sizeof("CP1255")];
    char stringpool_str120[sizeof("ISO8859-8")];
    char stringpool_str122[sizeof("ISO8859-1")];
    char stringpool_str123[sizeof("ISO-8859-8")];
    char stringpool_str124[sizeof("ISO_8859-8")];
    char stringpool_str125[sizeof("ISO-8859-1")];
    char stringpool_str126[sizeof("ISO_8859-1")];
    char stringpool_str127[sizeof("ISO8859-11")];
    char stringpool_str128[sizeof("CP1252")];
    char stringpool_str129[sizeof("EUCCN")];
    char stringpool_str130[sizeof("ISO-8859-11")];
    char stringpool_str131[sizeof("ISO_8859-11")];
    char stringpool_str132[sizeof("EUC-CN")];
    char stringpool_str133[sizeof("ISO646-CN")];
    char stringpool_str134[sizeof("ISO8859-9")];
    char stringpool_str136[sizeof("ISO8859-6")];
    char stringpool_str137[sizeof("ISO-8859-9")];
    char stringpool_str138[sizeof("ISO_8859-9")];
    char stringpool_str139[sizeof("ISO-8859-6")];
    char stringpool_str140[sizeof("ISO_8859-6")];
    char stringpool_str141[sizeof("ISO8859-16")];
    char stringpool_str143[sizeof("ISO_8859-16:2001")];
    char stringpool_str144[sizeof("ISO-8859-16")];
    char stringpool_str145[sizeof("ISO_8859-16")];
    char stringpool_str146[sizeof("ISO8859-4")];
    char stringpool_str147[sizeof("ISO_8859-14:1998")];
    char stringpool_str148[sizeof("CP932")];
    char stringpool_str149[sizeof("ISO-8859-4")];
    char stringpool_str150[sizeof("ISO_8859-4")];
    char stringpool_str151[sizeof("ISO8859-14")];
    char stringpool_str152[sizeof("850")];
    char stringpool_str153[sizeof("ISO_8859-15:1998")];
    char stringpool_str154[sizeof("ISO-8859-14")];
    char stringpool_str155[sizeof("ISO_8859-14")];
    char stringpool_str156[sizeof("MS-CYRL")];
    char stringpool_str158[sizeof("ISO8859-5")];
    char stringpool_str160[sizeof("ISO646-US")];
    char stringpool_str161[sizeof("ISO-8859-5")];
    char stringpool_str162[sizeof("ISO_8859-5")];
    char stringpool_str163[sizeof("ISO8859-15")];
    char stringpool_str164[sizeof("ISO-IR-6")];
    char stringpool_str165[sizeof("L10")];
    char stringpool_str166[sizeof("ISO-8859-15")];
    char stringpool_str167[sizeof("ISO_8859-15")];
    char stringpool_str170[sizeof("ISO-IR-148")];
    char stringpool_str171[sizeof("ISO-IR-58")];
    char stringpool_str172[sizeof("ISO8859-2")];
    char stringpool_str175[sizeof("ISO-8859-2")];
    char stringpool_str176[sizeof("ISO_8859-2")];
    char stringpool_str177[sizeof("CP50221")];
    char stringpool_str178[sizeof("ISO-IR-199")];
    char stringpool_str179[sizeof("ISO-IR-14")];
    char stringpool_str180[sizeof("IBM819")];
    char stringpool_str181[sizeof("ISO-IR-166")];
    char stringpool_str184[sizeof("ISO-IR-149")];
    char stringpool_str185[sizeof("CP850")];
    char stringpool_str187[sizeof("MS936")];
    char stringpool_str189[sizeof("IBM866")];
    char stringpool_str190[sizeof("ISO-IR-159")];
    char stringpool_str192[sizeof("CP950")];
    char stringpool_str195[sizeof("CYRILLIC")];
    char stringpool_str196[sizeof("ISO-IR-144")];
    char stringpool_str197[sizeof("L7")];
    char stringpool_str199[sizeof("ISO-IR-126")];
    char stringpool_str200[sizeof("GEORGIAN-PS")];
    char stringpool_str201[sizeof("CSPTCP154")];
    char stringpool_str202[sizeof("CP1253")];
    char stringpool_str203[sizeof("ISO-IR-165")];
    char stringpool_str204[sizeof("HP-ROMAN8")];
    char stringpool_str206[sizeof("LATIN8")];
    char stringpool_str208[sizeof("LATIN1")];
    char stringpool_str209[sizeof("MACROMAN")];
    char stringpool_str211[sizeof("CYRILLIC-ASIAN")];
    char stringpool_str212[sizeof("GB2312")];
    char stringpool_str213[sizeof("ASCII")];
    char stringpool_str214[sizeof("ECMA-118")];
    char stringpool_str215[sizeof("CSHPROMAN8")];
    char stringpool_str216[sizeof("CP1250")];
    char stringpool_str218[sizeof("UTF-8")];
    char stringpool_str220[sizeof("ISO-IR-138")];
    char stringpool_str221[sizeof("CP1133")];
    char stringpool_str222[sizeof("LATIN6")];
    char stringpool_str223[sizeof("LATIN-9")];
    char stringpool_str224[sizeof("ISO-IR-226")];
    char stringpool_str225[sizeof("IBM862")];
    char stringpool_str226[sizeof("CSASCII")];
    char stringpool_str228[sizeof("CP874")];
    char stringpool_str229[sizeof("ISO-IR-101")];
    char stringpool_str230[sizeof("ISO_8859-10:1992")];
    char stringpool_str232[sizeof("LATIN4")];
    char stringpool_str233[sizeof("GB_1988-80")];
    char stringpool_str236[sizeof("MS-ANSI")];
    char stringpool_str237[sizeof("GEORGIAN-ACADEMY")];
    char stringpool_str239[sizeof("UTF-16")];
    char stringpool_str240[sizeof("ECMA-114")];
    char stringpool_str241[sizeof("ISO-IR-109")];
    char stringpool_str243[sizeof("MULELAO-1")];
    char stringpool_str244[sizeof("LATIN5")];
    char stringpool_str246[sizeof("ISO8859-3")];
    char stringpool_str248[sizeof("ARMSCII-8")];
    char stringpool_str249[sizeof("ISO-8859-3")];
    char stringpool_str250[sizeof("ISO_8859-3")];
    char stringpool_str251[sizeof("ISO8859-13")];
    char stringpool_str254[sizeof("ISO-8859-13")];
    char stringpool_str255[sizeof("ISO_8859-13")];
    char stringpool_str256[sizeof("TCVN")];
    char stringpool_str257[sizeof("ISO-10646-UCS-4")];
    char stringpool_str258[sizeof("LATIN2")];
    char stringpool_str259[sizeof("ISO-2022-CN")];
    char stringpool_str262[sizeof("US-ASCII")];
    char stringpool_str264[sizeof("ELOT_928")];
    char stringpool_str265[sizeof("ISO8859-10")];
    char stringpool_str266[sizeof("CSISO2022CN")];
    char stringpool_str267[sizeof("UCS-4-SWAPPED")];
    char stringpool_str268[sizeof("ISO-8859-10")];
    char stringpool_str269[sizeof("ISO_8859-10")];
    char stringpool_str270[sizeof("ISO-10646-UCS-2")];
    char stringpool_str273[sizeof("KOI8-R")];
    char stringpool_str274[sizeof("UNICODE-1-1")];
    char stringpool_str277[sizeof("UCS-4LE")];
    char stringpool_str280[sizeof("UCS-2-SWAPPED")];
    char stringpool_str281[sizeof("ISO_8859-8:1988")];
    char stringpool_str283[sizeof("CSKOI8R")];
    char stringpool_str284[sizeof("CSUNICODE11")];
    char stringpool_str286[sizeof("JP")];
    char stringpool_str289[sizeof("MACROMANIA")];
    char stringpool_str290[sizeof("UCS-2LE")];
    char stringpool_str294[sizeof("ISO_8859-4:1988")];
    char stringpool_str295[sizeof("ISO_8859-9:1989")];
    char stringpool_str298[sizeof("ISO-IR-110")];
    char stringpool_str299[sizeof("CSISOLATIN1")];
    char stringpool_str300[sizeof("ISO_8859-5:1988")];
    char stringpool_str303[sizeof("KZ-1048")];
    char stringpool_str304[sizeof("TIS620")];
    char stringpool_str307[sizeof("TIS-620")];
    char stringpool_str309[sizeof("EUCKR")];
    char stringpool_str311[sizeof("MACCYRILLIC")];
    char stringpool_str312[sizeof("EUC-KR")];
    char stringpool_str313[sizeof("CSISOLATIN6")];
    char stringpool_str314[sizeof("CSKZ1048")];
    char stringpool_str315[sizeof("CSISOLATINARABIC")];
    char stringpool_str316[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str318[sizeof("BIG5")];
    char stringpool_str319[sizeof("KOREAN")];
    char stringpool_str320[sizeof("MACCROATIAN")];
    char stringpool_str321[sizeof("BIG-5")];
    char stringpool_str323[sizeof("CSISOLATIN4")];
    char stringpool_str324[sizeof("IBM850")];
    char stringpool_str326[sizeof("X0212")];
    char stringpool_str328[sizeof("ARABIC")];
    char stringpool_str329[sizeof("KSC_5601")];
    char stringpool_str332[sizeof("LATIN3")];
    char stringpool_str335[sizeof("CSISOLATIN5")];
    char stringpool_str337[sizeof("UTF-32")];
    char stringpool_str338[sizeof("VISCII")];
    char stringpool_str341[sizeof("GB_2312-80")];
    char stringpool_str343[sizeof("X0208")];
    char stringpool_str344[sizeof("ISO_8859-3:1988")];
    char stringpool_str345[sizeof("X0201")];
    char stringpool_str347[sizeof("ISO-IR-179")];
    char stringpool_str348[sizeof("GB18030")];
    char stringpool_str349[sizeof("CSISOLATIN2")];
    char stringpool_str350[sizeof("KS_C_5601-1989")];
    char stringpool_str351[sizeof("LATIN10")];
    char stringpool_str353[sizeof("KOI8-U")];
    char stringpool_str356[sizeof("KOI8-RU")];
    char stringpool_str362[sizeof("CSEUCKR")];
    char stringpool_str364[sizeof("ASMO-708")];
    char stringpool_str366[sizeof("CSUNICODE")];
    char stringpool_str367[sizeof("ISO-IR-100")];
    char stringpool_str368[sizeof("ISO-2022-CN-EXT")];
    char stringpool_str370[sizeof("UCS-4-INTERNAL")];
    char stringpool_str372[sizeof("MACICELAND")];
    char stringpool_str374[sizeof("CHINESE")];
    char stringpool_str377[sizeof("IBM-CP1133")];
    char stringpool_str378[sizeof("ISO-IR-203")];
    char stringpool_str379[sizeof("MS-EE")];
    char stringpool_str381[sizeof("TIS620-0")];
    char stringpool_str383[sizeof("UCS-2-INTERNAL")];
    char stringpool_str385[sizeof("VISCII1.1-1")];
    char stringpool_str389[sizeof("ISO-CELTIC")];
    char stringpool_str390[sizeof("WINDOWS-1258")];
    char stringpool_str391[sizeof("WINDOWS-1251")];
    char stringpool_str392[sizeof("CSBIG5")];
    char stringpool_str395[sizeof("CN-BIG5")];
    char stringpool_str397[sizeof("EUCJP")];
    char stringpool_str398[sizeof("WINDOWS-1256")];
    char stringpool_str400[sizeof("EUC-JP")];
    char stringpool_str401[sizeof("ISO646-JP")];
    char stringpool_str403[sizeof("WINDOWS-1254")];
    char stringpool_str406[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str409[sizeof("WINDOWS-1255")];
    char stringpool_str410[sizeof("ISO_646.IRV:1991")];
    char stringpool_str412[sizeof("CSVISCII")];
    char stringpool_str416[sizeof("WINDOWS-1252")];
    char stringpool_str418[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str419[sizeof("TIS620.2529-1")];
    char stringpool_str421[sizeof("CSIBM866")];
    char stringpool_str423[sizeof("CSISOLATIN3")];
    char stringpool_str426[sizeof("MACARABIC")];
    char stringpool_str428[sizeof("CP1257")];
    char stringpool_str429[sizeof("WINDOWS-936")];
    char stringpool_str430[sizeof("MACTHAI")];
    char stringpool_str437[sizeof("JAVA")];
    char stringpool_str438[sizeof("UTF-16LE")];
    char stringpool_str439[sizeof("ISO-2022-KR")];
    char stringpool_str441[sizeof("STRK1048-2002")];
    char stringpool_str442[sizeof("GBK")];
    char stringpool_str444[sizeof("CSGB2312")];
    char stringpool_str446[sizeof("CSISO2022KR")];
    char stringpool_str448[sizeof("GREEK8")];
    char stringpool_str449[sizeof("CP367")];
    char stringpool_str451[sizeof("CN-GB-ISOIR165")];
    char stringpool_str452[sizeof("MACINTOSH")];
    char stringpool_str453[sizeof("WINDOWS-1253")];
    char stringpool_str455[sizeof("UNICODE-1-1-UTF-7")];
    char stringpool_str458[sizeof("ISO_8859-1:1987")];
    char stringpool_str460[sizeof("WINDOWS-1250")];
    char stringpool_str461[sizeof("JIS_C6226-1983")];
    char stringpool_str462[sizeof("JIS_C6220-1969-RO")];
    char stringpool_str463[sizeof("CSUNICODE11UTF7")];
    char stringpool_str465[sizeof("ISO_8859-6:1987")];
    char stringpool_str470[sizeof("CSISO14JISC6220RO")];
    char stringpool_str471[sizeof("JIS0208")];
    char stringpool_str472[sizeof("ISO8859-7")];
    char stringpool_str473[sizeof("CSMACINTOSH")];
    char stringpool_str475[sizeof("ISO-8859-7")];
    char stringpool_str476[sizeof("ISO_8859-7")];
    char stringpool_str482[sizeof("UCS-4BE")];
    char stringpool_str483[sizeof("ISO_8859-2:1987")];
    char stringpool_str489[sizeof("KOI8-T")];
    char stringpool_str494[sizeof("EUCTW")];
    char stringpool_str495[sizeof("UCS-2BE")];
    char stringpool_str497[sizeof("EUC-TW")];
    char stringpool_str498[sizeof("MS-HEBR")];
    char stringpool_str500[sizeof("ANSI_X3.4-1968")];
    char stringpool_str501[sizeof("TCVN5712-1")];
    char stringpool_str504[sizeof("ISO-IR-87")];
    char stringpool_str507[sizeof("CN-GB")];
    char stringpool_str508[sizeof("ANSI_X3.4-1986")];
    char stringpool_str512[sizeof("TIS620.2533-1")];
    char stringpool_str517[sizeof("CSISOLATINHEBREW")];
    char stringpool_str518[sizeof("UTF-32LE")];
    char stringpool_str519[sizeof("KS_C_5601-1987")];
    char stringpool_str520[sizeof("ISO_8859-7:2003")];
    char stringpool_str521[sizeof("TCVN-5712")];
    char stringpool_str523[sizeof("ISO-IR-57")];
    char stringpool_str525[sizeof("HZ-GB-2312")];
    char stringpool_str527[sizeof("ISO-2022-JP")];
    char stringpool_str528[sizeof("ISO-IR-157")];
    char stringpool_str529[sizeof("ISO-2022-JP-MS")];
    char stringpool_str530[sizeof("ISO-2022-JP-1")];
    char stringpool_str531[sizeof("CSKSC56011987")];
    char stringpool_str534[sizeof("CSISO2022JP")];
    char stringpool_str535[sizeof("ISO-IR-127")];
    char stringpool_str539[sizeof("CSISOLATINGREEK")];
    char stringpool_str545[sizeof("WINDOWS-874")];
    char stringpool_str547[sizeof("CSEUCTW")];
    char stringpool_str549[sizeof("MACCENTRALEUROPE")];
    char stringpool_str551[sizeof("CSISO159JISX02121990")];
    char stringpool_str554[sizeof("CSISO58GB231280")];
    char stringpool_str555[sizeof("ISO-2022-JP-2")];
    char stringpool_str557[sizeof("MS-ARAB")];
    char stringpool_str558[sizeof("LATIN7")];
    char stringpool_str561[sizeof("CSISO2022JP2")];
    char stringpool_str566[sizeof("WINDOWS-1257")];
    char stringpool_str567[sizeof("NEXTSTEP")];
    char stringpool_str570[sizeof("UTF-7")];
    char stringpool_str577[sizeof("CSISO57GB1988")];
    char stringpool_str581[sizeof("TIS620.2533-0")];
    char stringpool_str588[sizeof("IBM367")];
    char stringpool_str592[sizeof("GB18030:2022")];
    char stringpool_str595[sizeof("BIG5HKSCS")];
    char stringpool_str598[sizeof("BIG5-HKSCS")];
    char stringpool_str612[sizeof("MACUKRAINE")];
    char stringpool_str629[sizeof("GB18030:2005")];
    char stringpool_str633[sizeof("ISO_8859-7:1987")];
    char stringpool_str636[sizeof("GREEK")];
    char stringpool_str637[sizeof("MS-TURK")];
    char stringpool_str639[sizeof("UNICODEBIG")];
    char stringpool_str643[sizeof("UTF-16BE")];
    char stringpool_str655[sizeof("UNICODELITTLE")];
    char stringpool_str664[sizeof("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE")];
    char stringpool_str683[sizeof("HEBREW")];
    char stringpool_str685[sizeof("MACTURKISH")];
    char stringpool_str689[sizeof("JIS_X0212")];
    char stringpool_str697[sizeof("SHIFT-JIS")];
    char stringpool_str698[sizeof("SHIFT_JIS")];
    char stringpool_str706[sizeof("JIS_X0208")];
    char stringpool_str708[sizeof("JIS_X0201")];
    char stringpool_str712[sizeof("MS_KANJI")];
    char stringpool_str720[sizeof("TCVN5712-1:1993")];
    char stringpool_str723[sizeof("UTF-32BE")];
    char stringpool_str727[sizeof("MS-GREEK")];
    char stringpool_str732[sizeof("JISX0201-1976")];
    char stringpool_str734[sizeof("MACGREEK")];
    char stringpool_str740[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str742[sizeof("WINBALTRIM")];
    char stringpool_str744[sizeof("JIS_X0212-1990")];
    char stringpool_str756[sizeof("BIG5-HKSCS:2008")];
    char stringpool_str757[sizeof("BIG5-HKSCS:2001")];
    char stringpool_str763[sizeof("BIG5-HKSCS:1999")];
    char stringpool_str769[sizeof("BIG5-HKSCS:2004")];
    char stringpool_str780[sizeof("JIS_X0208-1983")];
    char stringpool_str787[sizeof("JIS_X0208-1990")];
    char stringpool_str789[sizeof("CSSHIFTJIS")];
    char stringpool_str822[sizeof("JOHAB")];
    char stringpool_str827[sizeof("BIGFIVE")];
    char stringpool_str830[sizeof("BIG-FIVE")];
    char stringpool_str831[sizeof("JIS_X0212.1990-0")];
    char stringpool_str852[sizeof("CSISO87JISX0208")];
    char stringpool_str861[sizeof("CSEUCPKDFMTJAPANESE")];
    char stringpool_str875[sizeof("MACHEBREW")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "R8",
    "CN",
    "L8",
    "L1",
    "866",
    "L6",
    "C99",
    "L4",
    "L5",
    "CP819",
    "US",
    "L2",
    "CP866",
    "CP949",
    "UHC",
    "862",
    "PT154",
    "CP154",
    "SJIS",
    "CP1258",
    "CP1251",
    "PTCP154",
    "UCS-4",
    "L3",
    "CP862",
    "HZ",
    "CP1256",
    "CP1131",
    "CSUCS4",
    "CP1254",
    "CP1361",
    "MAC",
    "RK1048",
    "UCS-2",
    "CP936",
    "ROMAN8",
    "CP1255",
    "ISO8859-8",
    "ISO8859-1",
    "ISO-8859-8",
    "ISO_8859-8",
    "ISO-8859-1",
    "ISO_8859-1",
    "ISO8859-11",
    "CP1252",
    "EUCCN",
    "ISO-8859-11",
    "ISO_8859-11",
    "EUC-CN",
    "ISO646-CN",
    "ISO8859-9",
    "ISO8859-6",
    "ISO-8859-9",
    "ISO_8859-9",
    "ISO-8859-6",
    "ISO_8859-6",
    "ISO8859-16",
    "ISO_8859-16:2001",
    "ISO-8859-16",
    "ISO_8859-16",
    "ISO8859-4",
    "ISO_8859-14:1998",
    "CP932",
    "ISO-8859-4",
    "ISO_8859-4",
    "ISO8859-14",
    "850",
    "ISO_8859-15:1998",
    "ISO-8859-14",
    "ISO_8859-14",
    "MS-CYRL",
    "ISO8859-5",
    "ISO646-US",
    "ISO-8859-5",
    "ISO_8859-5",
    "ISO8859-15",
    "ISO-IR-6",
    "L10",
    "ISO-8859-15",
    "ISO_8859-15",
    "ISO-IR-148",
    "ISO-IR-58",
    "ISO8859-2",
    "ISO-8859-2",
    "ISO_8859-2",
    "CP50221",
    "ISO-IR-199",
    "ISO-IR-14",
    "IBM819",
    "ISO-IR-166",
    "ISO-IR-149",
    "CP850",
    "MS936",
    "IBM866",
    "ISO-IR-159",
    "CP950",
    "CYRILLIC",
    "ISO-IR-144",
    "L7",
    "ISO-IR-126",
    "GEORGIAN-PS",
    "CSPTCP154",
    "CP1253",
    "ISO-IR-165",
    "HP-ROMAN8",
    "LATIN8",
    "LATIN1",
    "MACROMAN",
    "CYRILLIC-ASIAN",
    "GB2312",
    "ASCII",
    "ECMA-118",
    "CSHPROMAN8",
    "CP1250",
    "UTF-8",
    "ISO-IR-138",
    "CP1133",
    "LATIN6",
    "LATIN-9",
    "ISO-IR-226",
    "IBM862",
    "CSASCII",
    "CP874",
    "ISO-IR-101",
    "ISO_8859-10:1992",
    "LATIN4",
    "GB_1988-80",
    "MS-ANSI",
    "GEORGIAN-ACADEMY",
    "UTF-16",
    "ECMA-114",
    "ISO-IR-109",
    "MULELAO-1",
    "LATIN5",
    "ISO8859-3",
    "ARMSCII-8",
    "ISO-8859-3",
    "ISO_8859-3",
    "ISO8859-13",
    "ISO-8859-13",
    "ISO_8859-13",
    "TCVN",
    "ISO-10646-UCS-4",
    "LATIN2",
    "ISO-2022-CN",
    "US-ASCII",
    "ELOT_928",
    "ISO8859-10",
    "CSISO2022CN",
    "UCS-4-SWAPPED",
    "ISO-8859-10",
    "ISO_8859-10",
    "ISO-10646-UCS-2",
    "KOI8-R",
    "UNICODE-1-1",
    "UCS-4LE",
    "UCS-2-SWAPPED",
    "ISO_8859-8:1988",
    "CSKOI8R",
    "CSUNICODE11",
    "JP",
    "MACROMANIA",
    "UCS-2LE",
    "ISO_8859-4:1988",
    "ISO_8859-9:1989",
    "ISO-IR-110",
    "CSISOLATIN1",
    "ISO_8859-5:1988",
    "KZ-1048",
    "TIS620",
    "TIS-620",
    "EUCKR",
    "MACCYRILLIC",
    "EUC-KR",
    "CSISOLATIN6",
    "CSKZ1048",
    "CSISOLATINARABIC",
    "CSISOLATINCYRILLIC",
    "BIG5",
    "KOREAN",
    "MACCROATIAN",
    "BIG-5",
    "CSISOLATIN4",
    "IBM850",
    "X0212",
    "ARABIC",
    "KSC_5601",
    "LATIN3",
    "CSISOLATIN5",
    "UTF-32",
    "VISCII",
    "GB_2312-80",
    "X0208",
    "ISO_8859-3:1988",
    "X0201",
    "ISO-IR-179",
    "GB18030",
    "CSISOLATIN2",
    "KS_C_5601-1989",
    "LATIN10",
    "KOI8-U",
    "KOI8-RU",
    "CSEUCKR",
    "ASMO-708",
    "CSUNICODE",
    "ISO-IR-100",
    "ISO-2022-CN-EXT",
    "UCS-4-INTERNAL",
    "MACICELAND",
    "CHINESE",
    "IBM-CP1133",
    "ISO-IR-203",
    "MS-EE",
    "TIS620-0",
    "UCS-2-INTERNAL",
    "VISCII1.1-1",
    "ISO-CELTIC",
    "WINDOWS-1258",
    "WINDOWS-1251",
    "CSBIG5",
    "CN-BIG5",
    "EUCJP",
    "WINDOWS-1256",
    "EUC-JP",
    "ISO646-JP",
    "WINDOWS-1254",
    "CSPC850MULTILINGUAL",
    "WINDOWS-1255",
    "ISO_646.IRV:1991",
    "CSVISCII",
    "WINDOWS-1252",
    "CSPC862LATINHEBREW",
    "TIS620.2529-1",
    "CSIBM866",
    "CSISOLATIN3",
    "MACARABIC",
    "CP1257",
    "WINDOWS-936",
    "MACTHAI",
    "JAVA",
    "UTF-16LE",
    "ISO-2022-KR",
    "STRK1048-2002",
    "GBK",
    "CSGB2312",
    "CSISO2022KR",
    "GREEK8",
    "CP367",
    "CN-GB-ISOIR165",
    "MACINTOSH",
    "WINDOWS-1253",
    "UNICODE-1-1-UTF-7",
    "ISO_8859-1:1987",
    "WINDOWS-1250",
    "JIS_C6226-1983",
    "JIS_C6220-1969-RO",
    "CSUNICODE11UTF7",
    "ISO_8859-6:1987",
    "CSISO14JISC6220RO",
    "JIS0208",
    "ISO8859-7",
    "CSMACINTOSH",
    "ISO-8859-7",
    "ISO_8859-7",
    "UCS-4BE",
    "ISO_8859-2:1987",
    "KOI8-T",
    "EUCTW",
    "UCS-2BE",
    "EUC-TW",
    "MS-HEBR",
    "ANSI_X3.4-1968",
    "TCVN5712-1",
    "ISO-IR-87",
    "CN-GB",
    "ANSI_X3.4-1986",
    "TIS620.2533-1",
    "CSISOLATINHEBREW",
    "UTF-32LE",
    "KS_C_5601-1987",
    "ISO_8859-7:2003",
    "TCVN-5712",
    "ISO-IR-57",
    "HZ-GB-2312",
    "ISO-2022-JP",
    "ISO-IR-157",
    "ISO-2022-JP-MS",
    "ISO-2022-JP-1",
    "CSKSC56011987",
    "CSISO2022JP",
    "ISO-IR-127",
    "CSISOLATINGREEK",
    "WINDOWS-874",
    "CSEUCTW",
    "MACCENTRALEUROPE",
    "CSISO159JISX02121990",
    "CSISO58GB231280",
    "ISO-2022-JP-2",
    "MS-ARAB",
    "LATIN7",
    "CSISO2022JP2",
    "WINDOWS-1257",
    "NEXTSTEP",
    "UTF-7",
    "CSISO57GB1988",
    "TIS620.2533-0",
    "IBM367",
    "GB18030:2022",
    "BIG5HKSCS",
    "BIG5-HKSCS",
    "MACUKRAINE",
    "GB18030:2005",
    "ISO_8859-7:1987",
    "GREEK",
    "MS-TURK",
    "UNICODEBIG",
    "UTF-16BE",
    "UNICODELITTLE",
    "EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",
    "HEBREW",
    "MACTURKISH",
    "JIS_X0212",
    "SHIFT-JIS",
    "SHIFT_JIS",
    "JIS_X0208",
    "JIS_X0201",
    "MS_KANJI",
    "TCVN5712-1:1993",
    "UTF-32BE",
    "MS-GREEK",
    "JISX0201-1976",
    "MACGREEK",
    "CSHALFWIDTHKATAKANA",
    "WINBALTRIM",
    "JIS_X0212-1990",
    "BIG5-HKSCS:2008",
    "BIG5-HKSCS:2001",
    "BIG5-HKSCS:1999",
    "BIG5-HKSCS:2004",
    "JIS_X0208-1983",
    "JIS_X0208-1990",
    "CSSHIFTJIS",
    "JOHAB",
    "BIGFIVE",
    "BIG-FIVE",
    "JIS_X0212.1990-0",
    "CSISO87JISX0208",
    "CSEUCPKDFMTJAPANESE",
    "MACHEBREW"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 227 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str7, ei_hp_roman8},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 288 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str16, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1},
#line 151 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str21, ei_iso8859_14},
#line 60 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str22, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 207 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str28, ei_cp866},
#line 134 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str29, ei_iso8859_10},
    {-1}, {-1},
#line 51 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str32, ei_c99},
    {-1},
#line 84 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str34, ei_iso8859_4},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 126 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str40, ei_iso8859_9},
#line 57 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str41, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1},
#line 21 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str46, ei_ascii},
#line 68 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str47, ei_iso8859_2},
    {-1}, {-1},
#line 205 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str50, ei_cp866},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 355 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str60, ei_cp949},
    {-1}, {-1},
#line 356 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str63, ei_cp949},
#line 203 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str64, ei_cp862},
    {-1},
#line 234 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str66, ei_pt154},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 236 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str72, ei_pt154},
#line 307 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str73, ei_sjis},
    {-1}, {-1},
#line 195 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str76, ei_cp1258},
    {-1},
#line 174 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str78, ei_cp1251},
    {-1},
#line 235 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str80, ei_pt154},
    {-1}, {-1},
#line 33 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str83, ei_ucs4},
#line 76 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str84, ei_iso8859_3},
    {-1},
#line 201 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str86, ei_cp862},
    {-1}, {-1},
#line 334 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str89, ei_hz},
    {-1}, {-1},
#line 189 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str92, ei_cp1256},
    {-1}, {-1}, {-1}, {-1},
#line 209 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str97, ei_cp1131},
    {-1}, {-1},
#line 35 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str100, ei_ucs4},
    {-1},
#line 183 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str102, ei_cp1254},
    {-1},
#line 358 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str104, ei_johab},
#line 212 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str105, ei_mac_roman},
    {-1},
#line 239 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str107, ei_rk1048},
    {-1},
#line 24 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str109, ei_ucs2},
    {-1}, {-1},
#line 325 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str112, ei_cp936},
#line 226 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str113, ei_hp_roman8},
#line 186 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str114, ei_cp1255},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 120 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str120, ei_iso8859_8},
    {-1},
#line 62 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str122, ei_iso8859_1},
#line 114 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str123, ei_iso8859_8},
#line 115 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str124, ei_iso8859_8},
#line 53 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str125, ei_iso8859_1},
#line 54 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str126, ei_iso8859_1},
#line 139 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str127, ei_iso8859_11},
#line 177 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str128, ei_cp1252},
#line 319 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str129, ei_euc_cn},
#line 137 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str130, ei_iso8859_11},
#line 138 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str131, ei_iso8859_11},
#line 318 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str132, ei_euc_cn},
#line 286 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str133, ei_iso646_cn},
#line 128 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str134, ei_iso8859_9},
    {-1},
#line 102 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str136, ei_iso8859_6},
#line 121 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str137, ei_iso8859_9},
#line 122 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str138, ei_iso8859_9},
#line 94 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str139, ei_iso8859_6},
#line 95 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str140, ei_iso8859_6},
#line 166 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str141, ei_iso8859_16},
    {-1},
#line 162 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str143, ei_iso8859_16},
#line 160 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str144, ei_iso8859_16},
#line 161 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str145, ei_iso8859_16},
#line 86 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str146, ei_iso8859_4},
#line 148 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str147, ei_iso8859_14},
#line 310 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str148, ei_cp932},
#line 79 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str149, ei_iso8859_4},
#line 80 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str150, ei_iso8859_4},
#line 153 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str151, ei_iso8859_14},
#line 199 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str152, ei_cp850},
#line 156 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str153, ei_iso8859_15},
#line 146 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str154, ei_iso8859_14},
#line 147 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str155, ei_iso8859_14},
#line 176 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str156, ei_cp1251},
    {-1},
#line 93 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str158, ei_iso8859_5},
    {-1},
#line 14 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str160, ei_ascii},
#line 87 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str161, ei_iso8859_5},
#line 88 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str162, ei_iso8859_5},
#line 159 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163, ei_iso8859_15},
#line 16 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str164, ei_ascii},
#line 165 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str165, ei_iso8859_16},
#line 154 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str166, ei_iso8859_15},
#line 155 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str167, ei_iso8859_15},
    {-1}, {-1},
#line 124 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str170, ei_iso8859_9},
#line 291 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str171, ei_gb2312},
#line 70 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str172, ei_iso8859_2},
    {-1}, {-1},
#line 63 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str175, ei_iso8859_2},
#line 64 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str176, ei_iso8859_2},
#line 317 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str177, ei_iso2022_jpms},
#line 149 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str178, ei_iso8859_14},
#line 264 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str179, ei_iso646_jp},
#line 58 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str180, ei_iso8859_1},
#line 252 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str181, ei_tis620},
    {-1}, {-1},
#line 298 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str184, ei_ksc5601},
#line 197 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str185, ei_cp850},
    {-1},
#line 326 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str187, ei_cp936},
    {-1},
#line 206 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str189, ei_cp866},
#line 283 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str190, ei_jisx0212},
    {-1},
#line 345 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str192, ei_cp950},
    {-1}, {-1},
#line 91 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str195, ei_iso8859_5},
#line 90 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str196, ei_iso8859_5},
#line 144 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str197, ei_iso8859_13},
    {-1},
#line 107 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str199, ei_iso8859_7},
#line 232 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str200, ei_georgian_ps},
#line 238 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str201, ei_pt154},
#line 180 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str202, ei_cp1253},
#line 293 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str203, ei_isoir165},
#line 225 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str204, ei_hp_roman8},
    {-1},
#line 150 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str206, ei_iso8859_14},
    {-1},
#line 59 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str208, ei_iso8859_1},
#line 210 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str209, ei_mac_roman},
    {-1},
#line 237 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str211, ei_pt154},
#line 320 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str212, ei_euc_cn},
#line 13 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str213, ei_ascii},
#line 108 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str214, ei_iso8859_7},
#line 228 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str215, ei_hp_roman8},
#line 171 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str216, ei_cp1250},
    {-1},
#line 23 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str218, ei_utf8},
    {-1},
#line 117 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str220, ei_iso8859_8},
#line 244 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str221, ei_cp1133},
#line 133 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str222, ei_iso8859_10},
#line 158 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str223, ei_iso8859_15},
#line 163 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str224, ei_iso8859_16},
#line 202 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str225, ei_cp862},
#line 22 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str226, ei_ascii},
    {-1},
#line 253 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str228, ei_cp874},
#line 66 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str229, ei_iso8859_2},
#line 131 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str230, ei_iso8859_10},
    {-1},
#line 83 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str232, ei_iso8859_4},
#line 285 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str233, ei_iso646_cn},
    {-1}, {-1},
#line 179 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str236, ei_cp1252},
#line 231 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str237, ei_georgian_academy},
    {-1},
#line 38 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str239, ei_utf16},
#line 98 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str240, ei_iso8859_6},
#line 74 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str241, ei_iso8859_3},
    {-1},
#line 243 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str243, ei_mulelao},
#line 125 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str244, ei_iso8859_9},
    {-1},
#line 78 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str246, ei_iso8859_3},
    {-1},
#line 230 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str248, ei_armscii_8},
#line 71 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str249, ei_iso8859_3},
#line 72 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str250, ei_iso8859_3},
#line 145 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str251, ei_iso8859_13},
    {-1}, {-1},
#line 140 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str254, ei_iso8859_13},
#line 141 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str255, ei_iso8859_13},
#line 258 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str256, ei_tcvn},
#line 34 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str257, ei_ucs4},
#line 67 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str258, ei_iso8859_2},
#line 331 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str259, ei_iso2022_cn},
    {-1}, {-1},
#line 12 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str262, ei_ascii},
    {-1},
#line 109 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str264, ei_iso8859_7},
#line 136 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str265, ei_iso8859_10},
#line 332 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str266, ei_iso2022_cn},
#line 50 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str267, ei_ucs4swapped},
#line 129 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str268, ei_iso8859_10},
#line 130 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str269, ei_iso8859_10},
#line 25 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str270, ei_ucs2},
    {-1}, {-1},
#line 167 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str273, ei_koi8_r},
#line 29 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str274, ei_ucs2be},
    {-1}, {-1},
#line 37 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str277, ei_ucs4le},
    {-1}, {-1},
#line 48 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str280, ei_ucs2swapped},
#line 116 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str281, ei_iso8859_8},
    {-1},
#line 168 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str283, ei_koi8_r},
#line 30 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str284, ei_ucs2be},
    {-1},
#line 265 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str286, ei_iso646_jp},
    {-1}, {-1},
#line 217 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str289, ei_mac_romania},
#line 31 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str290, ei_ucs2le},
    {-1}, {-1}, {-1},
#line 81 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str294, ei_iso8859_4},
#line 123 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str295, ei_iso8859_9},
    {-1}, {-1},
#line 82 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str298, ei_iso8859_4},
#line 61 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str299, ei_iso8859_1},
#line 89 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str300, ei_iso8859_5},
    {-1}, {-1},
#line 241 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str303, ei_rk1048},
#line 247 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str304, ei_tis620},
    {-1}, {-1},
#line 246 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str307, ei_tis620},
    {-1},
#line 353 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str309, ei_euc_kr},
    {-1},
#line 218 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str311, ei_mac_cyrillic},
#line 352 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str312, ei_euc_kr},
#line 135 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str313, ei_iso8859_10},
#line 242 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str314, ei_rk1048},
#line 101 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str315, ei_iso8859_6},
#line 92 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str316, ei_iso8859_5},
    {-1},
#line 339 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str318, ei_ces_big5},
#line 300 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str319, ei_ksc5601},
#line 216 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str320, ei_mac_croatian},
#line 340 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str321, ei_ces_big5},
    {-1},
#line 85 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str323, ei_iso8859_4},
#line 198 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str324, ei_cp850},
    {-1},
#line 282 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str326, ei_jisx0212},
    {-1},
#line 100 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str328, ei_iso8859_6},
#line 295 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str329, ei_ksc5601},
    {-1}, {-1},
#line 75 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str332, ei_iso8859_3},
    {-1}, {-1},
#line 127 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str335, ei_iso8859_9},
    {-1},
#line 41 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str337, ei_utf32},
#line 255 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str338, ei_viscii},
    {-1}, {-1},
#line 290 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str341, ei_gb2312},
    {-1},
#line 275 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str343, ei_jisx0208},
#line 73 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str344, ei_iso8859_3},
#line 269 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str345, ei_jisx0201},
    {-1},
#line 142 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str347, ei_iso8859_13},
#line 328 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str348, ei_gb18030_2005},
#line 69 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str349, ei_iso8859_2},
#line 297 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str350, ei_ksc5601},
#line 164 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str351, ei_iso8859_16},
    {-1},
#line 169 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str353, ei_koi8_u},
    {-1}, {-1},
#line 170 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str356, ei_koi8_ru},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 354 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str362, ei_euc_kr},
    {-1},
#line 99 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str364, ei_iso8859_6},
    {-1},
#line 26 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str366, ei_ucs2},
#line 56 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str367, ei_iso8859_1},
#line 333 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str368, ei_iso2022_cn_ext},
    {-1},
#line 49 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str370, ei_ucs4internal},
    {-1},
#line 215 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str372, ei_mac_iceland},
    {-1},
#line 323 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str374, ei_euc_cn},
    {-1}, {-1},
#line 245 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str377, ei_cp1133},
#line 157 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str378, ei_iso8859_15},
#line 173 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str379, ei_cp1250},
    {-1},
#line 248 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str381, ei_tis620},
    {-1},
#line 47 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str383, ei_ucs2internal},
    {-1},
#line 256 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str385, ei_viscii},
    {-1}, {-1}, {-1},
#line 152 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str389, ei_iso8859_14},
#line 196 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str390, ei_cp1258},
#line 175 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str391, ei_cp1251},
#line 344 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str392, ei_ces_big5},
    {-1}, {-1},
#line 343 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str395, ei_ces_big5},
    {-1},
#line 302 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str397, ei_euc_jp},
#line 190 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str398, ei_cp1256},
    {-1},
#line 301 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str400, ei_euc_jp},
#line 263 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str401, ei_iso646_jp},
    {-1},
#line 184 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str403, ei_cp1254},
    {-1}, {-1},
#line 200 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str406, ei_cp850},
    {-1}, {-1},
#line 187 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str409, ei_cp1255},
#line 15 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str410, ei_ascii},
    {-1},
#line 257 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str412, ei_viscii},
    {-1}, {-1}, {-1},
#line 178 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str416, ei_cp1252},
    {-1},
#line 204 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str418, ei_cp862},
#line 249 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str419, ei_tis620},
    {-1},
#line 208 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421, ei_cp866},
    {-1},
#line 77 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str423, ei_iso8859_3},
    {-1}, {-1},
#line 223 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str426, ei_mac_arabic},
    {-1},
#line 192 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str428, ei_cp1257},
#line 327 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str429, ei_cp936},
#line 224 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str430, ei_mac_thai},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 52 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str437, ei_java},
#line 40 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str438, ei_utf16le},
#line 359 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str439, ei_iso2022_kr},
    {-1},
#line 240 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str441, ei_rk1048},
#line 324 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str442, ei_ces_gbk},
    {-1},
#line 322 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str444, ei_euc_cn},
    {-1},
#line 360 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str446, ei_iso2022_kr},
    {-1},
#line 110 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str448, ei_iso8859_7},
#line 19 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str449, ei_ascii},
    {-1},
#line 294 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str451, ei_isoir165},
#line 211 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str452, ei_mac_roman},
#line 181 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str453, ei_cp1253},
    {-1},
#line 45 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str455, ei_utf7},
    {-1}, {-1},
#line 55 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str458, ei_iso8859_1},
    {-1},
#line 172 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str460, ei_cp1250},
#line 277 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str461, ei_jisx0208},
#line 262 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str462, ei_iso646_jp},
#line 46 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str463, ei_utf7},
    {-1},
#line 96 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str465, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1},
#line 266 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str470, ei_iso646_jp},
#line 274 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str471, ei_jisx0208},
#line 113 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str472, ei_iso8859_7},
#line 213 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str473, ei_mac_roman},
    {-1},
#line 103 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str475, ei_iso8859_7},
#line 104 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str476, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 36 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str482, ei_ucs4be},
#line 65 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str483, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 233 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str489, ei_koi8_t},
    {-1}, {-1}, {-1}, {-1},
#line 337 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str494, ei_euc_tw},
#line 27 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str495, ei_ucs2be},
    {-1},
#line 336 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str497, ei_euc_tw},
#line 188 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str498, ei_cp1255},
    {-1},
#line 17 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str500, ei_ascii},
#line 260 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str501, ei_tcvn},
    {-1}, {-1},
#line 276 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str504, ei_jisx0208},
    {-1}, {-1},
#line 321 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str507, ei_euc_cn},
#line 18 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str508, ei_ascii},
    {-1}, {-1}, {-1},
#line 251 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str512, ei_tis620},
    {-1}, {-1}, {-1}, {-1},
#line 119 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str517, ei_iso8859_8},
#line 43 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str518, ei_utf32le},
#line 296 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str519, ei_ksc5601},
#line 106 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str520, ei_iso8859_7},
#line 259 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str521, ei_tcvn},
    {-1},
#line 287 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str523, ei_iso646_cn},
    {-1},
#line 335 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str525, ei_hz},
    {-1},
#line 311 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str527, ei_iso2022_jp},
#line 132 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str528, ei_iso8859_10},
#line 316 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str529, ei_iso2022_jpms},
#line 313 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str530, ei_iso2022_jp1},
#line 299 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str531, ei_ksc5601},
    {-1}, {-1},
#line 312 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str534, ei_iso2022_jp},
#line 97 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str535, ei_iso8859_6},
    {-1}, {-1}, {-1},
#line 112 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str539, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 254 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str545, ei_cp874},
    {-1},
#line 338 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str547, ei_euc_tw},
    {-1},
#line 214 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str549, ei_mac_centraleurope},
    {-1},
#line 284 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str551, ei_jisx0212},
    {-1}, {-1},
#line 292 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str554, ei_gb2312},
#line 314 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str555, ei_iso2022_jp2},
    {-1},
#line 191 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str557, ei_cp1256},
#line 143 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str558, ei_iso8859_13},
    {-1}, {-1},
#line 315 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str561, ei_iso2022_jp2},
    {-1}, {-1}, {-1}, {-1},
#line 193 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str566, ei_cp1257},
#line 229 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str567, ei_nextstep},
    {-1}, {-1},
#line 44 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str570, ei_utf7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 289 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str577, ei_iso646_cn},
    {-1}, {-1}, {-1},
#line 250 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str581, ei_tis620},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 20 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str588, ei_ascii},
    {-1}, {-1}, {-1},
#line 330 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str592, ei_gb18030_2022},
    {-1}, {-1},
#line 350 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str595, ei_big5hkscs2008},
    {-1}, {-1},
#line 349 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str598, ei_big5hkscs2008},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 219 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str612, ei_mac_ukraine},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 329 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str629, ei_gb18030_2005},
    {-1}, {-1}, {-1},
#line 105 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str633, ei_iso8859_7},
    {-1}, {-1},
#line 111 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str636, ei_iso8859_7},
#line 185 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str637, ei_cp1254},
    {-1},
#line 28 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str639, ei_ucs2be},
    {-1}, {-1}, {-1},
#line 39 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str643, ei_utf16be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 32 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str655, ei_ucs2le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 303 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str664, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 118 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str683, ei_iso8859_8},
    {-1},
#line 221 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str685, ei_mac_turkish},
    {-1}, {-1}, {-1},
#line 279 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str689, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 306 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str697, ei_sjis},
#line 305 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str698, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 271 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str706, ei_jisx0208},
    {-1},
#line 267 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str708, ei_jisx0201},
    {-1}, {-1}, {-1},
#line 308 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str712, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 261 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str720, ei_tcvn},
    {-1}, {-1},
#line 42 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str723, ei_utf32be},
    {-1}, {-1}, {-1},
#line 182 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str727, ei_cp1253},
    {-1}, {-1}, {-1}, {-1},
#line 268 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str732, ei_jisx0201},
    {-1},
#line 220 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str734, ei_mac_greek},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 270 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str740, ei_jisx0201},
    {-1},
#line 194 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str742, ei_cp1257},
    {-1},
#line 281 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str744, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 351 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str756, ei_big5hkscs2008},
#line 347 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str757, ei_big5hkscs2001},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 346 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str763, ei_big5hkscs1999},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 348 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str769, ei_big5hkscs2004},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 272 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str780, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 273 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str787, ei_jisx0208},
    {-1},
#line 309 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str789, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 357 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str822, ei_johab},
    {-1}, {-1}, {-1}, {-1},
#line 342 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str827, ei_ces_big5},
    {-1}, {-1},
#line 341 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str830, ei_ces_big5},
#line 280 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str831, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 278 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str852, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 304 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str861, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 222 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str875, ei_mac_hebrew}
  };

const struct alias *
HashPool::aliases_lookup (const char *str, size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = aliases_hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          int o = aliases[key].name;
          if (o >= 0)
            {
              const char *s = o + stringpool;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &aliases[key];
            }
        }
    }
  return 0;
}
