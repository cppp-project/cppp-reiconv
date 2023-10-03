/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -Z HashPool -m 10 lib/generated/aliases_sysosf1.gperf  */
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

#line 1 "lib/generated/aliases_sysosf1.gperf"
struct alias { int name; unsigned int encoding_index; };

#define TOTAL_KEYWORDS 354
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 999
/* maximum key range = 995, duplicates = 0 */

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
     1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,
     1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,
     1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,
     1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,
     1000,1000,1000,1000,1000,   0,  37,1000,  44,   2,
       16,  28,   9,  13,   5, 190,  20,   0, 242,1000,
     1000,1000,1000,1000,1000,  13, 212,   2,  19,  66,
       10, 134,  52,  88, 187, 190,   6, 142,   3,   0,
       99,1000,   0,  11, 118, 241, 170, 160, 367,  54,
       21,1000,1000,1000,1000,   1,1000,1000,1000,1000,
     1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,
     1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,
     1000,1000,1000,1000,1000,1000,1000,1000
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
    char stringpool_str5[sizeof("C99")];
    char stringpool_str7[sizeof("CN")];
    char stringpool_str10[sizeof("L1")];
    char stringpool_str13[sizeof("L6")];
    char stringpool_str16[sizeof("CP949")];
    char stringpool_str17[sizeof("L4")];
    char stringpool_str21[sizeof("L5")];
    char stringpool_str22[sizeof("R8")];
    char stringpool_str24[sizeof("L2")];
    char stringpool_str28[sizeof("L8")];
    char stringpool_str29[sizeof("CP819")];
    char stringpool_str33[sizeof("866")];
    char stringpool_str36[sizeof("L3")];
    char stringpool_str40[sizeof("CP154")];
    char stringpool_str42[sizeof("CP866")];
    char stringpool_str43[sizeof("CP1251")];
    char stringpool_str44[sizeof("CP1131")];
    char stringpool_str45[sizeof("CP936")];
    char stringpool_str47[sizeof("CP1361")];
    char stringpool_str49[sizeof("CP1256")];
    char stringpool_str55[sizeof("862")];
    char stringpool_str57[sizeof("CP1254")];
    char stringpool_str64[sizeof("CP862")];
    char stringpool_str65[sizeof("CP1255")];
    char stringpool_str67[sizeof("CP932")];
    char stringpool_str71[sizeof("CP1252")];
    char stringpool_str75[sizeof("HZ")];
    char stringpool_str79[sizeof("CP1258")];
    char stringpool_str81[sizeof("EUCCN")];
    char stringpool_str82[sizeof("EUC-CN")];
    char stringpool_str95[sizeof("CP1253")];
    char stringpool_str96[sizeof("CP1133")];
    char stringpool_str97[sizeof("L10")];
    char stringpool_str101[sizeof("RK1048")];
    char stringpool_str102[sizeof("CP50221")];
    char stringpool_str108[sizeof("CP950")];
    char stringpool_str111[sizeof("850")];
    char stringpool_str124[sizeof("ISO646-CN")];
    char stringpool_str125[sizeof("SJIS")];
    char stringpool_str127[sizeof("CP1250")];
    char stringpool_str128[sizeof("CP850")];
    char stringpool_str137[sizeof("PT154")];
    char stringpool_str149[sizeof("MAC")];
    char stringpool_str150[sizeof("ISO8859-9")];
    char stringpool_str151[sizeof("ISO-8859-9")];
    char stringpool_str152[sizeof("ISO_8859-9")];
    char stringpool_str154[sizeof("ISO8859-1")];
    char stringpool_str155[sizeof("ISO-8859-1")];
    char stringpool_str156[sizeof("ISO_8859-1")];
    char stringpool_str157[sizeof("ISO8859-11")];
    char stringpool_str158[sizeof("ISO-8859-11")];
    char stringpool_str159[sizeof("ISO_8859-11")];
    char stringpool_str160[sizeof("ISO8859-6")];
    char stringpool_str161[sizeof("ISO-8859-6")];
    char stringpool_str162[sizeof("ISO_8859-6")];
    char stringpool_str163[sizeof("ISO8859-16")];
    char stringpool_str164[sizeof("ISO-8859-16")];
    char stringpool_str165[sizeof("ISO_8859-16")];
    char stringpool_str167[sizeof("ISO_8859-16:2001")];
    char stringpool_str168[sizeof("ISO8859-4")];
    char stringpool_str169[sizeof("ISO-8859-4")];
    char stringpool_str170[sizeof("ISO_8859-4")];
    char stringpool_str171[sizeof("ISO8859-14")];
    char stringpool_str172[sizeof("ISO-8859-14")];
    char stringpool_str173[sizeof("ISO_8859-14")];
    char stringpool_str176[sizeof("ISO8859-5")];
    char stringpool_str177[sizeof("ISO-8859-5")];
    char stringpool_str178[sizeof("ISO_8859-5")];
    char stringpool_str179[sizeof("ISO8859-15")];
    char stringpool_str180[sizeof("ISO-8859-15")];
    char stringpool_str181[sizeof("ISO_8859-15")];
    char stringpool_str182[sizeof("ISO8859-2")];
    char stringpool_str183[sizeof("ISO-8859-2")];
    char stringpool_str184[sizeof("ISO_8859-2")];
    char stringpool_str185[sizeof("MS936")];
    char stringpool_str188[sizeof("ISO-IR-199")];
    char stringpool_str189[sizeof("ISO_8859-14:1998")];
    char stringpool_str190[sizeof("ISO8859-8")];
    char stringpool_str191[sizeof("ISO-8859-8")];
    char stringpool_str192[sizeof("ISO_8859-8")];
    char stringpool_str193[sizeof("ISO_8859-15:1998")];
    char stringpool_str194[sizeof("ISO-IR-6")];
    char stringpool_str197[sizeof("ISO-IR-149")];
    char stringpool_str198[sizeof("L7")];
    char stringpool_str199[sizeof("ISO-2022-CN")];
    char stringpool_str201[sizeof("ISO-IR-159")];
    char stringpool_str202[sizeof("CYRILLIC")];
    char stringpool_str203[sizeof("ISO-IR-166")];
    char stringpool_str204[sizeof("ROMAN8")];
    char stringpool_str205[sizeof("ISO-IR-14")];
    char stringpool_str206[sizeof("ISO8859-3")];
    char stringpool_str207[sizeof("ISO-8859-3")];
    char stringpool_str208[sizeof("ISO_8859-3")];
    char stringpool_str209[sizeof("ISO8859-13")];
    char stringpool_str210[sizeof("ISO-8859-13")];
    char stringpool_str211[sizeof("ISO_8859-13")];
    char stringpool_str212[sizeof("CSISO2022CN")];
    char stringpool_str214[sizeof("ISO-IR-126")];
    char stringpool_str215[sizeof("ISO-IR-144")];
    char stringpool_str217[sizeof("MS-CYRL")];
    char stringpool_str218[sizeof("GB2312")];
    char stringpool_str219[sizeof("ISO-IR-165")];
    char stringpool_str220[sizeof("ISO_8859-10:1992")];
    char stringpool_str222[sizeof("LATIN-9")];
    char stringpool_str225[sizeof("LATIN1")];
    char stringpool_str228[sizeof("ISO-IR-226")];
    char stringpool_str231[sizeof("LATIN6")];
    char stringpool_str232[sizeof("ISO-IR-109")];
    char stringpool_str233[sizeof("CYRILLIC-ASIAN")];
    char stringpool_str235[sizeof("CP874")];
    char stringpool_str236[sizeof("ISO-IR-101")];
    char stringpool_str237[sizeof("ISO-IR-148")];
    char stringpool_str238[sizeof("ISO-IR-58")];
    char stringpool_str239[sizeof("LATIN4")];
    char stringpool_str240[sizeof("PTCP154")];
    char stringpool_str241[sizeof("ISO8859-10")];
    char stringpool_str242[sizeof("ISO-8859-10")];
    char stringpool_str243[sizeof("ISO_8859-10")];
    char stringpool_str244[sizeof("TIS620")];
    char stringpool_str245[sizeof("TIS-620")];
    char stringpool_str246[sizeof("MULELAO-1")];
    char stringpool_str247[sizeof("LATIN5")];
    char stringpool_str248[sizeof("UHC")];
    char stringpool_str249[sizeof("ELOT_928")];
    char stringpool_str251[sizeof("ECMA-114")];
    char stringpool_str253[sizeof("LATIN2")];
    char stringpool_str254[sizeof("US")];
    char stringpool_str256[sizeof("ISO-IR-138")];
    char stringpool_str258[sizeof("IBM819")];
    char stringpool_str259[sizeof("HP-ROMAN8")];
    char stringpool_str261[sizeof("LATIN8")];
    char stringpool_str263[sizeof("EUCKR")];
    char stringpool_str264[sizeof("EUC-KR")];
    char stringpool_str265[sizeof("KSC5601")];
    char stringpool_str267[sizeof("KSC_5601")];
    char stringpool_str269[sizeof("UTF-16")];
    char stringpool_str271[sizeof("IBM866")];
    char stringpool_str273[sizeof("ECMA-118")];
    char stringpool_str274[sizeof("KS_C_5601-1989")];
    char stringpool_str275[sizeof("UCS-4")];
    char stringpool_str277[sizeof("LATIN3")];
    char stringpool_str278[sizeof("ISO-IR-110")];
    char stringpool_str280[sizeof("CSUCS4")];
    char stringpool_str281[sizeof("KOREAN")];
    char stringpool_str284[sizeof("ASCII")];
    char stringpool_str287[sizeof("JIS_C6226-1983")];
    char stringpool_str288[sizeof("JP")];
    char stringpool_str289[sizeof("UCS-2")];
    char stringpool_str290[sizeof("TIS620-0")];
    char stringpool_str291[sizeof("TIS620.2529-1")];
    char stringpool_str292[sizeof("KZ-1048")];
    char stringpool_str293[sizeof("IBM862")];
    char stringpool_str294[sizeof("DECHANZI")];
    char stringpool_str295[sizeof("GB_1988-80")];
    char stringpool_str296[sizeof("UTF-8")];
    char stringpool_str298[sizeof("TCVN")];
    char stringpool_str299[sizeof("CSASCII")];
    char stringpool_str301[sizeof("JIS_C6220-1969-RO")];
    char stringpool_str302[sizeof("ISO-IR-203")];
    char stringpool_str304[sizeof("KOI8-R")];
    char stringpool_str305[sizeof("DECKOREAN")];
    char stringpool_str307[sizeof("CSKOI8R")];
    char stringpool_str309[sizeof("CHINESE")];
    char stringpool_str312[sizeof("LATIN10")];
    char stringpool_str313[sizeof("MACROMAN")];
    char stringpool_str315[sizeof("GB_2312-80")];
    char stringpool_str316[sizeof("CSKZ1048")];
    char stringpool_str317[sizeof("UTF-32")];
    char stringpool_str318[sizeof("ISO-2022-CN-EXT")];
    char stringpool_str320[sizeof("ISO-IR-100")];
    char stringpool_str323[sizeof("GB18030")];
    char stringpool_str331[sizeof("TIS620.2533-1")];
    char stringpool_str336[sizeof("ARABIC")];
    char stringpool_str344[sizeof("CSISOLATIN1")];
    char stringpool_str345[sizeof("MS-EE")];
    char stringpool_str349[sizeof("JIS0208")];
    char stringpool_str350[sizeof("CSISOLATIN6")];
    char stringpool_str351[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str352[sizeof("MS-ANSI")];
    char stringpool_str354[sizeof("TACTIS")];
    char stringpool_str357[sizeof("IBM850")];
    char stringpool_str358[sizeof("CSISOLATIN4")];
    char stringpool_str360[sizeof("CSISOLATINARABIC")];
    char stringpool_str361[sizeof("CSHPROMAN8")];
    char stringpool_str362[sizeof("CSPTCP154")];
    char stringpool_str365[sizeof("STRK1048-2002")];
    char stringpool_str366[sizeof("CSISOLATIN5")];
    char stringpool_str370[sizeof("MACICELAND")];
    char stringpool_str372[sizeof("CSISOLATIN2")];
    char stringpool_str373[sizeof("TIS620.2533-0")];
    char stringpool_str376[sizeof("BIG5")];
    char stringpool_str377[sizeof("BIG-5")];
    char stringpool_str378[sizeof("ISO-IR-179")];
    char stringpool_str379[sizeof("ISO646-US")];
    char stringpool_str381[sizeof("ISO-2022-KR")];
    char stringpool_str382[sizeof("ISO-CELTIC")];
    char stringpool_str387[sizeof("JAVA")];
    char stringpool_str393[sizeof("ARMSCII-8")];
    char stringpool_str394[sizeof("CSISO2022KR")];
    char stringpool_str395[sizeof("MACCROATIAN")];
    char stringpool_str396[sizeof("CSISOLATIN3")];
    char stringpool_str398[sizeof("WINDOWS-1251")];
    char stringpool_str399[sizeof("ISO_8859-9:1989")];
    char stringpool_str401[sizeof("WINDOWS-1256")];
    char stringpool_str402[sizeof("WINDOWS-936")];
    char stringpool_str403[sizeof("MACCYRILLIC")];
    char stringpool_str404[sizeof("UTF-16LE")];
    char stringpool_str405[sizeof("WINDOWS-1254")];
    char stringpool_str406[sizeof("UCS-4LE")];
    char stringpool_str409[sizeof("WINDOWS-1255")];
    char stringpool_str412[sizeof("WINDOWS-1252")];
    char stringpool_str413[sizeof("UCS-2LE")];
    char stringpool_str415[sizeof("VISCII1.1-1")];
    char stringpool_str416[sizeof("WINDOWS-1258")];
    char stringpool_str417[sizeof("CSISO14JISC6220RO")];
    char stringpool_str418[sizeof("ISO-10646-UCS-4")];
    char stringpool_str419[sizeof("CP1257")];
    char stringpool_str420[sizeof("CP367")];
    char stringpool_str421[sizeof("ISO_646.IRV:1991")];
    char stringpool_str422[sizeof("X0212")];
    char stringpool_str424[sizeof("WINDOWS-1253")];
    char stringpool_str425[sizeof("ISO-10646-UCS-2")];
    char stringpool_str426[sizeof("MACROMANIA")];
    char stringpool_str428[sizeof("ISO_8859-4:1988")];
    char stringpool_str429[sizeof("IBM-CP1133")];
    char stringpool_str432[sizeof("ISO_8859-5:1988")];
    char stringpool_str433[sizeof("UNICODE-1-1")];
    char stringpool_str434[sizeof("CSGB2312")];
    char stringpool_str436[sizeof("X0201")];
    char stringpool_str437[sizeof("ASMO-708")];
    char stringpool_str438[sizeof("CSUNICODE11")];
    char stringpool_str439[sizeof("ISO_8859-8:1988")];
    char stringpool_str440[sizeof("WINDOWS-1250")];
    char stringpool_str441[sizeof("UTF-32LE")];
    char stringpool_str447[sizeof("ISO_8859-3:1988")];
    char stringpool_str453[sizeof("VISCII")];
    char stringpool_str457[sizeof("GEORGIAN-ACADEMY")];
    char stringpool_str458[sizeof("EUCJP")];
    char stringpool_str459[sizeof("EUC-JP")];
    char stringpool_str464[sizeof("KS_C_5601-1987")];
    char stringpool_str466[sizeof("CSISO159JISX02121990")];
    char stringpool_str468[sizeof("CSBIG5")];
    char stringpool_str469[sizeof("CN-BIG5")];
    char stringpool_str472[sizeof("X0208")];
    char stringpool_str474[sizeof("CSKSC56011987")];
    char stringpool_str477[sizeof("MACINTOSH")];
    char stringpool_str479[sizeof("MS-HEBR")];
    char stringpool_str481[sizeof("ISO-2022-JP-1")];
    char stringpool_str483[sizeof("MACARABIC")];
    char stringpool_str486[sizeof("HZ-GB-2312")];
    char stringpool_str487[sizeof("CSIBM866")];
    char stringpool_str491[sizeof("ISO-2022-JP-MS")];
    char stringpool_str494[sizeof("CSMACINTOSH")];
    char stringpool_str495[sizeof("ISO-2022-JP-2")];
    char stringpool_str496[sizeof("CSUNICODE")];
    char stringpool_str500[sizeof("MACCENTRALEUROPE")];
    char stringpool_str501[sizeof("ISO646-JP")];
    char stringpool_str502[sizeof("GREEK8")];
    char stringpool_str504[sizeof("GEORGIAN-PS")];
    char stringpool_str507[sizeof("CSISO2022JP2")];
    char stringpool_str508[sizeof("CSEUCKR")];
    char stringpool_str510[sizeof("MACTHAI")];
    char stringpool_str511[sizeof("EUCTW")];
    char stringpool_str512[sizeof("EUC-TW")];
    char stringpool_str517[sizeof("GBK")];
    char stringpool_str526[sizeof("TCVN5712-1")];
    char stringpool_str530[sizeof("ISO8859-7")];
    char stringpool_str531[sizeof("ISO-8859-7")];
    char stringpool_str532[sizeof("ISO_8859-7")];
    char stringpool_str533[sizeof("SHIFT-JIS")];
    char stringpool_str534[sizeof("SHIFT_JIS")];
    char stringpool_str537[sizeof("TCVN-5712")];
    char stringpool_str539[sizeof("US-ASCII")];
    char stringpool_str540[sizeof("KOI8-T")];
    char stringpool_str545[sizeof("CSVISCII")];
    char stringpool_str547[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str552[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str556[sizeof("UCS-4-INTERNAL")];
    char stringpool_str557[sizeof("CSISOLATINHEBREW")];
    char stringpool_str562[sizeof("CN-GB-ISOIR165")];
    char stringpool_str563[sizeof("UCS-2-INTERNAL")];
    char stringpool_str565[sizeof("CN-GB")];
    char stringpool_str575[sizeof("ANSI_X3.4-1986")];
    char stringpool_str576[sizeof("ISO-2022-JP")];
    char stringpool_str578[sizeof("ISO-IR-57")];
    char stringpool_str581[sizeof("ISO-IR-157")];
    char stringpool_str583[sizeof("CSISO58GB231280")];
    char stringpool_str584[sizeof("ISO-IR-127")];
    char stringpool_str585[sizeof("ISO-IR-87")];
    char stringpool_str586[sizeof("WINDOWS-1257")];
    char stringpool_str588[sizeof("CSSHIFTJIS")];
    char stringpool_str589[sizeof("CSISO2022JP")];
    char stringpool_str590[sizeof("ANSI_X3.4-1968")];
    char stringpool_str591[sizeof("ISO_8859-1:1987")];
    char stringpool_str592[sizeof("WINDOWS-874")];
    char stringpool_str594[sizeof("ISO_8859-6:1987")];
    char stringpool_str599[sizeof("MS-ARAB")];
    char stringpool_str601[sizeof("LATIN7")];
    char stringpool_str605[sizeof("ISO_8859-2:1987")];
    char stringpool_str610[sizeof("UTF-16BE")];
    char stringpool_str612[sizeof("UCS-4BE")];
    char stringpool_str617[sizeof("ISO_8859-7:2003")];
    char stringpool_str618[sizeof("GB18030:2022")];
    char stringpool_str619[sizeof("UCS-2BE")];
    char stringpool_str627[sizeof("UNICODE-1-1-UTF-7")];
    char stringpool_str630[sizeof("CSUNICODE11UTF7")];
    char stringpool_str636[sizeof("UTF-7")];
    char stringpool_str643[sizeof("GB18030:2005")];
    char stringpool_str645[sizeof("BIG5HKSCS")];
    char stringpool_str646[sizeof("BIG5-HKSCS")];
    char stringpool_str647[sizeof("UTF-32BE")];
    char stringpool_str649[sizeof("IBM367")];
    char stringpool_str651[sizeof("GREEK")];
    char stringpool_str656[sizeof("HEBREW")];
    char stringpool_str657[sizeof("SDECKANJI")];
    char stringpool_str668[sizeof("CSISOLATINGREEK")];
    char stringpool_str669[sizeof("JIS_X0212")];
    char stringpool_str675[sizeof("UCS-4-SWAPPED")];
    char stringpool_str681[sizeof("JOHAB")];
    char stringpool_str682[sizeof("UCS-2-SWAPPED")];
    char stringpool_str683[sizeof("JIS_X0201")];
    char stringpool_str685[sizeof("CSISO57GB1988")];
    char stringpool_str691[sizeof("JISX0201-1976")];
    char stringpool_str704[sizeof("JIS_X0212-1990")];
    char stringpool_str712[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str713[sizeof("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE")];
    char stringpool_str719[sizeof("JIS_X0208")];
    char stringpool_str720[sizeof("MS_KANJI")];
    char stringpool_str734[sizeof("JIS_X0208-1983")];
    char stringpool_str743[sizeof("JIS_X0212.1990-0")];
    char stringpool_str750[sizeof("JIS_X0208-1990")];
    char stringpool_str753[sizeof("BIGFIVE")];
    char stringpool_str754[sizeof("BIG-FIVE")];
    char stringpool_str756[sizeof("CSEUCTW")];
    char stringpool_str779[sizeof("ISO_8859-7:1987")];
    char stringpool_str786[sizeof("KOI8-U")];
    char stringpool_str787[sizeof("KOI8-RU")];
    char stringpool_str796[sizeof("MS-GREEK")];
    char stringpool_str798[sizeof("MACGREEK")];
    char stringpool_str799[sizeof("TCVN5712-1:1993")];
    char stringpool_str821[sizeof("MACUKRAINE")];
    char stringpool_str825[sizeof("UNICODELITTLE")];
    char stringpool_str869[sizeof("MACHEBREW")];
    char stringpool_str882[sizeof("BIG5-HKSCS:1999")];
    char stringpool_str884[sizeof("BIG5-HKSCS:2001")];
    char stringpool_str888[sizeof("MS-TURK")];
    char stringpool_str889[sizeof("NEXTSTEP")];
    char stringpool_str891[sizeof("BIG5-HKSCS:2004")];
    char stringpool_str894[sizeof("WINBALTRIM")];
    char stringpool_str902[sizeof("BIG5-HKSCS:2008")];
    char stringpool_str906[sizeof("MACTURKISH")];
    char stringpool_str974[sizeof("CSEUCPKDFMTJAPANESE")];
    char stringpool_str994[sizeof("UNICODEBIG")];
    char stringpool_str999[sizeof("CSISO87JISX0208")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "C99",
    "CN",
    "L1",
    "L6",
    "CP949",
    "L4",
    "L5",
    "R8",
    "L2",
    "L8",
    "CP819",
    "866",
    "L3",
    "CP154",
    "CP866",
    "CP1251",
    "CP1131",
    "CP936",
    "CP1361",
    "CP1256",
    "862",
    "CP1254",
    "CP862",
    "CP1255",
    "CP932",
    "CP1252",
    "HZ",
    "CP1258",
    "EUCCN",
    "EUC-CN",
    "CP1253",
    "CP1133",
    "L10",
    "RK1048",
    "CP50221",
    "CP950",
    "850",
    "ISO646-CN",
    "SJIS",
    "CP1250",
    "CP850",
    "PT154",
    "MAC",
    "ISO8859-9",
    "ISO-8859-9",
    "ISO_8859-9",
    "ISO8859-1",
    "ISO-8859-1",
    "ISO_8859-1",
    "ISO8859-11",
    "ISO-8859-11",
    "ISO_8859-11",
    "ISO8859-6",
    "ISO-8859-6",
    "ISO_8859-6",
    "ISO8859-16",
    "ISO-8859-16",
    "ISO_8859-16",
    "ISO_8859-16:2001",
    "ISO8859-4",
    "ISO-8859-4",
    "ISO_8859-4",
    "ISO8859-14",
    "ISO-8859-14",
    "ISO_8859-14",
    "ISO8859-5",
    "ISO-8859-5",
    "ISO_8859-5",
    "ISO8859-15",
    "ISO-8859-15",
    "ISO_8859-15",
    "ISO8859-2",
    "ISO-8859-2",
    "ISO_8859-2",
    "MS936",
    "ISO-IR-199",
    "ISO_8859-14:1998",
    "ISO8859-8",
    "ISO-8859-8",
    "ISO_8859-8",
    "ISO_8859-15:1998",
    "ISO-IR-6",
    "ISO-IR-149",
    "L7",
    "ISO-2022-CN",
    "ISO-IR-159",
    "CYRILLIC",
    "ISO-IR-166",
    "ROMAN8",
    "ISO-IR-14",
    "ISO8859-3",
    "ISO-8859-3",
    "ISO_8859-3",
    "ISO8859-13",
    "ISO-8859-13",
    "ISO_8859-13",
    "CSISO2022CN",
    "ISO-IR-126",
    "ISO-IR-144",
    "MS-CYRL",
    "GB2312",
    "ISO-IR-165",
    "ISO_8859-10:1992",
    "LATIN-9",
    "LATIN1",
    "ISO-IR-226",
    "LATIN6",
    "ISO-IR-109",
    "CYRILLIC-ASIAN",
    "CP874",
    "ISO-IR-101",
    "ISO-IR-148",
    "ISO-IR-58",
    "LATIN4",
    "PTCP154",
    "ISO8859-10",
    "ISO-8859-10",
    "ISO_8859-10",
    "TIS620",
    "TIS-620",
    "MULELAO-1",
    "LATIN5",
    "UHC",
    "ELOT_928",
    "ECMA-114",
    "LATIN2",
    "US",
    "ISO-IR-138",
    "IBM819",
    "HP-ROMAN8",
    "LATIN8",
    "EUCKR",
    "EUC-KR",
    "KSC5601",
    "KSC_5601",
    "UTF-16",
    "IBM866",
    "ECMA-118",
    "KS_C_5601-1989",
    "UCS-4",
    "LATIN3",
    "ISO-IR-110",
    "CSUCS4",
    "KOREAN",
    "ASCII",
    "JIS_C6226-1983",
    "JP",
    "UCS-2",
    "TIS620-0",
    "TIS620.2529-1",
    "KZ-1048",
    "IBM862",
    "DECHANZI",
    "GB_1988-80",
    "UTF-8",
    "TCVN",
    "CSASCII",
    "JIS_C6220-1969-RO",
    "ISO-IR-203",
    "KOI8-R",
    "DECKOREAN",
    "CSKOI8R",
    "CHINESE",
    "LATIN10",
    "MACROMAN",
    "GB_2312-80",
    "CSKZ1048",
    "UTF-32",
    "ISO-2022-CN-EXT",
    "ISO-IR-100",
    "GB18030",
    "TIS620.2533-1",
    "ARABIC",
    "CSISOLATIN1",
    "MS-EE",
    "JIS0208",
    "CSISOLATIN6",
    "CSISOLATINCYRILLIC",
    "MS-ANSI",
    "TACTIS",
    "IBM850",
    "CSISOLATIN4",
    "CSISOLATINARABIC",
    "CSHPROMAN8",
    "CSPTCP154",
    "STRK1048-2002",
    "CSISOLATIN5",
    "MACICELAND",
    "CSISOLATIN2",
    "TIS620.2533-0",
    "BIG5",
    "BIG-5",
    "ISO-IR-179",
    "ISO646-US",
    "ISO-2022-KR",
    "ISO-CELTIC",
    "JAVA",
    "ARMSCII-8",
    "CSISO2022KR",
    "MACCROATIAN",
    "CSISOLATIN3",
    "WINDOWS-1251",
    "ISO_8859-9:1989",
    "WINDOWS-1256",
    "WINDOWS-936",
    "MACCYRILLIC",
    "UTF-16LE",
    "WINDOWS-1254",
    "UCS-4LE",
    "WINDOWS-1255",
    "WINDOWS-1252",
    "UCS-2LE",
    "VISCII1.1-1",
    "WINDOWS-1258",
    "CSISO14JISC6220RO",
    "ISO-10646-UCS-4",
    "CP1257",
    "CP367",
    "ISO_646.IRV:1991",
    "X0212",
    "WINDOWS-1253",
    "ISO-10646-UCS-2",
    "MACROMANIA",
    "ISO_8859-4:1988",
    "IBM-CP1133",
    "ISO_8859-5:1988",
    "UNICODE-1-1",
    "CSGB2312",
    "X0201",
    "ASMO-708",
    "CSUNICODE11",
    "ISO_8859-8:1988",
    "WINDOWS-1250",
    "UTF-32LE",
    "ISO_8859-3:1988",
    "VISCII",
    "GEORGIAN-ACADEMY",
    "EUCJP",
    "EUC-JP",
    "KS_C_5601-1987",
    "CSISO159JISX02121990",
    "CSBIG5",
    "CN-BIG5",
    "X0208",
    "CSKSC56011987",
    "MACINTOSH",
    "MS-HEBR",
    "ISO-2022-JP-1",
    "MACARABIC",
    "HZ-GB-2312",
    "CSIBM866",
    "ISO-2022-JP-MS",
    "CSMACINTOSH",
    "ISO-2022-JP-2",
    "CSUNICODE",
    "MACCENTRALEUROPE",
    "ISO646-JP",
    "GREEK8",
    "GEORGIAN-PS",
    "CSISO2022JP2",
    "CSEUCKR",
    "MACTHAI",
    "EUCTW",
    "EUC-TW",
    "GBK",
    "TCVN5712-1",
    "ISO8859-7",
    "ISO-8859-7",
    "ISO_8859-7",
    "SHIFT-JIS",
    "SHIFT_JIS",
    "TCVN-5712",
    "US-ASCII",
    "KOI8-T",
    "CSVISCII",
    "CSPC862LATINHEBREW",
    "CSHALFWIDTHKATAKANA",
    "UCS-4-INTERNAL",
    "CSISOLATINHEBREW",
    "CN-GB-ISOIR165",
    "UCS-2-INTERNAL",
    "CN-GB",
    "ANSI_X3.4-1986",
    "ISO-2022-JP",
    "ISO-IR-57",
    "ISO-IR-157",
    "CSISO58GB231280",
    "ISO-IR-127",
    "ISO-IR-87",
    "WINDOWS-1257",
    "CSSHIFTJIS",
    "CSISO2022JP",
    "ANSI_X3.4-1968",
    "ISO_8859-1:1987",
    "WINDOWS-874",
    "ISO_8859-6:1987",
    "MS-ARAB",
    "LATIN7",
    "ISO_8859-2:1987",
    "UTF-16BE",
    "UCS-4BE",
    "ISO_8859-7:2003",
    "GB18030:2022",
    "UCS-2BE",
    "UNICODE-1-1-UTF-7",
    "CSUNICODE11UTF7",
    "UTF-7",
    "GB18030:2005",
    "BIG5HKSCS",
    "BIG5-HKSCS",
    "UTF-32BE",
    "IBM367",
    "GREEK",
    "HEBREW",
    "SDECKANJI",
    "CSISOLATINGREEK",
    "JIS_X0212",
    "UCS-4-SWAPPED",
    "JOHAB",
    "UCS-2-SWAPPED",
    "JIS_X0201",
    "CSISO57GB1988",
    "JISX0201-1976",
    "JIS_X0212-1990",
    "CSPC850MULTILINGUAL",
    "EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",
    "JIS_X0208",
    "MS_KANJI",
    "JIS_X0208-1983",
    "JIS_X0212.1990-0",
    "JIS_X0208-1990",
    "BIGFIVE",
    "BIG-FIVE",
    "CSEUCTW",
    "ISO_8859-7:1987",
    "KOI8-U",
    "KOI8-RU",
    "MS-GREEK",
    "MACGREEK",
    "TCVN5712-1:1993",
    "MACUKRAINE",
    "UNICODELITTLE",
    "MACHEBREW",
    "BIG5-HKSCS:1999",
    "BIG5-HKSCS:2001",
    "MS-TURK",
    "NEXTSTEP",
    "BIG5-HKSCS:2004",
    "WINBALTRIM",
    "BIG5-HKSCS:2008",
    "MACTURKISH",
    "CSEUCPKDFMTJAPANESE",
    "UNICODEBIG",
    "CSISO87JISX0208"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 51 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str5, ei_c99},
    {-1},
#line 289 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str7, ei_iso646_cn},
    {-1}, {-1},
#line 60 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str10, ei_iso8859_1},
    {-1}, {-1},
#line 134 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str13, ei_iso8859_10},
    {-1}, {-1},
#line 359 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str16, ei_cp949},
#line 84 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str17, ei_iso8859_4},
    {-1}, {-1}, {-1},
#line 126 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str21, ei_iso8859_9},
#line 227 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str22, ei_hp_roman8},
    {-1},
#line 68 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str24, ei_iso8859_2},
    {-1}, {-1}, {-1},
#line 151 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str28, ei_iso8859_14},
#line 57 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str29, ei_iso8859_1},
    {-1}, {-1}, {-1},
#line 207 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str33, ei_cp866},
    {-1}, {-1},
#line 76 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str36, ei_iso8859_3},
    {-1}, {-1}, {-1},
#line 236 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str40, ei_pt154},
    {-1},
#line 205 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str42, ei_cp866},
#line 174 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str43, ei_cp1251},
#line 209 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str44, ei_cp1131},
#line 328 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str45, ei_cp936},
    {-1},
#line 363 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str47, ei_johab},
    {-1},
#line 189 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str49, ei_cp1256},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 203 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str55, ei_cp862},
    {-1},
#line 183 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str57, ei_cp1254},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 201 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str64, ei_cp862},
#line 186 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str65, ei_cp1255},
    {-1},
#line 312 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str67, ei_cp932},
    {-1}, {-1}, {-1},
#line 177 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str71, ei_cp1252},
    {-1}, {-1}, {-1},
#line 337 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str75, ei_hz},
    {-1}, {-1}, {-1},
#line 195 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str79, ei_cp1258},
    {-1},
#line 321 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str81, ei_euc_cn},
#line 320 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str82, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 180 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str95, ei_cp1253},
#line 244 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str96, ei_cp1133},
#line 165 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str97, ei_iso8859_16},
    {-1}, {-1}, {-1},
#line 239 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str101, ei_rk1048},
#line 319 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str102, ei_iso2022_jpms},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 348 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str108, ei_cp950},
    {-1}, {-1},
#line 199 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str111, ei_cp850},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 287 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str124, ei_iso646_cn},
#line 309 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str125, ei_sjis},
    {-1},
#line 171 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str127, ei_cp1250},
#line 197 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str128, ei_cp850},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 234 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str137, ei_pt154},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 212 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str149, ei_mac_roman},
#line 128 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str150, ei_iso8859_9},
#line 121 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str151, ei_iso8859_9},
#line 122 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str152, ei_iso8859_9},
    {-1},
#line 62 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str154, ei_iso8859_1},
#line 53 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str155, ei_iso8859_1},
#line 54 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str156, ei_iso8859_1},
#line 139 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str157, ei_iso8859_11},
#line 137 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str158, ei_iso8859_11},
#line 138 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str159, ei_iso8859_11},
#line 102 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str160, ei_iso8859_6},
#line 94 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str161, ei_iso8859_6},
#line 95 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str162, ei_iso8859_6},
#line 166 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163, ei_iso8859_16},
#line 160 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str164, ei_iso8859_16},
#line 161 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str165, ei_iso8859_16},
    {-1},
#line 162 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str167, ei_iso8859_16},
#line 86 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str168, ei_iso8859_4},
#line 79 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str169, ei_iso8859_4},
#line 80 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str170, ei_iso8859_4},
#line 153 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str171, ei_iso8859_14},
#line 146 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str172, ei_iso8859_14},
#line 147 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str173, ei_iso8859_14},
    {-1}, {-1},
#line 93 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str176, ei_iso8859_5},
#line 87 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str177, ei_iso8859_5},
#line 88 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str178, ei_iso8859_5},
#line 159 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str179, ei_iso8859_15},
#line 154 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str180, ei_iso8859_15},
#line 155 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str181, ei_iso8859_15},
#line 70 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str182, ei_iso8859_2},
#line 63 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str183, ei_iso8859_2},
#line 64 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str184, ei_iso8859_2},
#line 329 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str185, ei_cp936},
    {-1}, {-1},
#line 149 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str188, ei_iso8859_14},
#line 148 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str189, ei_iso8859_14},
#line 120 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str190, ei_iso8859_8},
#line 114 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str191, ei_iso8859_8},
#line 115 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str192, ei_iso8859_8},
#line 156 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str193, ei_iso8859_15},
#line 16 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str194, ei_ascii},
    {-1}, {-1},
#line 299 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str197, ei_ksc5601},
#line 144 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str198, ei_iso8859_13},
#line 334 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str199, ei_iso2022_cn},
    {-1},
#line 284 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str201, ei_jisx0212},
#line 91 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str202, ei_iso8859_5},
#line 252 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str203, ei_tis620},
#line 226 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str204, ei_hp_roman8},
#line 265 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str205, ei_iso646_jp},
#line 78 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str206, ei_iso8859_3},
#line 71 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str207, ei_iso8859_3},
#line 72 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str208, ei_iso8859_3},
#line 145 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str209, ei_iso8859_13},
#line 140 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str210, ei_iso8859_13},
#line 141 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str211, ei_iso8859_13},
#line 335 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str212, ei_iso2022_cn},
    {-1},
#line 107 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str214, ei_iso8859_7},
#line 90 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str215, ei_iso8859_5},
    {-1},
#line 176 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str217, ei_cp1251},
#line 322 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str218, ei_euc_cn},
#line 294 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str219, ei_isoir165},
#line 131 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str220, ei_iso8859_10},
    {-1},
#line 158 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str222, ei_iso8859_15},
    {-1}, {-1},
#line 59 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str225, ei_iso8859_1},
    {-1}, {-1},
#line 163 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str228, ei_iso8859_16},
    {-1}, {-1},
#line 133 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str231, ei_iso8859_10},
#line 74 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str232, ei_iso8859_3},
#line 237 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str233, ei_pt154},
    {-1},
#line 254 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str235, ei_cp874},
#line 66 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str236, ei_iso8859_2},
#line 124 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str237, ei_iso8859_9},
#line 292 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str238, ei_gb2312},
#line 83 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str239, ei_iso8859_4},
#line 235 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str240, ei_pt154},
#line 136 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str241, ei_iso8859_10},
#line 129 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str242, ei_iso8859_10},
#line 130 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str243, ei_iso8859_10},
#line 247 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str244, ei_tis620},
#line 246 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str245, ei_tis620},
#line 243 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str246, ei_mulelao},
#line 125 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str247, ei_iso8859_9},
#line 360 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str248, ei_cp949},
#line 109 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str249, ei_iso8859_7},
    {-1},
#line 98 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str251, ei_iso8859_6},
    {-1},
#line 67 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str253, ei_iso8859_2},
#line 21 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str254, ei_ascii},
    {-1},
#line 117 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str256, ei_iso8859_8},
    {-1},
#line 58 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str258, ei_iso8859_1},
#line 225 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str259, ei_hp_roman8},
    {-1},
#line 150 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str261, ei_iso8859_14},
    {-1},
#line 356 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str263, ei_euc_kr},
#line 355 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str264, ei_euc_kr},
#line 361 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str265, ei_cp949},
    {-1},
#line 296 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str267, ei_ksc5601},
    {-1},
#line 38 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str269, ei_utf16},
    {-1},
#line 206 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str271, ei_cp866},
    {-1},
#line 108 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str273, ei_iso8859_7},
#line 298 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str274, ei_ksc5601},
#line 33 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str275, ei_ucs4},
    {-1},
#line 75 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str277, ei_iso8859_3},
#line 82 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str278, ei_iso8859_4},
    {-1},
#line 35 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str280, ei_ucs4},
#line 301 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str281, ei_ksc5601},
    {-1}, {-1},
#line 13 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str284, ei_ascii},
    {-1}, {-1},
#line 278 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str287, ei_jisx0208},
#line 266 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str288, ei_iso646_jp},
#line 24 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str289, ei_ucs2},
#line 248 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str290, ei_tis620},
#line 249 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str291, ei_tis620},
#line 241 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str292, ei_rk1048},
#line 202 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str293, ei_cp862},
#line 326 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str294, ei_euc_cn},
#line 286 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str295, ei_iso646_cn},
#line 23 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str296, ei_utf8},
    {-1},
#line 259 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str298, ei_tcvn},
#line 22 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str299, ei_ascii},
    {-1},
#line 263 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str301, ei_iso646_jp},
#line 157 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str302, ei_iso8859_15},
    {-1},
#line 167 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str304, ei_koi8_r},
#line 358 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str305, ei_euc_kr},
    {-1},
#line 168 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str307, ei_koi8_r},
    {-1},
#line 325 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str309, ei_euc_cn},
    {-1}, {-1},
#line 164 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str312, ei_iso8859_16},
#line 210 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str313, ei_mac_roman},
    {-1},
#line 291 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str315, ei_gb2312},
#line 242 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str316, ei_rk1048},
#line 41 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str317, ei_utf32},
#line 336 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str318, ei_iso2022_cn_ext},
    {-1},
#line 56 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str320, ei_iso8859_1},
    {-1}, {-1},
#line 331 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str323, ei_gb18030_2005},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 251 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str331, ei_tis620},
    {-1}, {-1}, {-1}, {-1},
#line 100 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str336, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 61 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str344, ei_iso8859_1},
#line 173 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str345, ei_cp1250},
    {-1}, {-1}, {-1},
#line 275 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str349, ei_jisx0208},
#line 135 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str350, ei_iso8859_10},
#line 92 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str351, ei_iso8859_5},
#line 179 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str352, ei_cp1252},
    {-1},
#line 253 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str354, ei_tis620},
    {-1}, {-1},
#line 198 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str357, ei_cp850},
#line 85 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str358, ei_iso8859_4},
    {-1},
#line 101 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str360, ei_iso8859_6},
#line 228 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str361, ei_hp_roman8},
#line 238 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str362, ei_pt154},
    {-1}, {-1},
#line 240 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str365, ei_rk1048},
#line 127 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str366, ei_iso8859_9},
    {-1}, {-1}, {-1},
#line 215 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str370, ei_mac_iceland},
    {-1},
#line 69 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str372, ei_iso8859_2},
#line 250 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str373, ei_tis620},
    {-1}, {-1},
#line 342 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str376, ei_ces_big5},
#line 343 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str377, ei_ces_big5},
#line 142 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str378, ei_iso8859_13},
#line 14 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str379, ei_ascii},
    {-1},
#line 364 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str381, ei_iso2022_kr},
#line 152 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str382, ei_iso8859_14},
    {-1}, {-1}, {-1}, {-1},
#line 52 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str387, ei_java},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 230 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str393, ei_armscii_8},
#line 365 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str394, ei_iso2022_kr},
#line 216 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str395, ei_mac_croatian},
#line 77 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str396, ei_iso8859_3},
    {-1},
#line 175 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str398, ei_cp1251},
#line 123 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str399, ei_iso8859_9},
    {-1},
#line 190 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str401, ei_cp1256},
#line 330 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str402, ei_cp936},
#line 218 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str403, ei_mac_cyrillic},
#line 40 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str404, ei_utf16le},
#line 184 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str405, ei_cp1254},
#line 37 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str406, ei_ucs4le},
    {-1}, {-1},
#line 187 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str409, ei_cp1255},
    {-1}, {-1},
#line 178 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str412, ei_cp1252},
#line 31 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str413, ei_ucs2le},
    {-1},
#line 257 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str415, ei_viscii},
#line 196 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str416, ei_cp1258},
#line 267 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str417, ei_iso646_jp},
#line 34 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str418, ei_ucs4},
#line 192 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str419, ei_cp1257},
#line 19 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str420, ei_ascii},
#line 15 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421, ei_ascii},
#line 283 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str422, ei_jisx0212},
    {-1},
#line 181 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str424, ei_cp1253},
#line 25 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str425, ei_ucs2},
#line 217 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str426, ei_mac_romania},
    {-1},
#line 81 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str428, ei_iso8859_4},
#line 245 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str429, ei_cp1133},
    {-1}, {-1},
#line 89 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str432, ei_iso8859_5},
#line 29 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str433, ei_ucs2be},
#line 324 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str434, ei_euc_cn},
    {-1},
#line 270 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str436, ei_jisx0201},
#line 99 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str437, ei_iso8859_6},
#line 30 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str438, ei_ucs2be},
#line 116 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str439, ei_iso8859_8},
#line 172 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str440, ei_cp1250},
#line 43 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str441, ei_utf32le},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 73 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str447, ei_iso8859_3},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 256 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str453, ei_viscii},
    {-1}, {-1}, {-1},
#line 231 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str457, ei_georgian_academy},
#line 303 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str458, ei_euc_jp},
#line 302 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str459, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1},
#line 297 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str464, ei_ksc5601},
    {-1},
#line 285 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str466, ei_jisx0212},
    {-1},
#line 347 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str468, ei_ces_big5},
#line 346 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str469, ei_ces_big5},
    {-1}, {-1},
#line 276 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str472, ei_jisx0208},
    {-1},
#line 300 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str474, ei_ksc5601},
    {-1}, {-1},
#line 211 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str477, ei_mac_roman},
    {-1},
#line 188 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str479, ei_cp1255},
    {-1},
#line 315 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str481, ei_iso2022_jp1},
    {-1},
#line 223 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str483, ei_mac_arabic},
    {-1}, {-1},
#line 338 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str486, ei_hz},
#line 208 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str487, ei_cp866},
    {-1}, {-1}, {-1},
#line 318 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str491, ei_iso2022_jpms},
    {-1}, {-1},
#line 213 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str494, ei_mac_roman},
#line 316 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str495, ei_iso2022_jp2},
#line 26 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str496, ei_ucs2},
    {-1}, {-1}, {-1},
#line 214 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str500, ei_mac_centraleurope},
#line 264 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str501, ei_iso646_jp},
#line 110 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str502, ei_iso8859_7},
    {-1},
#line 232 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str504, ei_georgian_ps},
    {-1}, {-1},
#line 317 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str507, ei_iso2022_jp2},
#line 357 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str508, ei_euc_kr},
    {-1},
#line 224 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str510, ei_mac_thai},
#line 340 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str511, ei_euc_tw},
#line 339 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str512, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1},
#line 327 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str517, ei_ces_gbk},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 261 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str526, ei_tcvn},
    {-1}, {-1}, {-1},
#line 113 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str530, ei_iso8859_7},
#line 103 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str531, ei_iso8859_7},
#line 104 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str532, ei_iso8859_7},
#line 308 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str533, ei_sjis},
#line 307 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str534, ei_sjis},
    {-1}, {-1},
#line 260 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str537, ei_tcvn},
    {-1},
#line 12 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str539, ei_ascii},
#line 233 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str540, ei_koi8_t},
    {-1}, {-1}, {-1}, {-1},
#line 258 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str545, ei_viscii},
    {-1},
#line 204 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str547, ei_cp862},
    {-1}, {-1}, {-1}, {-1},
#line 271 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str552, ei_jisx0201},
    {-1}, {-1}, {-1},
#line 49 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str556, ei_ucs4internal},
#line 119 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str557, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1},
#line 295 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str562, ei_isoir165},
#line 47 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str563, ei_ucs2internal},
    {-1},
#line 323 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str565, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 18 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str575, ei_ascii},
#line 313 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str576, ei_iso2022_jp},
    {-1},
#line 288 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str578, ei_iso646_cn},
    {-1}, {-1},
#line 132 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str581, ei_iso8859_10},
    {-1},
#line 293 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str583, ei_gb2312},
#line 97 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str584, ei_iso8859_6},
#line 277 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str585, ei_jisx0208},
#line 193 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str586, ei_cp1257},
    {-1},
#line 311 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str588, ei_sjis},
#line 314 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str589, ei_iso2022_jp},
#line 17 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str590, ei_ascii},
#line 55 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str591, ei_iso8859_1},
#line 255 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str592, ei_cp874},
    {-1},
#line 96 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str594, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1},
#line 191 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str599, ei_cp1256},
    {-1},
#line 143 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str601, ei_iso8859_13},
    {-1}, {-1}, {-1},
#line 65 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str605, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1},
#line 39 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str610, ei_utf16be},
    {-1},
#line 36 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str612, ei_ucs4be},
    {-1}, {-1}, {-1}, {-1},
#line 106 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str617, ei_iso8859_7},
#line 333 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str618, ei_gb18030_2022},
#line 27 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str619, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 45 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str627, ei_utf7},
    {-1}, {-1},
#line 46 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str630, ei_utf7},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 44 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str636, ei_utf7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 332 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str643, ei_gb18030_2005},
    {-1},
#line 353 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str645, ei_big5hkscs2008},
#line 352 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str646, ei_big5hkscs2008},
#line 42 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str647, ei_utf32be},
    {-1},
#line 20 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str649, ei_ascii},
    {-1},
#line 111 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str651, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1},
#line 118 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str656, ei_iso8859_8},
#line 306 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str657, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 112 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str668, ei_iso8859_7},
#line 280 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str669, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 50 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str675, ei_ucs4swapped},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 362 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str681, ei_johab},
#line 48 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str682, ei_ucs2swapped},
#line 268 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str683, ei_jisx0201},
    {-1},
#line 290 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str685, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 269 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str691, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 282 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str704, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 200 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str712, ei_cp850},
#line 304 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str713, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 272 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str719, ei_jisx0208},
#line 310 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str720, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 273 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str734, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 281 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str743, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 274 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str750, ei_jisx0208},
    {-1}, {-1},
#line 345 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str753, ei_ces_big5},
#line 344 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str754, ei_ces_big5},
    {-1},
#line 341 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str756, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 105 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str779, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 169 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str786, ei_koi8_u},
#line 170 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str787, ei_koi8_ru},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 182 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str796, ei_cp1253},
    {-1},
#line 220 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str798, ei_mac_greek},
#line 262 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str799, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 219 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str821, ei_mac_ukraine},
    {-1}, {-1}, {-1},
#line 32 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str825, ei_ucs2le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 222 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str869, ei_mac_hebrew},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 349 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str882, ei_big5hkscs1999},
    {-1},
#line 350 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str884, ei_big5hkscs2001},
    {-1}, {-1}, {-1},
#line 185 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str888, ei_cp1254},
#line 229 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str889, ei_nextstep},
    {-1},
#line 351 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str891, ei_big5hkscs2004},
    {-1}, {-1},
#line 194 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str894, ei_cp1257},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 354 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str902, ei_big5hkscs2008},
    {-1}, {-1}, {-1},
#line 221 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str906, ei_mac_turkish},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 305 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str974, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 28 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str994, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1},
#line 279 "lib/generated/aliases_sysosf1.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str999, ei_jisx0208}
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
