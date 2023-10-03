/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -Z HashPool -m 10 lib/generated/aliases_syssolaris.gperf  */
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

#line 1 "lib/generated/aliases_syssolaris.gperf"
struct alias { int name; unsigned int encoding_index; };

#define TOTAL_KEYWORDS 356
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 6
#define MAX_HASH_VALUE 919
/* maximum key range = 914, duplicates = 0 */

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
      920, 920, 920, 920, 920, 920, 920, 920, 920, 920,
      920, 920, 920, 920, 920, 920, 920, 920, 920, 920,
      920, 920, 920, 920, 920, 920, 920, 920, 920, 920,
      920, 920, 920, 920, 920, 920, 920, 920, 920, 920,
      920, 920, 920, 920, 920,  10,   1, 920,  29,   0,
        5,  74,  47,   2,   1, 150,   4,  11, 271, 920,
      920, 920, 920, 920, 920,  60, 172,   1,   3,  71,
      164,  91,  54,   0, 205, 108, 135,  85,   8,   0,
      145, 920,  41,  74,   8,  74, 227, 141, 174,   7,
        2, 920, 920, 920, 920,  70, 920, 920, 920, 920,
      920, 920, 920, 920, 920, 920, 920, 920, 920, 920,
      920, 920, 920, 920, 920, 920, 920, 920, 920, 920,
      920, 920, 920, 920, 920, 920, 920, 920
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
    char stringpool_str6[sizeof("646")];
    char stringpool_str9[sizeof("866")];
    char stringpool_str11[sizeof("CN")];
    char stringpool_str13[sizeof("CP866")];
    char stringpool_str14[sizeof("CP1251")];
    char stringpool_str16[sizeof("CP1256")];
    char stringpool_str17[sizeof("862")];
    char stringpool_str18[sizeof("CP1255")];
    char stringpool_str21[sizeof("CP862")];
    char stringpool_str22[sizeof("CP1258")];
    char stringpool_str24[sizeof("CP1252")];
    char stringpool_str26[sizeof("C99")];
    char stringpool_str32[sizeof("CP819")];
    char stringpool_str35[sizeof("5601")];
    char stringpool_str40[sizeof("ISO8859-1")];
    char stringpool_str41[sizeof("ISO8859-11")];
    char stringpool_str42[sizeof("ISO8859-6")];
    char stringpool_str43[sizeof("ISO8859-16")];
    char stringpool_str44[sizeof("ISO8859-5")];
    char stringpool_str45[sizeof("ISO8859-15")];
    char stringpool_str47[sizeof("R8")];
    char stringpool_str48[sizeof("ISO8859-8")];
    char stringpool_str49[sizeof("CP50221")];
    char stringpool_str50[sizeof("ISO8859-2")];
    char stringpool_str51[sizeof("ISO-8859-1")];
    char stringpool_str52[sizeof("ISO-8859-11")];
    char stringpool_str53[sizeof("ISO-8859-6")];
    char stringpool_str54[sizeof("ISO-8859-16")];
    char stringpool_str55[sizeof("ISO-8859-5")];
    char stringpool_str56[sizeof("ISO-8859-15")];
    char stringpool_str58[sizeof("HZ")];
    char stringpool_str59[sizeof("ISO-8859-8")];
    char stringpool_str61[sizeof("ISO-8859-2")];
    char stringpool_str62[sizeof("ISO8859-9")];
    char stringpool_str65[sizeof("850")];
    char stringpool_str66[sizeof("ASCII")];
    char stringpool_str70[sizeof("CP850")];
    char stringpool_str71[sizeof("ISO-IR-6")];
    char stringpool_str72[sizeof("CP1250")];
    char stringpool_str73[sizeof("ISO-8859-9")];
    char stringpool_str74[sizeof("ISO-IR-166")];
    char stringpool_str76[sizeof("ISO-IR-165")];
    char stringpool_str77[sizeof("CP950")];
    char stringpool_str78[sizeof("ISO-IR-126")];
    char stringpool_str79[sizeof("UHC")];
    char stringpool_str80[sizeof("ISO-IR-58")];
    char stringpool_str81[sizeof("CP1131")];
    char stringpool_str82[sizeof("CP1361")];
    char stringpool_str83[sizeof("ISO-IR-226")];
    char stringpool_str85[sizeof("ISO646-CN")];
    char stringpool_str86[sizeof("CP949")];
    char stringpool_str90[sizeof("MAC")];
    char stringpool_str92[sizeof("ISO-2022-CN")];
    char stringpool_str93[sizeof("CP936")];
    char stringpool_str94[sizeof("EUCCN")];
    char stringpool_str95[sizeof("ISO-IR-159")];
    char stringpool_str96[sizeof("ISO-2022-CN-EXT")];
    char stringpool_str98[sizeof("IBM866")];
    char stringpool_str99[sizeof("ISO8859-10")];
    char stringpool_str100[sizeof("ISO-IR-101")];
    char stringpool_str101[sizeof("CP932")];
    char stringpool_str102[sizeof("CP154")];
    char stringpool_str104[sizeof("ISO-IR-199")];
    char stringpool_str105[sizeof("EUC-CN")];
    char stringpool_str106[sizeof("IBM862")];
    char stringpool_str108[sizeof("CP1254")];
    char stringpool_str110[sizeof("ISO-8859-10")];
    char stringpool_str111[sizeof("ISO_8859-1")];
    char stringpool_str112[sizeof("ISO_8859-11")];
    char stringpool_str113[sizeof("ISO_8859-6")];
    char stringpool_str114[sizeof("ISO_8859-16")];
    char stringpool_str115[sizeof("ISO_8859-5")];
    char stringpool_str116[sizeof("ISO_8859-15")];
    char stringpool_str117[sizeof("IBM819")];
    char stringpool_str118[sizeof("ISO_8859-16:2001")];
    char stringpool_str119[sizeof("ISO_8859-8")];
    char stringpool_str121[sizeof("ISO_8859-2")];
    char stringpool_str122[sizeof("ISO-IR-109")];
    char stringpool_str123[sizeof("ISO_8859-15:1998")];
    char stringpool_str126[sizeof("ISO-IR-148")];
    char stringpool_str129[sizeof("ISO-IR-110")];
    char stringpool_str131[sizeof("RK1048")];
    char stringpool_str133[sizeof("ISO_8859-9")];
    char stringpool_str134[sizeof("ISO8859-4")];
    char stringpool_str135[sizeof("ISO8859-14")];
    char stringpool_str137[sizeof("L1")];
    char stringpool_str138[sizeof("L6")];
    char stringpool_str139[sizeof("L5")];
    char stringpool_str140[sizeof("ISO-IR-149")];
    char stringpool_str141[sizeof("L8")];
    char stringpool_str142[sizeof("L2")];
    char stringpool_str143[sizeof("CSASCII")];
    char stringpool_str144[sizeof("KOI8-T")];
    char stringpool_str145[sizeof("ISO-8859-4")];
    char stringpool_str146[sizeof("ISO-8859-14")];
    char stringpool_str147[sizeof("CSISO2022CN")];
    char stringpool_str150[sizeof("US")];
    char stringpool_str151[sizeof("ISO_8859-10:1992")];
    char stringpool_str152[sizeof("TIS620")];
    char stringpool_str153[sizeof("ISO-IR-138")];
    char stringpool_str154[sizeof("TIS620.2529-1")];
    char stringpool_str155[sizeof("IBM850")];
    char stringpool_str157[sizeof("LATIN1")];
    char stringpool_str158[sizeof("ISO-IR-100")];
    char stringpool_str159[sizeof("LATIN6")];
    char stringpool_str160[sizeof("ANSI-1251")];
    char stringpool_str161[sizeof("LATIN5")];
    char stringpool_str162[sizeof("CP1253")];
    char stringpool_str163[sizeof("TIS-620")];
    char stringpool_str164[sizeof("ISO-IR-14")];
    char stringpool_str165[sizeof("LATIN8")];
    char stringpool_str167[sizeof("LATIN2")];
    char stringpool_str168[sizeof("ISO_8859-14:1998")];
    char stringpool_str169[sizeof("CSUNICODE11")];
    char stringpool_str170[sizeof("ISO_8859-10")];
    char stringpool_str173[sizeof("UCS-2")];
    char stringpool_str177[sizeof("MS936")];
    char stringpool_str180[sizeof("UNICODE-1-1")];
    char stringpool_str181[sizeof("ELOT_928")];
    char stringpool_str184[sizeof("L4")];
    char stringpool_str186[sizeof("GB2312")];
    char stringpool_str188[sizeof("ISO8859-3")];
    char stringpool_str189[sizeof("ISO8859-13")];
    char stringpool_str190[sizeof("LATIN-9")];
    char stringpool_str192[sizeof("ISO-10646-UCS-2")];
    char stringpool_str193[sizeof("TIS620-0")];
    char stringpool_str194[sizeof("X0212")];
    char stringpool_str196[sizeof("L10")];
    char stringpool_str199[sizeof("ISO-8859-3")];
    char stringpool_str200[sizeof("ISO-8859-13")];
    char stringpool_str202[sizeof("CSKOI8R")];
    char stringpool_str203[sizeof("CSKZ1048")];
    char stringpool_str205[sizeof("ISO_8859-4")];
    char stringpool_str206[sizeof("ISO_8859-14")];
    char stringpool_str208[sizeof("ROMAN8")];
    char stringpool_str209[sizeof("KZ-1048")];
    char stringpool_str210[sizeof("KOI8-R")];
    char stringpool_str211[sizeof("L3")];
    char stringpool_str212[sizeof("ISO-IR-144")];
    char stringpool_str213[sizeof("X0201")];
    char stringpool_str215[sizeof("MACTHAI")];
    char stringpool_str216[sizeof("LATIN10")];
    char stringpool_str219[sizeof("KSC_5601")];
    char stringpool_str221[sizeof("X0208")];
    char stringpool_str226[sizeof("SJIS")];
    char stringpool_str227[sizeof("US-ASCII")];
    char stringpool_str229[sizeof("CP1133")];
    char stringpool_str234[sizeof("ISO-10646-UCS-4")];
    char stringpool_str237[sizeof("ISO-CELTIC")];
    char stringpool_str238[sizeof("CSUNICODE")];
    char stringpool_str242[sizeof("ECMA-118")];
    char stringpool_str243[sizeof("ISO-IR-179")];
    char stringpool_str244[sizeof("MS-ANSI")];
    char stringpool_str246[sizeof("PT154")];
    char stringpool_str247[sizeof("ARMSCII-8")];
    char stringpool_str250[sizeof("CSUCS4")];
    char stringpool_str251[sizeof("LATIN4")];
    char stringpool_str253[sizeof("ISO-IR-203")];
    char stringpool_str254[sizeof("CP874")];
    char stringpool_str255[sizeof("TCVN")];
    char stringpool_str256[sizeof("UTF-16")];
    char stringpool_str257[sizeof("UCS-4")];
    char stringpool_str259[sizeof("ISO_8859-3")];
    char stringpool_str260[sizeof("ISO_8859-13")];
    char stringpool_str261[sizeof("UTF-8")];
    char stringpool_str262[sizeof("GB_1988-80")];
    char stringpool_str263[sizeof("GB18030")];
    char stringpool_str265[sizeof("ISO-2022-KR")];
    char stringpool_str267[sizeof("EUCKR")];
    char stringpool_str271[sizeof("BIG5")];
    char stringpool_str273[sizeof("CSIBM866")];
    char stringpool_str274[sizeof("CSBIG5")];
    char stringpool_str275[sizeof("HP-ROMAN8")];
    char stringpool_str276[sizeof("KOI8-U")];
    char stringpool_str278[sizeof("EUC-KR")];
    char stringpool_str279[sizeof("CNS11643")];
    char stringpool_str282[sizeof("BIG-5")];
    char stringpool_str283[sizeof("MACCROATIAN")];
    char stringpool_str285[sizeof("CN-BIG5")];
    char stringpool_str286[sizeof("TIS620.2533-1")];
    char stringpool_str287[sizeof("L7")];
    char stringpool_str290[sizeof("ISO646-US")];
    char stringpool_str293[sizeof("MACINTOSH")];
    char stringpool_str296[sizeof("MACROMAN")];
    char stringpool_str297[sizeof("CSISOLATIN1")];
    char stringpool_str299[sizeof("CSISOLATIN6")];
    char stringpool_str300[sizeof("ARABIC")];
    char stringpool_str301[sizeof("CSISOLATIN5")];
    char stringpool_str302[sizeof("KOREAN")];
    char stringpool_str303[sizeof("CHINESE")];
    char stringpool_str305[sizeof("LATIN3")];
    char stringpool_str306[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str307[sizeof("CSISOLATIN2")];
    char stringpool_str308[sizeof("VISCII")];
    char stringpool_str310[sizeof("GBK")];
    char stringpool_str311[sizeof("CSVISCII")];
    char stringpool_str313[sizeof("MS-EE")];
    char stringpool_str314[sizeof("CP1257")];
    char stringpool_str315[sizeof("TIS620.2533-0")];
    char stringpool_str316[sizeof("KS_C_5601-1989")];
    char stringpool_str318[sizeof("KOI8-RU")];
    char stringpool_str320[sizeof("CSISO2022KR")];
    char stringpool_str322[sizeof("CYRILLIC")];
    char stringpool_str323[sizeof("CSUNICODE11UTF7")];
    char stringpool_str324[sizeof("VISCII1.1-1")];
    char stringpool_str327[sizeof("GB_2312-80")];
    char stringpool_str328[sizeof("ECMA-114")];
    char stringpool_str336[sizeof("UNICODE-1-1-UTF-7")];
    char stringpool_str338[sizeof("UTF-32")];
    char stringpool_str340[sizeof("ISO8859-7")];
    char stringpool_str344[sizeof("CSEUCKR")];
    char stringpool_str350[sizeof("ASMO-708")];
    char stringpool_str351[sizeof("ISO-8859-7")];
    char stringpool_str352[sizeof("JP")];
    char stringpool_str355[sizeof("GREEK8")];
    char stringpool_str356[sizeof("CSMACINTOSH")];
    char stringpool_str357[sizeof("JIS0208")];
    char stringpool_str358[sizeof("TIS620.2533")];
    char stringpool_str361[sizeof("CSGB2312")];
    char stringpool_str363[sizeof("CSISOLATINARABIC")];
    char stringpool_str364[sizeof("PCK")];
    char stringpool_str365[sizeof("STRK1048-2002")];
    char stringpool_str367[sizeof("EUCTW")];
    char stringpool_str372[sizeof("ISO-IR-57")];
    char stringpool_str373[sizeof("ISO-IR-157")];
    char stringpool_str374[sizeof("ISO-IR-87")];
    char stringpool_str376[sizeof("ISO-IR-127")];
    char stringpool_str377[sizeof("MACICELAND")];
    char stringpool_str378[sizeof("EUC-TW")];
    char stringpool_str381[sizeof("CP367")];
    char stringpool_str384[sizeof("UNICODELITTLE")];
    char stringpool_str385[sizeof("GEORGIAN-ACADEMY")];
    char stringpool_str390[sizeof("CSKSC56011987")];
    char stringpool_str391[sizeof("CSISOLATIN4")];
    char stringpool_str393[sizeof("ISO_8859-5:1988")];
    char stringpool_str394[sizeof("PTCP154")];
    char stringpool_str395[sizeof("ISO_8859-8:1988")];
    char stringpool_str396[sizeof("WINDOWS-1251")];
    char stringpool_str397[sizeof("WINDOWS-1256")];
    char stringpool_str398[sizeof("WINDOWS-1255")];
    char stringpool_str400[sizeof("WINDOWS-1258")];
    char stringpool_str401[sizeof("WINDOWS-1252")];
    char stringpool_str404[sizeof("ISO_646.IRV:1991")];
    char stringpool_str405[sizeof("CSPTCP154")];
    char stringpool_str409[sizeof("ISO_8859-9:1989")];
    char stringpool_str410[sizeof("MACROMANIA")];
    char stringpool_str411[sizeof("ISO_8859-7")];
    char stringpool_str412[sizeof("CSHPROMAN8")];
    char stringpool_str415[sizeof("CN-GB-ISOIR165")];
    char stringpool_str416[sizeof("CSISO159JISX02121990")];
    char stringpool_str417[sizeof("JIS_C6220-1969-RO")];
    char stringpool_str418[sizeof("MACCYRILLIC")];
    char stringpool_str419[sizeof("CSISO14JISC6220RO")];
    char stringpool_str420[sizeof("TCVN5712-1")];
    char stringpool_str421[sizeof("MS-CYRL")];
    char stringpool_str424[sizeof("TCVN-5712")];
    char stringpool_str425[sizeof("WINDOWS-1250")];
    char stringpool_str427[sizeof("ISO-2022-JP-1")];
    char stringpool_str430[sizeof("MACARABIC")];
    char stringpool_str432[sizeof("ISO-2022-JP-2")];
    char stringpool_str436[sizeof("HZ-GB-2312")];
    char stringpool_str438[sizeof("ISO_8859-4:1988")];
    char stringpool_str441[sizeof("MS-TURK")];
    char stringpool_str443[sizeof("WINDOWS-1254")];
    char stringpool_str444[sizeof("CSEUCTW")];
    char stringpool_str445[sizeof("CSISOLATIN3")];
    char stringpool_str447[sizeof("UCS-2LE")];
    char stringpool_str450[sizeof("UCS-2-INTERNAL")];
    char stringpool_str451[sizeof("CN-GB")];
    char stringpool_str454[sizeof("GREEK")];
    char stringpool_str455[sizeof("KS_C_5601-1987")];
    char stringpool_str457[sizeof("LATIN7")];
    char stringpool_str460[sizeof("JIS_C6226-1983")];
    char stringpool_str465[sizeof("ISO_8859-3:1988")];
    char stringpool_str466[sizeof("IBM367")];
    char stringpool_str467[sizeof("CSISO58GB231280")];
    char stringpool_str470[sizeof("WINDOWS-1253")];
    char stringpool_str473[sizeof("IBM-CP1133")];
    char stringpool_str475[sizeof("WINDOWS-936")];
    char stringpool_str479[sizeof("CYRILLIC-ASIAN")];
    char stringpool_str481[sizeof("MS-HEBR")];
    char stringpool_str484[sizeof("UCS-2BE")];
    char stringpool_str486[sizeof("CSISO2022JP2")];
    char stringpool_str489[sizeof("UCS-4LE")];
    char stringpool_str492[sizeof("UCS-4-INTERNAL")];
    char stringpool_str497[sizeof("CSISOLATINHEBREW")];
    char stringpool_str500[sizeof("CSISOLATINGREEK")];
    char stringpool_str502[sizeof("ISO-2022-JP-MS")];
    char stringpool_str503[sizeof("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE")];
    char stringpool_str505[sizeof("MULELAO-1")];
    char stringpool_str509[sizeof("MACTURKISH")];
    char stringpool_str513[sizeof("UNICODEBIG")];
    char stringpool_str518[sizeof("CSISO57GB1988")];
    char stringpool_str519[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str525[sizeof("ANSI_X3.4-1986")];
    char stringpool_str526[sizeof("UCS-4BE")];
    char stringpool_str528[sizeof("ANSI_X3.4-1968")];
    char stringpool_str529[sizeof("MACUKRAINE")];
    char stringpool_str534[sizeof("UTF-16LE")];
    char stringpool_str537[sizeof("ISO_8859-1:1987")];
    char stringpool_str538[sizeof("ISO_8859-6:1987")];
    char stringpool_str542[sizeof("ISO_8859-2:1987")];
    char stringpool_str544[sizeof("MS_KANJI")];
    char stringpool_str546[sizeof("WINDOWS-1257")];
    char stringpool_str551[sizeof("JISX0201-1976")];
    char stringpool_str553[sizeof("UTF-7")];
    char stringpool_str554[sizeof("GB18030:2022")];
    char stringpool_str556[sizeof("JAVA")];
    char stringpool_str563[sizeof("ISO646-JP")];
    char stringpool_str568[sizeof("MACCENTRALEUROPE")];
    char stringpool_str570[sizeof("ISO-2022-JP")];
    char stringpool_str571[sizeof("UTF-16BE")];
    char stringpool_str572[sizeof("EUCJP")];
    char stringpool_str575[sizeof("GB18030:2005")];
    char stringpool_str576[sizeof("JIS_X0212")];
    char stringpool_str583[sizeof("EUC-JP")];
    char stringpool_str584[sizeof("MACGREEK")];
    char stringpool_str593[sizeof("MS-GREEK")];
    char stringpool_str595[sizeof("JIS_X0201")];
    char stringpool_str603[sizeof("JIS_X0208")];
    char stringpool_str605[sizeof("GEORGIAN-PS")];
    char stringpool_str607[sizeof("MS-ARAB")];
    char stringpool_str608[sizeof("JIS_X0212.1990-0")];
    char stringpool_str611[sizeof("ISO_8859-7:2003")];
    char stringpool_str612[sizeof("UTF-32LE")];
    char stringpool_str615[sizeof("JIS_X0212-1990")];
    char stringpool_str618[sizeof("SHIFT-JIS")];
    char stringpool_str625[sizeof("CSISO2022JP")];
    char stringpool_str626[sizeof("HEBREW")];
    char stringpool_str636[sizeof("WINDOWS-874")];
    char stringpool_str638[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str641[sizeof("NEXTSTEP")];
    char stringpool_str643[sizeof("JIS_X0208-1990")];
    char stringpool_str649[sizeof("UTF-32BE")];
    char stringpool_str659[sizeof("BIG5HKSCS")];
    char stringpool_str664[sizeof("CSSHIFTJIS")];
    char stringpool_str668[sizeof("JOHAB")];
    char stringpool_str670[sizeof("BIG5-HKSCS")];
    char stringpool_str678[sizeof("SHIFT_JIS")];
    char stringpool_str687[sizeof("ISO_8859-7:1987")];
    char stringpool_str688[sizeof("JIS_X0208-1983")];
    char stringpool_str699[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str701[sizeof("CSISO87JISX0208")];
    char stringpool_str745[sizeof("WINBALTRIM")];
    char stringpool_str750[sizeof("CSEUCPKDFMTJAPANESE")];
    char stringpool_str754[sizeof("UCS-2-SWAPPED")];
    char stringpool_str770[sizeof("TCVN5712-1:1993")];
    char stringpool_str786[sizeof("MACHEBREW")];
    char stringpool_str796[sizeof("UCS-4-SWAPPED")];
    char stringpool_str803[sizeof("BIGFIVE")];
    char stringpool_str810[sizeof("KO_KR.JOHAP92")];
    char stringpool_str814[sizeof("BIG-FIVE")];
    char stringpool_str872[sizeof("BIG5-HKSCS:2001")];
    char stringpool_str876[sizeof("BIG5-HKSCS:2008")];
    char stringpool_str883[sizeof("BIG5-HKSCS:1999")];
    char stringpool_str919[sizeof("BIG5-HKSCS:2004")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "646",
    "866",
    "CN",
    "CP866",
    "CP1251",
    "CP1256",
    "862",
    "CP1255",
    "CP862",
    "CP1258",
    "CP1252",
    "C99",
    "CP819",
    "5601",
    "ISO8859-1",
    "ISO8859-11",
    "ISO8859-6",
    "ISO8859-16",
    "ISO8859-5",
    "ISO8859-15",
    "R8",
    "ISO8859-8",
    "CP50221",
    "ISO8859-2",
    "ISO-8859-1",
    "ISO-8859-11",
    "ISO-8859-6",
    "ISO-8859-16",
    "ISO-8859-5",
    "ISO-8859-15",
    "HZ",
    "ISO-8859-8",
    "ISO-8859-2",
    "ISO8859-9",
    "850",
    "ASCII",
    "CP850",
    "ISO-IR-6",
    "CP1250",
    "ISO-8859-9",
    "ISO-IR-166",
    "ISO-IR-165",
    "CP950",
    "ISO-IR-126",
    "UHC",
    "ISO-IR-58",
    "CP1131",
    "CP1361",
    "ISO-IR-226",
    "ISO646-CN",
    "CP949",
    "MAC",
    "ISO-2022-CN",
    "CP936",
    "EUCCN",
    "ISO-IR-159",
    "ISO-2022-CN-EXT",
    "IBM866",
    "ISO8859-10",
    "ISO-IR-101",
    "CP932",
    "CP154",
    "ISO-IR-199",
    "EUC-CN",
    "IBM862",
    "CP1254",
    "ISO-8859-10",
    "ISO_8859-1",
    "ISO_8859-11",
    "ISO_8859-6",
    "ISO_8859-16",
    "ISO_8859-5",
    "ISO_8859-15",
    "IBM819",
    "ISO_8859-16:2001",
    "ISO_8859-8",
    "ISO_8859-2",
    "ISO-IR-109",
    "ISO_8859-15:1998",
    "ISO-IR-148",
    "ISO-IR-110",
    "RK1048",
    "ISO_8859-9",
    "ISO8859-4",
    "ISO8859-14",
    "L1",
    "L6",
    "L5",
    "ISO-IR-149",
    "L8",
    "L2",
    "CSASCII",
    "KOI8-T",
    "ISO-8859-4",
    "ISO-8859-14",
    "CSISO2022CN",
    "US",
    "ISO_8859-10:1992",
    "TIS620",
    "ISO-IR-138",
    "TIS620.2529-1",
    "IBM850",
    "LATIN1",
    "ISO-IR-100",
    "LATIN6",
    "ANSI-1251",
    "LATIN5",
    "CP1253",
    "TIS-620",
    "ISO-IR-14",
    "LATIN8",
    "LATIN2",
    "ISO_8859-14:1998",
    "CSUNICODE11",
    "ISO_8859-10",
    "UCS-2",
    "MS936",
    "UNICODE-1-1",
    "ELOT_928",
    "L4",
    "GB2312",
    "ISO8859-3",
    "ISO8859-13",
    "LATIN-9",
    "ISO-10646-UCS-2",
    "TIS620-0",
    "X0212",
    "L10",
    "ISO-8859-3",
    "ISO-8859-13",
    "CSKOI8R",
    "CSKZ1048",
    "ISO_8859-4",
    "ISO_8859-14",
    "ROMAN8",
    "KZ-1048",
    "KOI8-R",
    "L3",
    "ISO-IR-144",
    "X0201",
    "MACTHAI",
    "LATIN10",
    "KSC_5601",
    "X0208",
    "SJIS",
    "US-ASCII",
    "CP1133",
    "ISO-10646-UCS-4",
    "ISO-CELTIC",
    "CSUNICODE",
    "ECMA-118",
    "ISO-IR-179",
    "MS-ANSI",
    "PT154",
    "ARMSCII-8",
    "CSUCS4",
    "LATIN4",
    "ISO-IR-203",
    "CP874",
    "TCVN",
    "UTF-16",
    "UCS-4",
    "ISO_8859-3",
    "ISO_8859-13",
    "UTF-8",
    "GB_1988-80",
    "GB18030",
    "ISO-2022-KR",
    "EUCKR",
    "BIG5",
    "CSIBM866",
    "CSBIG5",
    "HP-ROMAN8",
    "KOI8-U",
    "EUC-KR",
    "CNS11643",
    "BIG-5",
    "MACCROATIAN",
    "CN-BIG5",
    "TIS620.2533-1",
    "L7",
    "ISO646-US",
    "MACINTOSH",
    "MACROMAN",
    "CSISOLATIN1",
    "CSISOLATIN6",
    "ARABIC",
    "CSISOLATIN5",
    "KOREAN",
    "CHINESE",
    "LATIN3",
    "CSISOLATINCYRILLIC",
    "CSISOLATIN2",
    "VISCII",
    "GBK",
    "CSVISCII",
    "MS-EE",
    "CP1257",
    "TIS620.2533-0",
    "KS_C_5601-1989",
    "KOI8-RU",
    "CSISO2022KR",
    "CYRILLIC",
    "CSUNICODE11UTF7",
    "VISCII1.1-1",
    "GB_2312-80",
    "ECMA-114",
    "UNICODE-1-1-UTF-7",
    "UTF-32",
    "ISO8859-7",
    "CSEUCKR",
    "ASMO-708",
    "ISO-8859-7",
    "JP",
    "GREEK8",
    "CSMACINTOSH",
    "JIS0208",
    "TIS620.2533",
    "CSGB2312",
    "CSISOLATINARABIC",
    "PCK",
    "STRK1048-2002",
    "EUCTW",
    "ISO-IR-57",
    "ISO-IR-157",
    "ISO-IR-87",
    "ISO-IR-127",
    "MACICELAND",
    "EUC-TW",
    "CP367",
    "UNICODELITTLE",
    "GEORGIAN-ACADEMY",
    "CSKSC56011987",
    "CSISOLATIN4",
    "ISO_8859-5:1988",
    "PTCP154",
    "ISO_8859-8:1988",
    "WINDOWS-1251",
    "WINDOWS-1256",
    "WINDOWS-1255",
    "WINDOWS-1258",
    "WINDOWS-1252",
    "ISO_646.IRV:1991",
    "CSPTCP154",
    "ISO_8859-9:1989",
    "MACROMANIA",
    "ISO_8859-7",
    "CSHPROMAN8",
    "CN-GB-ISOIR165",
    "CSISO159JISX02121990",
    "JIS_C6220-1969-RO",
    "MACCYRILLIC",
    "CSISO14JISC6220RO",
    "TCVN5712-1",
    "MS-CYRL",
    "TCVN-5712",
    "WINDOWS-1250",
    "ISO-2022-JP-1",
    "MACARABIC",
    "ISO-2022-JP-2",
    "HZ-GB-2312",
    "ISO_8859-4:1988",
    "MS-TURK",
    "WINDOWS-1254",
    "CSEUCTW",
    "CSISOLATIN3",
    "UCS-2LE",
    "UCS-2-INTERNAL",
    "CN-GB",
    "GREEK",
    "KS_C_5601-1987",
    "LATIN7",
    "JIS_C6226-1983",
    "ISO_8859-3:1988",
    "IBM367",
    "CSISO58GB231280",
    "WINDOWS-1253",
    "IBM-CP1133",
    "WINDOWS-936",
    "CYRILLIC-ASIAN",
    "MS-HEBR",
    "UCS-2BE",
    "CSISO2022JP2",
    "UCS-4LE",
    "UCS-4-INTERNAL",
    "CSISOLATINHEBREW",
    "CSISOLATINGREEK",
    "ISO-2022-JP-MS",
    "EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",
    "MULELAO-1",
    "MACTURKISH",
    "UNICODEBIG",
    "CSISO57GB1988",
    "CSPC862LATINHEBREW",
    "ANSI_X3.4-1986",
    "UCS-4BE",
    "ANSI_X3.4-1968",
    "MACUKRAINE",
    "UTF-16LE",
    "ISO_8859-1:1987",
    "ISO_8859-6:1987",
    "ISO_8859-2:1987",
    "MS_KANJI",
    "WINDOWS-1257",
    "JISX0201-1976",
    "UTF-7",
    "GB18030:2022",
    "JAVA",
    "ISO646-JP",
    "MACCENTRALEUROPE",
    "ISO-2022-JP",
    "UTF-16BE",
    "EUCJP",
    "GB18030:2005",
    "JIS_X0212",
    "EUC-JP",
    "MACGREEK",
    "MS-GREEK",
    "JIS_X0201",
    "JIS_X0208",
    "GEORGIAN-PS",
    "MS-ARAB",
    "JIS_X0212.1990-0",
    "ISO_8859-7:2003",
    "UTF-32LE",
    "JIS_X0212-1990",
    "SHIFT-JIS",
    "CSISO2022JP",
    "HEBREW",
    "WINDOWS-874",
    "CSPC850MULTILINGUAL",
    "NEXTSTEP",
    "JIS_X0208-1990",
    "UTF-32BE",
    "BIG5HKSCS",
    "CSSHIFTJIS",
    "JOHAB",
    "BIG5-HKSCS",
    "SHIFT_JIS",
    "ISO_8859-7:1987",
    "JIS_X0208-1983",
    "CSHALFWIDTHKATAKANA",
    "CSISO87JISX0208",
    "WINBALTRIM",
    "CSEUCPKDFMTJAPANESE",
    "UCS-2-SWAPPED",
    "TCVN5712-1:1993",
    "MACHEBREW",
    "UCS-4-SWAPPED",
    "BIGFIVE",
    "KO_KR.JOHAP92",
    "BIG-FIVE",
    "BIG5-HKSCS:2001",
    "BIG5-HKSCS:2008",
    "BIG5-HKSCS:1999",
    "BIG5-HKSCS:2004"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 23 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str6, ei_ascii},
    {-1}, {-1},
#line 209 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str9, ei_cp866},
    {-1},
#line 291 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str11, ei_iso646_cn},
    {-1},
#line 207 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str13, ei_cp866},
#line 175 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str14, ei_cp1251},
    {-1},
#line 191 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str16, ei_cp1256},
#line 205 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str17, ei_cp862},
#line 188 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str18, ei_cp1255},
    {-1}, {-1},
#line 203 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str21, ei_cp862},
#line 197 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str22, ei_cp1258},
    {-1},
#line 179 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str24, ei_cp1252},
    {-1},
#line 52 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str26, ei_c99},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 58 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str32, ei_iso8859_1},
    {-1}, {-1},
#line 360 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str35, ei_euc_kr},
    {-1}, {-1}, {-1}, {-1},
#line 63 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str40, ei_iso8859_1},
#line 140 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str41, ei_iso8859_11},
#line 103 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str42, ei_iso8859_6},
#line 167 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str43, ei_iso8859_16},
#line 94 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str44, ei_iso8859_5},
#line 160 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str45, ei_iso8859_15},
    {-1},
#line 229 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str47, ei_hp_roman8},
#line 121 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str48, ei_iso8859_8},
#line 321 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str49, ei_iso2022_jpms},
#line 71 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str50, ei_iso8859_2},
#line 54 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str51, ei_iso8859_1},
#line 138 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str52, ei_iso8859_11},
#line 95 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str53, ei_iso8859_6},
#line 161 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str54, ei_iso8859_16},
#line 88 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str55, ei_iso8859_5},
#line 155 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str56, ei_iso8859_15},
    {-1},
#line 338 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str58, ei_hz},
#line 115 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str59, ei_iso8859_8},
    {-1},
#line 64 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str61, ei_iso8859_2},
#line 129 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str62, ei_iso8859_9},
    {-1}, {-1},
#line 201 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str65, ei_cp850},
#line 13 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str66, ei_ascii},
    {-1}, {-1}, {-1},
#line 199 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str70, ei_cp850},
#line 16 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str71, ei_ascii},
#line 172 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str72, ei_cp1250},
#line 122 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str73, ei_iso8859_9},
#line 254 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str74, ei_tis620},
    {-1},
#line 296 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str76, ei_isoir165},
#line 350 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str77, ei_cp950},
#line 108 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str78, ei_iso8859_7},
#line 362 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str79, ei_cp949},
#line 294 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str80, ei_gb2312},
#line 211 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str81, ei_cp1131},
#line 364 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str82, ei_johab},
#line 164 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str83, ei_iso8859_16},
    {-1},
#line 289 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str85, ei_iso646_cn},
#line 361 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str86, ei_cp949},
    {-1}, {-1}, {-1},
#line 214 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str90, ei_mac_roman},
    {-1},
#line 335 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str92, ei_iso2022_cn},
#line 329 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str93, ei_cp936},
#line 323 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str94, ei_euc_cn},
#line 286 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str95, ei_jisx0212},
#line 337 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str96, ei_iso2022_cn_ext},
    {-1},
#line 208 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str98, ei_cp866},
#line 137 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str99, ei_iso8859_10},
#line 67 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str100, ei_iso8859_2},
#line 314 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str101, ei_cp932},
#line 238 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str102, ei_pt154},
    {-1},
#line 150 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str104, ei_iso8859_14},
#line 322 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str105, ei_euc_cn},
#line 204 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str106, ei_cp862},
    {-1},
#line 185 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str108, ei_cp1254},
    {-1},
#line 130 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str110, ei_iso8859_10},
#line 55 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str111, ei_iso8859_1},
#line 139 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str112, ei_iso8859_11},
#line 96 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str113, ei_iso8859_6},
#line 162 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str114, ei_iso8859_16},
#line 89 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str115, ei_iso8859_5},
#line 156 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str116, ei_iso8859_15},
#line 59 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str117, ei_iso8859_1},
#line 163 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str118, ei_iso8859_16},
#line 116 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str119, ei_iso8859_8},
    {-1},
#line 65 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str121, ei_iso8859_2},
#line 75 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str122, ei_iso8859_3},
#line 157 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str123, ei_iso8859_15},
    {-1}, {-1},
#line 125 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str126, ei_iso8859_9},
    {-1}, {-1},
#line 83 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str129, ei_iso8859_4},
    {-1},
#line 241 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str131, ei_rk1048},
    {-1},
#line 123 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str133, ei_iso8859_9},
#line 87 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str134, ei_iso8859_4},
#line 154 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str135, ei_iso8859_14},
    {-1},
#line 61 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str137, ei_iso8859_1},
#line 135 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str138, ei_iso8859_10},
#line 127 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str139, ei_iso8859_9},
#line 301 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str140, ei_ksc5601},
#line 152 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str141, ei_iso8859_14},
#line 69 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str142, ei_iso8859_2},
#line 22 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str143, ei_ascii},
#line 235 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str144, ei_koi8_t},
#line 80 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str145, ei_iso8859_4},
#line 147 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str146, ei_iso8859_14},
#line 336 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str147, ei_iso2022_cn},
    {-1}, {-1},
#line 21 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str150, ei_ascii},
#line 132 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str151, ei_iso8859_10},
#line 249 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str152, ei_tis620},
#line 118 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str153, ei_iso8859_8},
#line 251 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str154, ei_tis620},
#line 200 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str155, ei_cp850},
    {-1},
#line 60 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str157, ei_iso8859_1},
#line 57 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str158, ei_iso8859_1},
#line 134 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str159, ei_iso8859_10},
#line 178 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str160, ei_cp1251},
#line 126 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str161, ei_iso8859_9},
#line 182 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str162, ei_cp1253},
#line 248 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163, ei_tis620},
#line 267 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str164, ei_iso646_jp},
#line 151 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str165, ei_iso8859_14},
    {-1},
#line 68 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str167, ei_iso8859_2},
#line 149 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str168, ei_iso8859_14},
#line 31 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str169, ei_ucs2be},
#line 131 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str170, ei_iso8859_10},
    {-1}, {-1},
#line 25 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str173, ei_ucs2},
    {-1}, {-1}, {-1},
#line 330 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str177, ei_cp936},
    {-1}, {-1},
#line 30 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str180, ei_ucs2be},
#line 110 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str181, ei_iso8859_7},
    {-1}, {-1},
#line 85 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str184, ei_iso8859_4},
    {-1},
#line 324 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str186, ei_euc_cn},
    {-1},
#line 79 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str188, ei_iso8859_3},
#line 146 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str189, ei_iso8859_13},
#line 159 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str190, ei_iso8859_15},
    {-1},
#line 26 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str192, ei_ucs2},
#line 250 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str193, ei_tis620},
#line 285 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str194, ei_jisx0212},
    {-1},
#line 166 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str196, ei_iso8859_16},
    {-1}, {-1},
#line 72 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str199, ei_iso8859_3},
#line 141 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str200, ei_iso8859_13},
    {-1},
#line 169 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str202, ei_koi8_r},
#line 244 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str203, ei_rk1048},
    {-1},
#line 81 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str205, ei_iso8859_4},
#line 148 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str206, ei_iso8859_14},
    {-1},
#line 228 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str208, ei_hp_roman8},
#line 243 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str209, ei_rk1048},
#line 168 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str210, ei_koi8_r},
#line 77 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str211, ei_iso8859_3},
#line 91 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str212, ei_iso8859_5},
#line 272 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str213, ei_jisx0201},
    {-1},
#line 226 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str215, ei_mac_thai},
#line 165 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str216, ei_iso8859_16},
    {-1}, {-1},
#line 298 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str219, ei_ksc5601},
    {-1},
#line 278 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str221, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1},
#line 310 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str226, ei_sjis},
#line 12 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str227, ei_ascii},
    {-1},
#line 246 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str229, ei_cp1133},
    {-1}, {-1}, {-1}, {-1},
#line 35 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str234, ei_ucs4},
    {-1}, {-1},
#line 153 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str237, ei_iso8859_14},
#line 27 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str238, ei_ucs2},
    {-1}, {-1}, {-1},
#line 109 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str242, ei_iso8859_7},
#line 143 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str243, ei_iso8859_13},
#line 181 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str244, ei_cp1252},
    {-1},
#line 236 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str246, ei_pt154},
#line 232 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str247, ei_armscii_8},
    {-1}, {-1},
#line 36 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str250, ei_ucs4},
#line 84 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str251, ei_iso8859_4},
    {-1},
#line 158 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str253, ei_iso8859_15},
#line 256 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str254, ei_cp874},
#line 261 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str255, ei_tcvn},
#line 39 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str256, ei_utf16},
#line 34 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str257, ei_ucs4},
    {-1},
#line 73 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str259, ei_iso8859_3},
#line 142 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str260, ei_iso8859_13},
#line 24 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str261, ei_utf8},
#line 288 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str262, ei_iso646_cn},
#line 332 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str263, ei_gb18030_2005},
    {-1},
#line 366 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str265, ei_iso2022_kr},
    {-1},
#line 358 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str267, ei_euc_kr},
    {-1}, {-1}, {-1},
#line 344 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str271, ei_ces_big5},
    {-1},
#line 210 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str273, ei_cp866},
#line 349 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str274, ei_ces_big5},
#line 227 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str275, ei_hp_roman8},
#line 170 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str276, ei_koi8_u},
    {-1},
#line 357 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str278, ei_euc_kr},
#line 343 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str279, ei_euc_tw},
    {-1}, {-1},
#line 345 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str282, ei_ces_big5},
#line 218 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str283, ei_mac_croatian},
    {-1},
#line 348 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str285, ei_ces_big5},
#line 253 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str286, ei_tis620},
#line 145 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str287, ei_iso8859_13},
    {-1}, {-1},
#line 14 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str290, ei_ascii},
    {-1}, {-1},
#line 213 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str293, ei_mac_roman},
    {-1}, {-1},
#line 212 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str296, ei_mac_roman},
#line 62 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str297, ei_iso8859_1},
    {-1},
#line 136 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str299, ei_iso8859_10},
#line 101 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str300, ei_iso8859_6},
#line 128 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str301, ei_iso8859_9},
#line 303 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str302, ei_ksc5601},
#line 327 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str303, ei_euc_cn},
    {-1},
#line 76 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str305, ei_iso8859_3},
#line 93 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str306, ei_iso8859_5},
#line 70 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str307, ei_iso8859_2},
#line 258 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str308, ei_viscii},
    {-1},
#line 328 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str310, ei_ces_gbk},
#line 260 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str311, ei_viscii},
    {-1},
#line 174 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str313, ei_cp1250},
#line 194 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str314, ei_cp1257},
#line 252 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str315, ei_tis620},
#line 300 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str316, ei_ksc5601},
    {-1},
#line 171 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str318, ei_koi8_ru},
    {-1},
#line 367 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str320, ei_iso2022_kr},
    {-1},
#line 92 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str322, ei_iso8859_5},
#line 47 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str323, ei_utf7},
#line 259 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str324, ei_viscii},
    {-1}, {-1},
#line 293 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str327, ei_gb2312},
#line 99 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str328, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 46 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str336, ei_utf7},
    {-1},
#line 42 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str338, ei_utf32},
    {-1},
#line 114 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str340, ei_iso8859_7},
    {-1}, {-1}, {-1},
#line 359 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str344, ei_euc_kr},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 100 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str350, ei_iso8859_6},
#line 104 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str351, ei_iso8859_7},
#line 268 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str352, ei_iso646_jp},
    {-1}, {-1},
#line 111 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str355, ei_iso8859_7},
#line 215 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str356, ei_mac_roman},
#line 277 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str357, ei_jisx0208},
#line 255 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str358, ei_tis620},
    {-1}, {-1},
#line 326 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str361, ei_euc_cn},
    {-1},
#line 102 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str363, ei_iso8859_6},
#line 313 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str364, ei_sjis},
#line 242 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str365, ei_rk1048},
    {-1},
#line 341 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str367, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1},
#line 290 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str372, ei_iso646_cn},
#line 133 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str373, ei_iso8859_10},
#line 279 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str374, ei_jisx0208},
    {-1},
#line 98 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str376, ei_iso8859_6},
#line 217 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str377, ei_mac_iceland},
#line 340 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str378, ei_euc_tw},
    {-1}, {-1},
#line 19 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str381, ei_ascii},
    {-1}, {-1},
#line 33 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str384, ei_ucs2le},
#line 233 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str385, ei_georgian_academy},
    {-1}, {-1}, {-1}, {-1},
#line 302 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str390, ei_ksc5601},
#line 86 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str391, ei_iso8859_4},
    {-1},
#line 90 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str393, ei_iso8859_5},
#line 237 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str394, ei_pt154},
#line 117 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str395, ei_iso8859_8},
#line 176 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str396, ei_cp1251},
#line 192 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str397, ei_cp1256},
#line 189 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str398, ei_cp1255},
    {-1},
#line 198 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str400, ei_cp1258},
#line 180 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str401, ei_cp1252},
    {-1}, {-1},
#line 15 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str404, ei_ascii},
#line 240 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str405, ei_pt154},
    {-1}, {-1}, {-1},
#line 124 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str409, ei_iso8859_9},
#line 219 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str410, ei_mac_romania},
#line 105 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str411, ei_iso8859_7},
#line 230 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str412, ei_hp_roman8},
    {-1}, {-1},
#line 297 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str415, ei_isoir165},
#line 287 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str416, ei_jisx0212},
#line 265 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str417, ei_iso646_jp},
#line 220 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str418, ei_mac_cyrillic},
#line 269 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str419, ei_iso646_jp},
#line 263 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str420, ei_tcvn},
#line 177 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421, ei_cp1251},
    {-1}, {-1},
#line 262 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str424, ei_tcvn},
#line 173 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str425, ei_cp1250},
    {-1},
#line 317 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str427, ei_iso2022_jp1},
    {-1}, {-1},
#line 225 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str430, ei_mac_arabic},
    {-1},
#line 318 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str432, ei_iso2022_jp2},
    {-1}, {-1}, {-1},
#line 339 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str436, ei_hz},
    {-1},
#line 82 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str438, ei_iso8859_4},
    {-1}, {-1},
#line 187 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str441, ei_cp1254},
    {-1},
#line 186 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str443, ei_cp1254},
#line 342 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str444, ei_euc_tw},
#line 78 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str445, ei_iso8859_3},
    {-1},
#line 32 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str447, ei_ucs2le},
    {-1}, {-1},
#line 48 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str450, ei_ucs2internal},
#line 325 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str451, ei_euc_cn},
    {-1}, {-1},
#line 112 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str454, ei_iso8859_7},
#line 299 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str455, ei_ksc5601},
    {-1},
#line 144 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str457, ei_iso8859_13},
    {-1}, {-1},
#line 280 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str460, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1},
#line 74 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str465, ei_iso8859_3},
#line 20 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str466, ei_ascii},
#line 295 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str467, ei_gb2312},
    {-1}, {-1},
#line 183 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str470, ei_cp1253},
    {-1}, {-1},
#line 247 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str473, ei_cp1133},
    {-1},
#line 331 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str475, ei_cp936},
    {-1}, {-1}, {-1},
#line 239 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str479, ei_pt154},
    {-1},
#line 190 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str481, ei_cp1255},
    {-1}, {-1},
#line 28 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str484, ei_ucs2be},
    {-1},
#line 319 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str486, ei_iso2022_jp2},
    {-1}, {-1},
#line 38 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str489, ei_ucs4le},
    {-1}, {-1},
#line 50 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str492, ei_ucs4internal},
    {-1}, {-1}, {-1}, {-1},
#line 120 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str497, ei_iso8859_8},
    {-1}, {-1},
#line 113 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str500, ei_iso8859_7},
    {-1},
#line 320 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str502, ei_iso2022_jpms},
#line 306 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str503, ei_euc_jp},
    {-1},
#line 245 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str505, ei_mulelao},
    {-1}, {-1}, {-1},
#line 223 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str509, ei_mac_turkish},
    {-1}, {-1}, {-1},
#line 29 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str513, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1},
#line 292 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str518, ei_iso646_cn},
#line 206 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str519, ei_cp862},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 18 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str525, ei_ascii},
#line 37 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str526, ei_ucs4be},
    {-1},
#line 17 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str528, ei_ascii},
#line 221 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str529, ei_mac_ukraine},
    {-1}, {-1}, {-1}, {-1},
#line 41 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str534, ei_utf16le},
    {-1}, {-1},
#line 56 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str537, ei_iso8859_1},
#line 97 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str538, ei_iso8859_6},
    {-1}, {-1}, {-1},
#line 66 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str542, ei_iso8859_2},
    {-1},
#line 311 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str544, ei_sjis},
    {-1},
#line 195 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str546, ei_cp1257},
    {-1}, {-1}, {-1}, {-1},
#line 271 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str551, ei_jisx0201},
    {-1},
#line 45 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str553, ei_utf7},
#line 334 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str554, ei_gb18030_2022},
    {-1},
#line 53 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str556, ei_java},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 266 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str563, ei_iso646_jp},
    {-1}, {-1}, {-1}, {-1},
#line 216 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str568, ei_mac_centraleurope},
    {-1},
#line 315 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str570, ei_iso2022_jp},
#line 40 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str571, ei_utf16be},
#line 305 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str572, ei_euc_jp},
    {-1}, {-1},
#line 333 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str575, ei_gb18030_2005},
#line 282 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str576, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 304 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str583, ei_euc_jp},
#line 222 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str584, ei_mac_greek},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 184 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str593, ei_cp1253},
    {-1},
#line 270 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str595, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 274 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str603, ei_jisx0208},
    {-1},
#line 234 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str605, ei_georgian_ps},
    {-1},
#line 193 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str607, ei_cp1256},
#line 283 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str608, ei_jisx0212},
    {-1}, {-1},
#line 107 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str611, ei_iso8859_7},
#line 44 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str612, ei_utf32le},
    {-1}, {-1},
#line 284 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str615, ei_jisx0212},
    {-1}, {-1},
#line 309 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str618, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 316 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str625, ei_iso2022_jp},
#line 119 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str626, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 257 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str636, ei_cp874},
    {-1},
#line 202 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str638, ei_cp850},
    {-1}, {-1},
#line 231 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str641, ei_nextstep},
    {-1},
#line 276 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str643, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 43 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str649, ei_utf32be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 355 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str659, ei_big5hkscs2008},
    {-1}, {-1}, {-1}, {-1},
#line 312 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str664, ei_sjis},
    {-1}, {-1}, {-1},
#line 363 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str668, ei_johab},
    {-1},
#line 354 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str670, ei_big5hkscs2008},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 308 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str678, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 106 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str687, ei_iso8859_7},
#line 275 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str688, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 273 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str699, ei_jisx0201},
    {-1},
#line 281 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str701, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 196 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str745, ei_cp1257},
    {-1}, {-1}, {-1}, {-1},
#line 307 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str750, ei_euc_jp},
    {-1}, {-1}, {-1},
#line 49 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str754, ei_ucs2swapped},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 264 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str770, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 224 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str786, ei_mac_hebrew},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 51 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str796, ei_ucs4swapped},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 347 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str803, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 365 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str810, ei_johab},
    {-1}, {-1}, {-1},
#line 346 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str814, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 352 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str872, ei_big5hkscs2001},
    {-1}, {-1}, {-1},
#line 356 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str876, ei_big5hkscs2008},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 351 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str883, ei_big5hkscs1999},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 353 "lib/generated/aliases_syssolaris.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str919, ei_big5hkscs2004}
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
