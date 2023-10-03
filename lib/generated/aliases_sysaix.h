/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -Z HashPool -m 10 lib/generated/aliases_sysaix.gperf  */
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

#line 1 "lib/generated/aliases_sysaix.gperf"
struct alias { int name; unsigned int encoding_index; };

#define TOTAL_KEYWORDS 358
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 16
#define MAX_HASH_VALUE 1046
/* maximum key range = 1031, duplicates = 0 */

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
      1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047,
      1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047,
      1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047,
      1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047,
      1047, 1047, 1047, 1047, 1047,    5,  133, 1047,   97,    7,
        33,  130,   15,   17,    5,  205,   23,   25,  326, 1047,
      1047, 1047, 1047, 1047, 1047,  165,  130,   11,   17,  135,
       163,  104,   10,    6,  233,   31,    9,  154,    8,    6,
       124, 1047,    5,    5,   28,  218,    9,  204,  241,    5,
         7, 1047, 1047, 1047, 1047,    6, 1047, 1047, 1047, 1047,
      1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047,
      1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047,
      1047, 1047, 1047, 1047, 1047, 1047, 1047, 1047
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
    char stringpool_str16[sizeof("L6")];
    char stringpool_str18[sizeof("L1")];
    char stringpool_str19[sizeof("HZ")];
    char stringpool_str21[sizeof("CN")];
    char stringpool_str25[sizeof("SJIS")];
    char stringpool_str26[sizeof("L4")];
    char stringpool_str28[sizeof("L5")];
    char stringpool_str30[sizeof("R8")];
    char stringpool_str34[sizeof("L8")];
    char stringpool_str36[sizeof("866")];
    char stringpool_str44[sizeof("L2")];
    char stringpool_str49[sizeof("VISCII")];
    char stringpool_str51[sizeof("ISO-IR-6")];
    char stringpool_str54[sizeof("CP866")];
    char stringpool_str57[sizeof("TCVN")];
    char stringpool_str64[sizeof("C99")];
    char stringpool_str65[sizeof("ISO-IR-166")];
    char stringpool_str67[sizeof("LATIN6")];
    char stringpool_str68[sizeof("CSVISCII")];
    char stringpool_str70[sizeof("CP154")];
    char stringpool_str71[sizeof("LATIN1")];
    char stringpool_str76[sizeof("CYRILLIC")];
    char stringpool_str78[sizeof("ISO646-CN")];
    char stringpool_str79[sizeof("ISO-IR-14")];
    char stringpool_str81[sizeof("KOI8-R")];
    char stringpool_str84[sizeof("CP1256")];
    char stringpool_str87[sizeof("LATIN4")];
    char stringpool_str88[sizeof("CP1251")];
    char stringpool_str89[sizeof("ISO-IR-165")];
    char stringpool_str91[sizeof("LATIN5")];
    char stringpool_str92[sizeof("862")];
    char stringpool_str93[sizeof("ISO-IR-126")];
    char stringpool_str94[sizeof("CSKOI8R")];
    char stringpool_str95[sizeof("ISO-IR-144")];
    char stringpool_str96[sizeof("CP819")];
    char stringpool_str103[sizeof("LATIN8")];
    char stringpool_str104[sizeof("CP1254")];
    char stringpool_str105[sizeof("ISO-IR-58")];
    char stringpool_str106[sizeof("CP949")];
    char stringpool_str108[sizeof("CP1255")];
    char stringpool_str110[sizeof("CP862")];
    char stringpool_str111[sizeof("ISO-IR-148")];
    char stringpool_str113[sizeof("LATIN-9")];
    char stringpool_str115[sizeof("ISO-IR-149")];
    char stringpool_str117[sizeof("ISO-IR-159")];
    char stringpool_str119[sizeof("ISO-IR-226")];
    char stringpool_str120[sizeof("CP1258")];
    char stringpool_str123[sizeof("LATIN2")];
    char stringpool_str124[sizeof("ISO8859-6")];
    char stringpool_str125[sizeof("ISO-IR-199")];
    char stringpool_str127[sizeof("KOI8-T")];
    char stringpool_str128[sizeof("ISO8859-1")];
    char stringpool_str130[sizeof("ISO-8859-6")];
    char stringpool_str131[sizeof("ISO_8859-6")];
    char stringpool_str132[sizeof("ISO8859-16")];
    char stringpool_str134[sizeof("ISO-8859-1")];
    char stringpool_str135[sizeof("ISO_8859-1")];
    char stringpool_str136[sizeof("ISO8859-11")];
    char stringpool_str138[sizeof("ISO-8859-16")];
    char stringpool_str139[sizeof("ISO_8859-16")];
    char stringpool_str140[sizeof("CP1252")];
    char stringpool_str141[sizeof("L3")];
    char stringpool_str142[sizeof("ISO-8859-11")];
    char stringpool_str143[sizeof("ISO_8859-11")];
    char stringpool_str144[sizeof("ISO8859-4")];
    char stringpool_str146[sizeof("ISO_8859-16:2001")];
    char stringpool_str148[sizeof("ISO8859-5")];
    char stringpool_str150[sizeof("ISO-8859-4")];
    char stringpool_str151[sizeof("ISO_8859-4")];
    char stringpool_str152[sizeof("ISO8859-14")];
    char stringpool_str154[sizeof("ISO-8859-5")];
    char stringpool_str155[sizeof("ISO_8859-5")];
    char stringpool_str156[sizeof("ISO8859-15")];
    char stringpool_str158[sizeof("ISO-8859-14")];
    char stringpool_str159[sizeof("ISO_8859-14")];
    char stringpool_str160[sizeof("ISO8859-8")];
    char stringpool_str161[sizeof("ISO-IR-101")];
    char stringpool_str162[sizeof("ISO-8859-15")];
    char stringpool_str163[sizeof("ISO_8859-15")];
    char stringpool_str164[sizeof("ISO8859-9")];
    char stringpool_str166[sizeof("ISO-8859-8")];
    char stringpool_str167[sizeof("ISO_8859-8")];
    char stringpool_str169[sizeof("GBK")];
    char stringpool_str170[sizeof("ISO-8859-9")];
    char stringpool_str171[sizeof("ISO_8859-9")];
    char stringpool_str172[sizeof("ISO_8859-14:1998")];
    char stringpool_str173[sizeof("CP1361")];
    char stringpool_str174[sizeof("ISO_8859-15:1998")];
    char stringpool_str175[sizeof("CP1131")];
    char stringpool_str176[sizeof("RK1048")];
    char stringpool_str178[sizeof("EUCCN")];
    char stringpool_str179[sizeof("MAC")];
    char stringpool_str180[sizeof("ISO8859-2")];
    char stringpool_str181[sizeof("CP936")];
    char stringpool_str183[sizeof("PT154")];
    char stringpool_str184[sizeof("EUC-CN")];
    char stringpool_str186[sizeof("ISO-8859-2")];
    char stringpool_str187[sizeof("ISO_8859-2")];
    char stringpool_str189[sizeof("KSC_5601")];
    char stringpool_str192[sizeof("EUCKR")];
    char stringpool_str197[sizeof("ISO-IR-109")];
    char stringpool_str198[sizeof("EUC-KR")];
    char stringpool_str199[sizeof("ASCII")];
    char stringpool_str204[sizeof("IBM866")];
    char stringpool_str205[sizeof("MS-CYRL")];
    char stringpool_str206[sizeof("L10")];
    char stringpool_str208[sizeof("KZ-1048")];
    char stringpool_str212[sizeof("CP50221")];
    char stringpool_str214[sizeof("VISCII1.1-1")];
    char stringpool_str216[sizeof("L7")];
    char stringpool_str217[sizeof("CSASCII")];
    char stringpool_str219[sizeof("ISO_646.IRV:1991")];
    char stringpool_str220[sizeof("850")];
    char stringpool_str222[sizeof("CSKZ1048")];
    char stringpool_str225[sizeof("US")];
    char stringpool_str226[sizeof("ISO-IR-138")];
    char stringpool_str231[sizeof("KS_C_5601-1989")];
    char stringpool_str237[sizeof("CP932")];
    char stringpool_str238[sizeof("ISO-CELTIC")];
    char stringpool_str243[sizeof("UHC")];
    char stringpool_str244[sizeof("IBM-921")];
    char stringpool_str246[sizeof("IBM819")];
    char stringpool_str247[sizeof("MACINTOSH")];
    char stringpool_str249[sizeof("MACCYRILLIC")];
    char stringpool_str250[sizeof("CP850")];
    char stringpool_str251[sizeof("ISO-IR-110")];
    char stringpool_str252[sizeof("CP950")];
    char stringpool_str254[sizeof("CYRILLIC-ASIAN")];
    char stringpool_str256[sizeof("ISO-2022-CN")];
    char stringpool_str259[sizeof("LATIN10")];
    char stringpool_str260[sizeof("IBM862")];
    char stringpool_str262[sizeof("CSISO2022CN")];
    char stringpool_str263[sizeof("UCS-4")];
    char stringpool_str264[sizeof("ISO_8859-10:1992")];
    char stringpool_str265[sizeof("CSISOLATIN6")];
    char stringpool_str268[sizeof("CP1250")];
    char stringpool_str269[sizeof("CSISOLATIN1")];
    char stringpool_str270[sizeof("ISO-2022-KR")];
    char stringpool_str271[sizeof("TIS620")];
    char stringpool_str272[sizeof("BIG5")];
    char stringpool_str274[sizeof("CP874")];
    char stringpool_str276[sizeof("CSISO2022KR")];
    char stringpool_str277[sizeof("TIS-620")];
    char stringpool_str278[sizeof("BIG-5")];
    char stringpool_str279[sizeof("ISO646-US")];
    char stringpool_str280[sizeof("ISO-2022-CN-EXT")];
    char stringpool_str281[sizeof("CSUCS4")];
    char stringpool_str284[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str285[sizeof("CSISOLATIN4")];
    char stringpool_str287[sizeof("ELOT_928")];
    char stringpool_str289[sizeof("CSISOLATIN5")];
    char stringpool_str291[sizeof("CSBIG5")];
    char stringpool_str296[sizeof("IBM-1252")];
    char stringpool_str297[sizeof("CN-BIG5")];
    char stringpool_str299[sizeof("UCS-2")];
    char stringpool_str305[sizeof("ISO-IR-179")];
    char stringpool_str314[sizeof("CN-GB-ISOIR165")];
    char stringpool_str316[sizeof("ISO8859-10")];
    char stringpool_str317[sizeof("LATIN3")];
    char stringpool_str320[sizeof("PTCP154")];
    char stringpool_str321[sizeof("CSISOLATIN2")];
    char stringpool_str322[sizeof("ISO-8859-10")];
    char stringpool_str323[sizeof("ISO_8859-10")];
    char stringpool_str324[sizeof("MS936")];
    char stringpool_str327[sizeof("BIG5HKSCS")];
    char stringpool_str328[sizeof("CSISO14JISC6220RO")];
    char stringpool_str331[sizeof("IBM-1131")];
    char stringpool_str333[sizeof("BIG5-HKSCS")];
    char stringpool_str334[sizeof("CP1253")];
    char stringpool_str336[sizeof("TCVN5712-1")];
    char stringpool_str341[sizeof("ISO-IR-100")];
    char stringpool_str346[sizeof("GB2312")];
    char stringpool_str347[sizeof("CSIBM866")];
    char stringpool_str352[sizeof("X0212")];
    char stringpool_str354[sizeof("TCVN-5712")];
    char stringpool_str356[sizeof("MS-ANSI")];
    char stringpool_str358[sizeof("KOREAN")];
    char stringpool_str359[sizeof("JP")];
    char stringpool_str361[sizeof("CSPTCP154")];
    char stringpool_str364[sizeof("STRK1048-2002")];
    char stringpool_str374[sizeof("ISO8859-3")];
    char stringpool_str375[sizeof("TIS620-0")];
    char stringpool_str380[sizeof("ISO-8859-3")];
    char stringpool_str381[sizeof("ISO_8859-3")];
    char stringpool_str382[sizeof("ISO8859-13")];
    char stringpool_str384[sizeof("ROMAN8")];
    char stringpool_str385[sizeof("CN-GB")];
    char stringpool_str387[sizeof("MACTHAI")];
    char stringpool_str388[sizeof("ISO-8859-13")];
    char stringpool_str389[sizeof("ISO_8859-13")];
    char stringpool_str390[sizeof("X0201")];
    char stringpool_str393[sizeof("IBM-932")];
    char stringpool_str394[sizeof("CSISOLATINGREEK")];
    char stringpool_str399[sizeof("ISO-10646-UCS-4")];
    char stringpool_str400[sizeof("IBM850")];
    char stringpool_str406[sizeof("IBM-850")];
    char stringpool_str407[sizeof("ARMSCII-8")];
    char stringpool_str408[sizeof("HP-ROMAN8")];
    char stringpool_str409[sizeof("UTF-16")];
    char stringpool_str411[sizeof("KS_C_5601-1987")];
    char stringpool_str417[sizeof("ISO-10646-UCS-2")];
    char stringpool_str420[sizeof("GB_1988-80")];
    char stringpool_str421[sizeof("CP1133")];
    char stringpool_str422[sizeof("X0208")];
    char stringpool_str423[sizeof("CSEUCKR")];
    char stringpool_str425[sizeof("CSMACINTOSH")];
    char stringpool_str429[sizeof("TIS620.2529-1")];
    char stringpool_str430[sizeof("US-ASCII")];
    char stringpool_str433[sizeof("ISO-IR-203")];
    char stringpool_str434[sizeof("CSKSC56011987")];
    char stringpool_str435[sizeof("UNICODE-1-1")];
    char stringpool_str436[sizeof("CSISOLATINARABIC")];
    char stringpool_str437[sizeof("UTF-8")];
    char stringpool_str438[sizeof("CSISO159JISX02121990")];
    char stringpool_str441[sizeof("GREEK")];
    char stringpool_str442[sizeof("CHINESE")];
    char stringpool_str444[sizeof("CSUNICODE11")];
    char stringpool_str451[sizeof("MS-HEBR")];
    char stringpool_str453[sizeof("UCS-4-INTERNAL")];
    char stringpool_str457[sizeof("GREEK8")];
    char stringpool_str458[sizeof("JIS_C6220-1969-RO")];
    char stringpool_str465[sizeof("SHIFT-JIS")];
    char stringpool_str466[sizeof("SHIFT_JIS")];
    char stringpool_str467[sizeof("LATIN7")];
    char stringpool_str469[sizeof("ISO-IR-57")];
    char stringpool_str471[sizeof("UCS-2-INTERNAL")];
    char stringpool_str474[sizeof("CSISOLATINHEBREW")];
    char stringpool_str475[sizeof("ISO-IR-87")];
    char stringpool_str477[sizeof("ISO-IR-157")];
    char stringpool_str479[sizeof("MS-TURK")];
    char stringpool_str482[sizeof("CSSHIFTJIS")];
    char stringpool_str484[sizeof("CP1257")];
    char stringpool_str487[sizeof("JIS_C6226-1983")];
    char stringpool_str488[sizeof("MACTURKISH")];
    char stringpool_str489[sizeof("CSGB2312")];
    char stringpool_str490[sizeof("ISO_8859-4:1988")];
    char stringpool_str492[sizeof("ISO_8859-5:1988")];
    char stringpool_str493[sizeof("ISO-IR-127")];
    char stringpool_str494[sizeof("ARABIC")];
    char stringpool_str498[sizeof("ISO_8859-8:1988")];
    char stringpool_str500[sizeof("HZ-GB-2312")];
    char stringpool_str502[sizeof("ISO_8859-9:1989")];
    char stringpool_str506[sizeof("MULELAO-1")];
    char stringpool_str507[sizeof("KOI8-U")];
    char stringpool_str511[sizeof("ECMA-114")];
    char stringpool_str513[sizeof("KOI8-RU")];
    char stringpool_str515[sizeof("CSISOLATIN3")];
    char stringpool_str518[sizeof("JIS0208")];
    char stringpool_str519[sizeof("MACROMAN")];
    char stringpool_str523[sizeof("WINDOWS-1256")];
    char stringpool_str524[sizeof("ISO8859-7")];
    char stringpool_str525[sizeof("WINDOWS-1251")];
    char stringpool_str527[sizeof("ECMA-118")];
    char stringpool_str529[sizeof("UCS-4LE")];
    char stringpool_str530[sizeof("ISO-8859-7")];
    char stringpool_str531[sizeof("ISO_8859-7")];
    char stringpool_str532[sizeof("ISO646-JP")];
    char stringpool_str533[sizeof("WINDOWS-1254")];
    char stringpool_str535[sizeof("WINDOWS-1255")];
    char stringpool_str539[sizeof("CSHPROMAN8")];
    char stringpool_str541[sizeof("WINDOWS-1258")];
    char stringpool_str543[sizeof("MACICELAND")];
    char stringpool_str545[sizeof("GB_2312-80")];
    char stringpool_str547[sizeof("UCS-2LE")];
    char stringpool_str548[sizeof("GEORGIAN-PS")];
    char stringpool_str551[sizeof("WINDOWS-1252")];
    char stringpool_str552[sizeof("CSISO57GB1988")];
    char stringpool_str556[sizeof("CSUNICODE")];
    char stringpool_str561[sizeof("CP367")];
    char stringpool_str562[sizeof("GB18030")];
    char stringpool_str565[sizeof("IBM-EUCCN")];
    char stringpool_str569[sizeof("MS-EE")];
    char stringpool_str576[sizeof("JAVA")];
    char stringpool_str577[sizeof("CSISO58GB231280")];
    char stringpool_str578[sizeof("MACCROATIAN")];
    char stringpool_str579[sizeof("IBM-EUCKR")];
    char stringpool_str587[sizeof("EUCTW")];
    char stringpool_str588[sizeof("UTF-32")];
    char stringpool_str593[sizeof("EUC-TW")];
    char stringpool_str594[sizeof("ISO-2022-JP-MS")];
    char stringpool_str595[sizeof("ISO-2022-JP-1")];
    char stringpool_str600[sizeof("GEORGIAN-ACADEMY")];
    char stringpool_str605[sizeof("ISO_8859-3:1988")];
    char stringpool_str608[sizeof("MS-GREEK")];
    char stringpool_str612[sizeof("UNICODELITTLE")];
    char stringpool_str614[sizeof("MACGREEK")];
    char stringpool_str615[sizeof("WINDOWS-1250")];
    char stringpool_str617[sizeof("MS_KANJI")];
    char stringpool_str621[sizeof("ISO-2022-JP-2")];
    char stringpool_str625[sizeof("WINDOWS-936")];
    char stringpool_str626[sizeof("CSISO2022JP2")];
    char stringpool_str631[sizeof("TIS620.2533-1")];
    char stringpool_str632[sizeof("EUCJP")];
    char stringpool_str637[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str638[sizeof("EUC-JP")];
    char stringpool_str639[sizeof("UNICODE-1-1-UTF-7")];
    char stringpool_str646[sizeof("CSUNICODE11UTF7")];
    char stringpool_str648[sizeof("WINDOWS-1253")];
    char stringpool_str650[sizeof("UCS-4BE")];
    char stringpool_str662[sizeof("ISO_8859-6:1987")];
    char stringpool_str664[sizeof("ISO_8859-1:1987")];
    char stringpool_str666[sizeof("BIG5-HKSCS:2001")];
    char stringpool_str667[sizeof("MACARABIC")];
    char stringpool_str668[sizeof("UCS-2BE")];
    char stringpool_str673[sizeof("JOHAB")];
    char stringpool_str674[sizeof("BIG5-HKSCS:2004")];
    char stringpool_str682[sizeof("BIG5-HKSCS:2008")];
    char stringpool_str684[sizeof("BIG5-HKSCS:1999")];
    char stringpool_str685[sizeof("UTF-16LE")];
    char stringpool_str686[sizeof("ASMO-708")];
    char stringpool_str689[sizeof("BIGFIVE")];
    char stringpool_str690[sizeof("ISO_8859-2:1987")];
    char stringpool_str694[sizeof("HEBREW")];
    char stringpool_str695[sizeof("BIG-FIVE")];
    char stringpool_str697[sizeof("JIS_X0212")];
    char stringpool_str701[sizeof("NEXTSTEP")];
    char stringpool_str710[sizeof("ISO-2022-JP")];
    char stringpool_str711[sizeof("IBM367")];
    char stringpool_str714[sizeof("IBM-CP1133")];
    char stringpool_str716[sizeof("CSISO2022JP")];
    char stringpool_str718[sizeof("WINDOWS-874")];
    char stringpool_str720[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str721[sizeof("TIS620.2533-0")];
    char stringpool_str723[sizeof("WINDOWS-1257")];
    char stringpool_str732[sizeof("ANSI_X3.4-1986")];
    char stringpool_str735[sizeof("JIS_X0201")];
    char stringpool_str747[sizeof("UNICODEBIG")];
    char stringpool_str750[sizeof("ANSI_X3.4-1968")];
    char stringpool_str761[sizeof("MS-ARAB")];
    char stringpool_str767[sizeof("JIS_X0208")];
    char stringpool_str768[sizeof("JISX0201-1976")];
    char stringpool_str778[sizeof("JIS_X0212-1990")];
    char stringpool_str779[sizeof("CSISO87JISX0208")];
    char stringpool_str787[sizeof("ISO_8859-7:2003")];
    char stringpool_str790[sizeof("TCVN5712-1:1993")];
    char stringpool_str801[sizeof("UTF-7")];
    char stringpool_str806[sizeof("UTF-16BE")];
    char stringpool_str807[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str812[sizeof("MACCENTRALEUROPE")];
    char stringpool_str818[sizeof("CSEUCTW")];
    char stringpool_str836[sizeof("UTF-32LE")];
    char stringpool_str849[sizeof("MACROMANIA")];
    char stringpool_str858[sizeof("JIS_X0208-1990")];
    char stringpool_str862[sizeof("ISO_8859-7:1987")];
    char stringpool_str873[sizeof("WINBALTRIM")];
    char stringpool_str878[sizeof("MACUKRAINE")];
    char stringpool_str887[sizeof("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE")];
    char stringpool_str891[sizeof("JIS_X0208-1983")];
    char stringpool_str900[sizeof("UCS-4-SWAPPED")];
    char stringpool_str908[sizeof("JIS_X0212.1990-0")];
    char stringpool_str918[sizeof("UCS-2-SWAPPED")];
    char stringpool_str957[sizeof("UTF-32BE")];
    char stringpool_str974[sizeof("IBM-EUCTW")];
    char stringpool_str992[sizeof("GB18030:2022")];
    char stringpool_str997[sizeof("MACHEBREW")];
    char stringpool_str1019[sizeof("IBM-EUCJP")];
    char stringpool_str1040[sizeof("GB18030:2005")];
    char stringpool_str1046[sizeof("CSEUCPKDFMTJAPANESE")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "L6",
    "L1",
    "HZ",
    "CN",
    "SJIS",
    "L4",
    "L5",
    "R8",
    "L8",
    "866",
    "L2",
    "VISCII",
    "ISO-IR-6",
    "CP866",
    "TCVN",
    "C99",
    "ISO-IR-166",
    "LATIN6",
    "CSVISCII",
    "CP154",
    "LATIN1",
    "CYRILLIC",
    "ISO646-CN",
    "ISO-IR-14",
    "KOI8-R",
    "CP1256",
    "LATIN4",
    "CP1251",
    "ISO-IR-165",
    "LATIN5",
    "862",
    "ISO-IR-126",
    "CSKOI8R",
    "ISO-IR-144",
    "CP819",
    "LATIN8",
    "CP1254",
    "ISO-IR-58",
    "CP949",
    "CP1255",
    "CP862",
    "ISO-IR-148",
    "LATIN-9",
    "ISO-IR-149",
    "ISO-IR-159",
    "ISO-IR-226",
    "CP1258",
    "LATIN2",
    "ISO8859-6",
    "ISO-IR-199",
    "KOI8-T",
    "ISO8859-1",
    "ISO-8859-6",
    "ISO_8859-6",
    "ISO8859-16",
    "ISO-8859-1",
    "ISO_8859-1",
    "ISO8859-11",
    "ISO-8859-16",
    "ISO_8859-16",
    "CP1252",
    "L3",
    "ISO-8859-11",
    "ISO_8859-11",
    "ISO8859-4",
    "ISO_8859-16:2001",
    "ISO8859-5",
    "ISO-8859-4",
    "ISO_8859-4",
    "ISO8859-14",
    "ISO-8859-5",
    "ISO_8859-5",
    "ISO8859-15",
    "ISO-8859-14",
    "ISO_8859-14",
    "ISO8859-8",
    "ISO-IR-101",
    "ISO-8859-15",
    "ISO_8859-15",
    "ISO8859-9",
    "ISO-8859-8",
    "ISO_8859-8",
    "GBK",
    "ISO-8859-9",
    "ISO_8859-9",
    "ISO_8859-14:1998",
    "CP1361",
    "ISO_8859-15:1998",
    "CP1131",
    "RK1048",
    "EUCCN",
    "MAC",
    "ISO8859-2",
    "CP936",
    "PT154",
    "EUC-CN",
    "ISO-8859-2",
    "ISO_8859-2",
    "KSC_5601",
    "EUCKR",
    "ISO-IR-109",
    "EUC-KR",
    "ASCII",
    "IBM866",
    "MS-CYRL",
    "L10",
    "KZ-1048",
    "CP50221",
    "VISCII1.1-1",
    "L7",
    "CSASCII",
    "ISO_646.IRV:1991",
    "850",
    "CSKZ1048",
    "US",
    "ISO-IR-138",
    "KS_C_5601-1989",
    "CP932",
    "ISO-CELTIC",
    "UHC",
    "IBM-921",
    "IBM819",
    "MACINTOSH",
    "MACCYRILLIC",
    "CP850",
    "ISO-IR-110",
    "CP950",
    "CYRILLIC-ASIAN",
    "ISO-2022-CN",
    "LATIN10",
    "IBM862",
    "CSISO2022CN",
    "UCS-4",
    "ISO_8859-10:1992",
    "CSISOLATIN6",
    "CP1250",
    "CSISOLATIN1",
    "ISO-2022-KR",
    "TIS620",
    "BIG5",
    "CP874",
    "CSISO2022KR",
    "TIS-620",
    "BIG-5",
    "ISO646-US",
    "ISO-2022-CN-EXT",
    "CSUCS4",
    "CSISOLATINCYRILLIC",
    "CSISOLATIN4",
    "ELOT_928",
    "CSISOLATIN5",
    "CSBIG5",
    "IBM-1252",
    "CN-BIG5",
    "UCS-2",
    "ISO-IR-179",
    "CN-GB-ISOIR165",
    "ISO8859-10",
    "LATIN3",
    "PTCP154",
    "CSISOLATIN2",
    "ISO-8859-10",
    "ISO_8859-10",
    "MS936",
    "BIG5HKSCS",
    "CSISO14JISC6220RO",
    "IBM-1131",
    "BIG5-HKSCS",
    "CP1253",
    "TCVN5712-1",
    "ISO-IR-100",
    "GB2312",
    "CSIBM866",
    "X0212",
    "TCVN-5712",
    "MS-ANSI",
    "KOREAN",
    "JP",
    "CSPTCP154",
    "STRK1048-2002",
    "ISO8859-3",
    "TIS620-0",
    "ISO-8859-3",
    "ISO_8859-3",
    "ISO8859-13",
    "ROMAN8",
    "CN-GB",
    "MACTHAI",
    "ISO-8859-13",
    "ISO_8859-13",
    "X0201",
    "IBM-932",
    "CSISOLATINGREEK",
    "ISO-10646-UCS-4",
    "IBM850",
    "IBM-850",
    "ARMSCII-8",
    "HP-ROMAN8",
    "UTF-16",
    "KS_C_5601-1987",
    "ISO-10646-UCS-2",
    "GB_1988-80",
    "CP1133",
    "X0208",
    "CSEUCKR",
    "CSMACINTOSH",
    "TIS620.2529-1",
    "US-ASCII",
    "ISO-IR-203",
    "CSKSC56011987",
    "UNICODE-1-1",
    "CSISOLATINARABIC",
    "UTF-8",
    "CSISO159JISX02121990",
    "GREEK",
    "CHINESE",
    "CSUNICODE11",
    "MS-HEBR",
    "UCS-4-INTERNAL",
    "GREEK8",
    "JIS_C6220-1969-RO",
    "SHIFT-JIS",
    "SHIFT_JIS",
    "LATIN7",
    "ISO-IR-57",
    "UCS-2-INTERNAL",
    "CSISOLATINHEBREW",
    "ISO-IR-87",
    "ISO-IR-157",
    "MS-TURK",
    "CSSHIFTJIS",
    "CP1257",
    "JIS_C6226-1983",
    "MACTURKISH",
    "CSGB2312",
    "ISO_8859-4:1988",
    "ISO_8859-5:1988",
    "ISO-IR-127",
    "ARABIC",
    "ISO_8859-8:1988",
    "HZ-GB-2312",
    "ISO_8859-9:1989",
    "MULELAO-1",
    "KOI8-U",
    "ECMA-114",
    "KOI8-RU",
    "CSISOLATIN3",
    "JIS0208",
    "MACROMAN",
    "WINDOWS-1256",
    "ISO8859-7",
    "WINDOWS-1251",
    "ECMA-118",
    "UCS-4LE",
    "ISO-8859-7",
    "ISO_8859-7",
    "ISO646-JP",
    "WINDOWS-1254",
    "WINDOWS-1255",
    "CSHPROMAN8",
    "WINDOWS-1258",
    "MACICELAND",
    "GB_2312-80",
    "UCS-2LE",
    "GEORGIAN-PS",
    "WINDOWS-1252",
    "CSISO57GB1988",
    "CSUNICODE",
    "CP367",
    "GB18030",
    "IBM-EUCCN",
    "MS-EE",
    "JAVA",
    "CSISO58GB231280",
    "MACCROATIAN",
    "IBM-EUCKR",
    "EUCTW",
    "UTF-32",
    "EUC-TW",
    "ISO-2022-JP-MS",
    "ISO-2022-JP-1",
    "GEORGIAN-ACADEMY",
    "ISO_8859-3:1988",
    "MS-GREEK",
    "UNICODELITTLE",
    "MACGREEK",
    "WINDOWS-1250",
    "MS_KANJI",
    "ISO-2022-JP-2",
    "WINDOWS-936",
    "CSISO2022JP2",
    "TIS620.2533-1",
    "EUCJP",
    "CSPC862LATINHEBREW",
    "EUC-JP",
    "UNICODE-1-1-UTF-7",
    "CSUNICODE11UTF7",
    "WINDOWS-1253",
    "UCS-4BE",
    "ISO_8859-6:1987",
    "ISO_8859-1:1987",
    "BIG5-HKSCS:2001",
    "MACARABIC",
    "UCS-2BE",
    "JOHAB",
    "BIG5-HKSCS:2004",
    "BIG5-HKSCS:2008",
    "BIG5-HKSCS:1999",
    "UTF-16LE",
    "ASMO-708",
    "BIGFIVE",
    "ISO_8859-2:1987",
    "HEBREW",
    "BIG-FIVE",
    "JIS_X0212",
    "NEXTSTEP",
    "ISO-2022-JP",
    "IBM367",
    "IBM-CP1133",
    "CSISO2022JP",
    "WINDOWS-874",
    "CSPC850MULTILINGUAL",
    "TIS620.2533-0",
    "WINDOWS-1257",
    "ANSI_X3.4-1986",
    "JIS_X0201",
    "UNICODEBIG",
    "ANSI_X3.4-1968",
    "MS-ARAB",
    "JIS_X0208",
    "JISX0201-1976",
    "JIS_X0212-1990",
    "CSISO87JISX0208",
    "ISO_8859-7:2003",
    "TCVN5712-1:1993",
    "UTF-7",
    "UTF-16BE",
    "CSHALFWIDTHKATAKANA",
    "MACCENTRALEUROPE",
    "CSEUCTW",
    "UTF-32LE",
    "MACROMANIA",
    "JIS_X0208-1990",
    "ISO_8859-7:1987",
    "WINBALTRIM",
    "MACUKRAINE",
    "EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",
    "JIS_X0208-1983",
    "UCS-4-SWAPPED",
    "JIS_X0212.1990-0",
    "UCS-2-SWAPPED",
    "UTF-32BE",
    "IBM-EUCTW",
    "GB18030:2022",
    "MACHEBREW",
    "IBM-EUCJP",
    "GB18030:2005",
    "CSEUCPKDFMTJAPANESE"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 134 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str16, ei_iso8859_10},
    {-1},
#line 60 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str18, ei_iso8859_1},
#line 341 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str19, ei_hz},
    {-1},
#line 292 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str21, ei_iso646_cn},
    {-1}, {-1}, {-1},
#line 312 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str25, ei_sjis},
#line 84 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str26, ei_iso8859_4},
    {-1},
#line 126 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str28, ei_iso8859_9},
    {-1},
#line 231 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str30, ei_hp_roman8},
    {-1}, {-1}, {-1},
#line 152 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str34, ei_iso8859_14},
    {-1},
#line 210 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str36, ei_cp866},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 68 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str44, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1},
#line 259 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str49, ei_viscii},
    {-1},
#line 16 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str51, ei_ascii},
    {-1}, {-1},
#line 208 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str54, ei_cp866},
    {-1}, {-1},
#line 262 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str57, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 51 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str64, ei_c99},
#line 256 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str65, ei_tis620},
    {-1},
#line 133 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str67, ei_iso8859_10},
#line 261 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str68, ei_viscii},
    {-1},
#line 240 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str70, ei_pt154},
#line 59 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str71, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1},
#line 91 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str76, ei_iso8859_5},
    {-1},
#line 290 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str78, ei_iso646_cn},
#line 268 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str79, ei_iso646_jp},
    {-1},
#line 168 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str81, ei_koi8_r},
    {-1}, {-1},
#line 191 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str84, ei_cp1256},
    {-1}, {-1},
#line 83 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str87, ei_iso8859_4},
#line 175 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str88, ei_cp1251},
#line 297 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str89, ei_isoir165},
    {-1},
#line 125 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str91, ei_iso8859_9},
#line 206 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str92, ei_cp862},
#line 107 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str93, ei_iso8859_7},
#line 169 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str94, ei_koi8_r},
#line 90 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str95, ei_iso8859_5},
#line 57 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str96, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 151 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str103, ei_iso8859_14},
#line 185 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str104, ei_cp1254},
#line 295 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str105, ei_gb2312},
#line 364 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str106, ei_cp949},
    {-1},
#line 188 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str108, ei_cp1255},
    {-1},
#line 204 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str110, ei_cp862},
#line 124 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str111, ei_iso8859_9},
    {-1},
#line 159 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str113, ei_iso8859_15},
    {-1},
#line 302 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str115, ei_ksc5601},
    {-1},
#line 287 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str117, ei_jisx0212},
    {-1},
#line 164 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str119, ei_iso8859_16},
#line 197 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str120, ei_cp1258},
    {-1}, {-1},
#line 67 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str123, ei_iso8859_2},
#line 102 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str124, ei_iso8859_6},
#line 150 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str125, ei_iso8859_14},
    {-1},
#line 237 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str127, ei_koi8_t},
#line 62 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str128, ei_iso8859_1},
    {-1},
#line 94 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str130, ei_iso8859_6},
#line 95 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str131, ei_iso8859_6},
#line 167 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str132, ei_iso8859_16},
    {-1},
#line 53 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str134, ei_iso8859_1},
#line 54 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str135, ei_iso8859_1},
#line 139 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str136, ei_iso8859_11},
    {-1},
#line 161 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str138, ei_iso8859_16},
#line 162 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str139, ei_iso8859_16},
#line 178 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str140, ei_cp1252},
#line 76 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str141, ei_iso8859_3},
#line 137 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str142, ei_iso8859_11},
#line 138 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str143, ei_iso8859_11},
#line 86 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str144, ei_iso8859_4},
    {-1},
#line 163 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str146, ei_iso8859_16},
    {-1},
#line 93 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str148, ei_iso8859_5},
    {-1},
#line 79 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str150, ei_iso8859_4},
#line 80 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str151, ei_iso8859_4},
#line 154 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str152, ei_iso8859_14},
    {-1},
#line 87 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str154, ei_iso8859_5},
#line 88 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str155, ei_iso8859_5},
#line 160 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str156, ei_iso8859_15},
    {-1},
#line 147 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str158, ei_iso8859_14},
#line 148 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str159, ei_iso8859_14},
#line 120 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str160, ei_iso8859_8},
#line 66 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str161, ei_iso8859_2},
#line 155 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str162, ei_iso8859_15},
#line 156 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163, ei_iso8859_15},
#line 128 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str164, ei_iso8859_9},
    {-1},
#line 114 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str166, ei_iso8859_8},
#line 115 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str167, ei_iso8859_8},
    {-1},
#line 331 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str169, ei_ces_gbk},
#line 121 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str170, ei_iso8859_9},
#line 122 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str171, ei_iso8859_9},
#line 149 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str172, ei_iso8859_14},
#line 367 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str173, ei_johab},
#line 157 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str174, ei_iso8859_15},
#line 212 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str175, ei_cp1131},
#line 243 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str176, ei_rk1048},
    {-1},
#line 325 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str178, ei_euc_cn},
#line 216 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str179, ei_mac_roman},
#line 70 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str180, ei_iso8859_2},
#line 332 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str181, ei_cp936},
    {-1},
#line 238 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str183, ei_pt154},
#line 324 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str184, ei_euc_cn},
    {-1},
#line 63 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str186, ei_iso8859_2},
#line 64 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str187, ei_iso8859_2},
    {-1},
#line 299 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str189, ei_ksc5601},
    {-1}, {-1},
#line 361 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str192, ei_euc_kr},
    {-1}, {-1}, {-1}, {-1},
#line 74 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str197, ei_iso8859_3},
#line 360 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str198, ei_euc_kr},
#line 13 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str199, ei_ascii},
    {-1}, {-1}, {-1}, {-1},
#line 209 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str204, ei_cp866},
#line 177 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str205, ei_cp1251},
#line 166 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str206, ei_iso8859_16},
    {-1},
#line 245 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str208, ei_rk1048},
    {-1}, {-1}, {-1},
#line 323 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str212, ei_iso2022_jpms},
    {-1},
#line 260 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str214, ei_viscii},
    {-1},
#line 144 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str216, ei_iso8859_13},
#line 22 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str217, ei_ascii},
    {-1},
#line 15 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str219, ei_ascii},
#line 201 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str220, ei_cp850},
    {-1},
#line 246 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str222, ei_rk1048},
    {-1}, {-1},
#line 21 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str225, ei_ascii},
#line 117 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str226, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1},
#line 301 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str231, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 315 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str237, ei_cp932},
#line 153 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str238, ei_iso8859_14},
    {-1}, {-1}, {-1}, {-1},
#line 365 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str243, ei_cp949},
#line 146 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str244, ei_iso8859_13},
    {-1},
#line 58 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str246, ei_iso8859_1},
#line 215 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str247, ei_mac_roman},
    {-1},
#line 222 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str249, ei_mac_cyrillic},
#line 199 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str250, ei_cp850},
#line 82 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str251, ei_iso8859_4},
#line 353 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str252, ei_cp950},
    {-1},
#line 241 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str254, ei_pt154},
    {-1},
#line 338 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str256, ei_iso2022_cn},
    {-1}, {-1},
#line 165 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str259, ei_iso8859_16},
#line 205 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str260, ei_cp862},
    {-1},
#line 339 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str262, ei_iso2022_cn},
#line 33 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str263, ei_ucs4},
#line 131 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str264, ei_iso8859_10},
#line 135 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str265, ei_iso8859_10},
    {-1}, {-1},
#line 172 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str268, ei_cp1250},
#line 61 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str269, ei_iso8859_1},
#line 368 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str270, ei_iso2022_kr},
#line 251 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str271, ei_tis620},
#line 347 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str272, ei_ces_big5},
    {-1},
#line 257 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str274, ei_cp874},
    {-1},
#line 369 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str276, ei_iso2022_kr},
#line 250 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str277, ei_tis620},
#line 348 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str278, ei_ces_big5},
#line 14 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str279, ei_ascii},
#line 340 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str280, ei_iso2022_cn_ext},
#line 35 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str281, ei_ucs4},
    {-1}, {-1},
#line 92 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str284, ei_iso8859_5},
#line 85 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str285, ei_iso8859_4},
    {-1},
#line 109 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str287, ei_iso8859_7},
    {-1},
#line 127 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str289, ei_iso8859_9},
    {-1},
#line 352 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str291, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1},
#line 181 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str296, ei_cp1252},
#line 351 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str297, ei_ces_big5},
    {-1},
#line 24 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str299, ei_ucs2},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 142 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str305, ei_iso8859_13},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 298 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str314, ei_isoir165},
    {-1},
#line 136 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str316, ei_iso8859_10},
#line 75 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str317, ei_iso8859_3},
    {-1}, {-1},
#line 239 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str320, ei_pt154},
#line 69 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str321, ei_iso8859_2},
#line 129 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str322, ei_iso8859_10},
#line 130 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str323, ei_iso8859_10},
#line 333 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str324, ei_cp936},
    {-1}, {-1},
#line 358 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str327, ei_big5hkscs2008},
#line 270 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str328, ei_iso646_jp},
    {-1}, {-1},
#line 213 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str331, ei_cp1131},
    {-1},
#line 357 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str333, ei_big5hkscs2008},
#line 182 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str334, ei_cp1253},
    {-1},
#line 264 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str336, ei_tcvn},
    {-1}, {-1}, {-1}, {-1},
#line 56 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str341, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1},
#line 326 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str346, ei_euc_cn},
#line 211 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str347, ei_cp866},
    {-1}, {-1}, {-1}, {-1},
#line 286 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str352, ei_jisx0212},
    {-1},
#line 263 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str354, ei_tcvn},
    {-1},
#line 180 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str356, ei_cp1252},
    {-1},
#line 304 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str358, ei_ksc5601},
#line 269 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str359, ei_iso646_jp},
    {-1},
#line 242 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str361, ei_pt154},
    {-1}, {-1},
#line 244 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str364, ei_rk1048},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 78 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str374, ei_iso8859_3},
#line 252 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str375, ei_tis620},
    {-1}, {-1}, {-1}, {-1},
#line 71 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str380, ei_iso8859_3},
#line 72 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str381, ei_iso8859_3},
#line 145 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str382, ei_iso8859_13},
    {-1},
#line 230 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str384, ei_hp_roman8},
#line 327 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str385, ei_euc_cn},
    {-1},
#line 228 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str387, ei_mac_thai},
#line 140 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str388, ei_iso8859_13},
#line 141 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str389, ei_iso8859_13},
#line 273 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str390, ei_jisx0201},
    {-1}, {-1},
#line 316 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str393, ei_cp932},
#line 112 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str394, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1},
#line 34 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str399, ei_ucs4},
#line 200 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str400, ei_cp850},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 203 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str406, ei_cp850},
#line 234 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str407, ei_armscii_8},
#line 229 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str408, ei_hp_roman8},
#line 38 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str409, ei_utf16},
    {-1},
#line 300 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str411, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 25 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str417, ei_ucs2},
    {-1}, {-1},
#line 289 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str420, ei_iso646_cn},
#line 248 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421, ei_cp1133},
#line 279 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str422, ei_jisx0208},
#line 362 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str423, ei_euc_kr},
    {-1},
#line 217 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str425, ei_mac_roman},
    {-1}, {-1}, {-1},
#line 253 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str429, ei_tis620},
#line 12 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str430, ei_ascii},
    {-1}, {-1},
#line 158 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str433, ei_iso8859_15},
#line 303 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str434, ei_ksc5601},
#line 29 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str435, ei_ucs2be},
#line 101 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str436, ei_iso8859_6},
#line 23 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str437, ei_utf8},
#line 288 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str438, ei_jisx0212},
    {-1}, {-1},
#line 111 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str441, ei_iso8859_7},
#line 329 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str442, ei_euc_cn},
    {-1},
#line 30 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str444, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 190 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str451, ei_cp1255},
    {-1},
#line 49 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str453, ei_ucs4internal},
    {-1}, {-1}, {-1},
#line 110 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str457, ei_iso8859_7},
#line 266 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str458, ei_iso646_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 311 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str465, ei_sjis},
#line 310 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str466, ei_sjis},
#line 143 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str467, ei_iso8859_13},
    {-1},
#line 291 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str469, ei_iso646_cn},
    {-1},
#line 47 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str471, ei_ucs2internal},
    {-1}, {-1},
#line 119 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str474, ei_iso8859_8},
#line 280 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str475, ei_jisx0208},
    {-1},
#line 132 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str477, ei_iso8859_10},
    {-1},
#line 187 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str479, ei_cp1254},
    {-1}, {-1},
#line 314 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str482, ei_sjis},
    {-1},
#line 194 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str484, ei_cp1257},
    {-1}, {-1},
#line 281 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str487, ei_jisx0208},
#line 225 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str488, ei_mac_turkish},
#line 328 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str489, ei_euc_cn},
#line 81 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str490, ei_iso8859_4},
    {-1},
#line 89 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str492, ei_iso8859_5},
#line 97 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str493, ei_iso8859_6},
#line 100 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str494, ei_iso8859_6},
    {-1}, {-1}, {-1},
#line 116 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str498, ei_iso8859_8},
    {-1},
#line 342 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str500, ei_hz},
    {-1},
#line 123 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str502, ei_iso8859_9},
    {-1}, {-1}, {-1},
#line 247 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str506, ei_mulelao},
#line 170 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str507, ei_koi8_u},
    {-1}, {-1}, {-1},
#line 98 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str511, ei_iso8859_6},
    {-1},
#line 171 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str513, ei_koi8_ru},
    {-1},
#line 77 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str515, ei_iso8859_3},
    {-1}, {-1},
#line 278 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str518, ei_jisx0208},
#line 214 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str519, ei_mac_roman},
    {-1}, {-1}, {-1},
#line 192 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str523, ei_cp1256},
#line 113 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str524, ei_iso8859_7},
#line 176 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str525, ei_cp1251},
    {-1},
#line 108 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str527, ei_iso8859_7},
    {-1},
#line 37 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str529, ei_ucs4le},
#line 103 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str530, ei_iso8859_7},
#line 104 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str531, ei_iso8859_7},
#line 267 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str532, ei_iso646_jp},
#line 186 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str533, ei_cp1254},
    {-1},
#line 189 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str535, ei_cp1255},
    {-1}, {-1}, {-1},
#line 232 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str539, ei_hp_roman8},
    {-1},
#line 198 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str541, ei_cp1258},
    {-1},
#line 219 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str543, ei_mac_iceland},
    {-1},
#line 294 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str545, ei_gb2312},
    {-1},
#line 31 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str547, ei_ucs2le},
#line 236 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str548, ei_georgian_ps},
    {-1}, {-1},
#line 179 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str551, ei_cp1252},
#line 293 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str552, ei_iso646_cn},
    {-1}, {-1}, {-1},
#line 26 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str556, ei_ucs2},
    {-1}, {-1}, {-1}, {-1},
#line 19 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str561, ei_ascii},
#line 335 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str562, ei_gb18030_2005},
    {-1}, {-1},
#line 330 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str565, ei_euc_cn},
    {-1}, {-1}, {-1},
#line 174 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str569, ei_cp1250},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 52 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str576, ei_java},
#line 296 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str577, ei_gb2312},
#line 220 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str578, ei_mac_croatian},
#line 363 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str579, ei_euc_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 344 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str587, ei_euc_tw},
#line 41 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str588, ei_utf32},
    {-1}, {-1}, {-1}, {-1},
#line 343 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str593, ei_euc_tw},
#line 322 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str594, ei_iso2022_jpms},
#line 319 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str595, ei_iso2022_jp1},
    {-1}, {-1}, {-1}, {-1},
#line 235 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str600, ei_georgian_academy},
    {-1}, {-1}, {-1}, {-1},
#line 73 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str605, ei_iso8859_3},
    {-1}, {-1},
#line 184 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str608, ei_cp1253},
    {-1}, {-1}, {-1},
#line 32 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str612, ei_ucs2le},
    {-1},
#line 224 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str614, ei_mac_greek},
#line 173 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str615, ei_cp1250},
    {-1},
#line 313 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str617, ei_sjis},
    {-1}, {-1}, {-1},
#line 320 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str621, ei_iso2022_jp2},
    {-1}, {-1}, {-1},
#line 334 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str625, ei_cp936},
#line 321 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str626, ei_iso2022_jp2},
    {-1}, {-1}, {-1}, {-1},
#line 255 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str631, ei_tis620},
#line 306 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str632, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1},
#line 207 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str637, ei_cp862},
#line 305 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str638, ei_euc_jp},
#line 45 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str639, ei_utf7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 46 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str646, ei_utf7},
    {-1},
#line 183 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str648, ei_cp1253},
    {-1},
#line 36 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str650, ei_ucs4be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 96 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str662, ei_iso8859_6},
    {-1},
#line 55 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str664, ei_iso8859_1},
    {-1},
#line 355 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str666, ei_big5hkscs2001},
#line 227 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str667, ei_mac_arabic},
#line 27 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str668, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1},
#line 366 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str673, ei_johab},
#line 356 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str674, ei_big5hkscs2004},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 359 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str682, ei_big5hkscs2008},
    {-1},
#line 354 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str684, ei_big5hkscs1999},
#line 40 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str685, ei_utf16le},
#line 99 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str686, ei_iso8859_6},
    {-1}, {-1},
#line 350 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str689, ei_ces_big5},
#line 65 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str690, ei_iso8859_2},
    {-1}, {-1}, {-1},
#line 118 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str694, ei_iso8859_8},
#line 349 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str695, ei_ces_big5},
    {-1},
#line 283 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str697, ei_jisx0212},
    {-1}, {-1}, {-1},
#line 233 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str701, ei_nextstep},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 317 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str710, ei_iso2022_jp},
#line 20 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str711, ei_ascii},
    {-1}, {-1},
#line 249 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str714, ei_cp1133},
    {-1},
#line 318 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str716, ei_iso2022_jp},
    {-1},
#line 258 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str718, ei_cp874},
    {-1},
#line 202 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str720, ei_cp850},
#line 254 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str721, ei_tis620},
    {-1},
#line 195 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str723, ei_cp1257},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 18 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str732, ei_ascii},
    {-1}, {-1},
#line 271 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str735, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 28 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str747, ei_ucs2be},
    {-1}, {-1},
#line 17 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str750, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 193 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str761, ei_cp1256},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 275 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str767, ei_jisx0208},
#line 272 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str768, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 285 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str778, ei_jisx0212},
#line 282 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str779, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 106 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str787, ei_iso8859_7},
    {-1}, {-1},
#line 265 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str790, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 44 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str801, ei_utf7},
    {-1}, {-1}, {-1}, {-1},
#line 39 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str806, ei_utf16be},
#line 274 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str807, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1},
#line 218 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str812, ei_mac_centraleurope},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 345 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str818, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 43 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str836, ei_utf32le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 221 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str849, ei_mac_romania},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 277 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str858, ei_jisx0208},
    {-1}, {-1}, {-1},
#line 105 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str862, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 196 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str873, ei_cp1257},
    {-1}, {-1}, {-1}, {-1},
#line 223 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str878, ei_mac_ukraine},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 307 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str887, ei_euc_jp},
    {-1}, {-1}, {-1},
#line 276 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str891, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 50 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str900, ei_ucs4swapped},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 284 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str908, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 48 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str918, ei_ucs2swapped},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 42 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str957, ei_utf32be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 346 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str974, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 337 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str992, ei_gb18030_2022},
    {-1}, {-1}, {-1}, {-1},
#line 226 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str997, ei_mac_hebrew},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 309 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1019, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 336 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1040, ei_gb18030_2005},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 308 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1046, ei_euc_jp}
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
