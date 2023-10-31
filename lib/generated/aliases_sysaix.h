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

#define TOTAL_KEYWORDS 362
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 16
#define MAX_HASH_VALUE 1090
/* maximum key range = 1075, duplicates = 0 */

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
      1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091,
      1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091,
      1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091,
      1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091,
      1091, 1091, 1091, 1091, 1091,    5,   12, 1091,   97,    7,
        33,  130,   15,   17,    5,  205,   23,   25,  226, 1091,
      1091, 1091, 1091, 1091, 1091,  165,  145,   11,   14,  135,
       109,  136,  118,    6,   88,   31,    9,  154,    8,    6,
       129, 1091,    5,    5,   28,  218,   18,  189,  237,    5,
         6, 1091, 1091, 1091, 1091,    6, 1091, 1091, 1091, 1091,
      1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091,
      1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091,
      1091, 1091, 1091, 1091, 1091, 1091, 1091, 1091
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
    char stringpool_str21[sizeof("CN")];
    char stringpool_str25[sizeof("SJIS")];
    char stringpool_str26[sizeof("L4")];
    char stringpool_str28[sizeof("L5")];
    char stringpool_str30[sizeof("R8")];
    char stringpool_str34[sizeof("L8")];
    char stringpool_str36[sizeof("866")];
    char stringpool_str44[sizeof("L2")];
    char stringpool_str51[sizeof("ISO-IR-6")];
    char stringpool_str54[sizeof("CP866")];
    char stringpool_str58[sizeof("VISCII")];
    char stringpool_str64[sizeof("C99")];
    char stringpool_str65[sizeof("ISO-IR-166")];
    char stringpool_str66[sizeof("TCVN")];
    char stringpool_str67[sizeof("LATIN6")];
    char stringpool_str70[sizeof("CP154")];
    char stringpool_str71[sizeof("LATIN1")];
    char stringpool_str76[sizeof("CYRILLIC")];
    char stringpool_str77[sizeof("CSVISCII")];
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
    char stringpool_str102[sizeof("VISCII1.1-1")];
    char stringpool_str103[sizeof("LATIN8")];
    char stringpool_str104[sizeof("CP1254")];
    char stringpool_str105[sizeof("ISO-IR-58")];
    char stringpool_str106[sizeof("CP949")];
    char stringpool_str107[sizeof("ISO_646.IRV:1991")];
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
    char stringpool_str126[sizeof("HZ")];
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
    char stringpool_str183[sizeof("CSISO14JISC6220RO")];
    char stringpool_str184[sizeof("EUC-CN")];
    char stringpool_str186[sizeof("ISO-8859-2")];
    char stringpool_str187[sizeof("ISO_8859-2")];
    char stringpool_str188[sizeof("PT154")];
    char stringpool_str189[sizeof("KSC_5601")];
    char stringpool_str192[sizeof("EUCKR")];
    char stringpool_str197[sizeof("ISO-IR-109")];
    char stringpool_str198[sizeof("EUC-KR")];
    char stringpool_str199[sizeof("ASCII")];
    char stringpool_str201[sizeof("GBK")];
    char stringpool_str204[sizeof("IBM866")];
    char stringpool_str205[sizeof("MS-CYRL")];
    char stringpool_str206[sizeof("L10")];
    char stringpool_str208[sizeof("KZ-1048")];
    char stringpool_str212[sizeof("CP50221")];
    char stringpool_str216[sizeof("L7")];
    char stringpool_str217[sizeof("CSASCII")];
    char stringpool_str219[sizeof("JP")];
    char stringpool_str220[sizeof("850")];
    char stringpool_str221[sizeof("CSKZ1048")];
    char stringpool_str225[sizeof("US")];
    char stringpool_str226[sizeof("ISO-IR-138")];
    char stringpool_str231[sizeof("KS_C_5601-1989")];
    char stringpool_str237[sizeof("CP932")];
    char stringpool_str238[sizeof("ISO-CELTIC")];
    char stringpool_str243[sizeof("UHC")];
    char stringpool_str244[sizeof("IBM-921")];
    char stringpool_str246[sizeof("IBM819")];
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
    char stringpool_str266[sizeof("SHIFT-JIS")];
    char stringpool_str267[sizeof("SHIFT_JIS")];
    char stringpool_str268[sizeof("CP1250")];
    char stringpool_str269[sizeof("CSISOLATIN1")];
    char stringpool_str270[sizeof("ISO-2022-KR")];
    char stringpool_str271[sizeof("TIS620")];
    char stringpool_str274[sizeof("CP874")];
    char stringpool_str276[sizeof("CSISO2022KR")];
    char stringpool_str277[sizeof("TIS-620")];
    char stringpool_str279[sizeof("ISO646-US")];
    char stringpool_str280[sizeof("ISO-2022-CN-EXT")];
    char stringpool_str281[sizeof("CSUCS4")];
    char stringpool_str284[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str285[sizeof("CSISOLATIN4")];
    char stringpool_str287[sizeof("ELOT_928")];
    char stringpool_str289[sizeof("CSISOLATIN5")];
    char stringpool_str293[sizeof("CSISO159JISX02121990")];
    char stringpool_str296[sizeof("IBM-1252")];
    char stringpool_str299[sizeof("UCS-2")];
    char stringpool_str305[sizeof("ISO-IR-179")];
    char stringpool_str308[sizeof("TIS620.2529-1")];
    char stringpool_str313[sizeof("JIS_C6220-1969-RO")];
    char stringpool_str316[sizeof("ISO8859-10")];
    char stringpool_str317[sizeof("LATIN3")];
    char stringpool_str319[sizeof("BIG5")];
    char stringpool_str321[sizeof("CSISOLATIN2")];
    char stringpool_str322[sizeof("ISO-8859-10")];
    char stringpool_str323[sizeof("ISO_8859-10")];
    char stringpool_str324[sizeof("MS936")];
    char stringpool_str325[sizeof("BIG-5")];
    char stringpool_str330[sizeof("PTCP154")];
    char stringpool_str331[sizeof("IBM-1131")];
    char stringpool_str334[sizeof("CP1253")];
    char stringpool_str337[sizeof("DECKANJI")];
    char stringpool_str338[sizeof("CSBIG5")];
    char stringpool_str341[sizeof("ISO-IR-100")];
    char stringpool_str342[sizeof("JIS_C6226-1983")];
    char stringpool_str343[sizeof("DEC-KANJI")];
    char stringpool_str344[sizeof("CN-BIG5")];
    char stringpool_str345[sizeof("TCVN5712-1")];
    char stringpool_str348[sizeof("X0212")];
    char stringpool_str355[sizeof("UTF-16")];
    char stringpool_str356[sizeof("MS-ANSI")];
    char stringpool_str358[sizeof("KOREAN")];
    char stringpool_str361[sizeof("CN-GB-ISOIR165")];
    char stringpool_str362[sizeof("CSIBM866")];
    char stringpool_str363[sizeof("TCVN-5712")];
    char stringpool_str364[sizeof("STRK1048-2002")];
    char stringpool_str371[sizeof("CSPTCP154")];
    char stringpool_str373[sizeof("JIS0208")];
    char stringpool_str374[sizeof("ISO8859-3")];
    char stringpool_str375[sizeof("TIS620-0")];
    char stringpool_str378[sizeof("GB2312")];
    char stringpool_str380[sizeof("ISO-8859-3")];
    char stringpool_str381[sizeof("ISO_8859-3")];
    char stringpool_str382[sizeof("ISO8859-13")];
    char stringpool_str383[sizeof("UTF-8")];
    char stringpool_str384[sizeof("ROMAN8")];
    char stringpool_str386[sizeof("X0201")];
    char stringpool_str388[sizeof("ISO-8859-13")];
    char stringpool_str389[sizeof("ISO_8859-13")];
    char stringpool_str390[sizeof("ISO_8859-4:1988")];
    char stringpool_str391[sizeof("CSSHIFTJIS")];
    char stringpool_str392[sizeof("ISO_8859-5:1988")];
    char stringpool_str393[sizeof("IBM-932")];
    char stringpool_str397[sizeof("ISO646-JP")];
    char stringpool_str398[sizeof("ISO_8859-8:1988")];
    char stringpool_str399[sizeof("ISO-10646-UCS-4")];
    char stringpool_str400[sizeof("IBM850")];
    char stringpool_str402[sizeof("ISO_8859-9:1989")];
    char stringpool_str406[sizeof("IBM-850")];
    char stringpool_str407[sizeof("ARMSCII-8")];
    char stringpool_str411[sizeof("KS_C_5601-1987")];
    char stringpool_str417[sizeof("ISO-10646-UCS-2")];
    char stringpool_str418[sizeof("X0208")];
    char stringpool_str421[sizeof("CP1133")];
    char stringpool_str423[sizeof("CSEUCKR")];
    char stringpool_str426[sizeof("CSISOLATINGREEK")];
    char stringpool_str430[sizeof("US-ASCII")];
    char stringpool_str432[sizeof("UNICODE-1-1")];
    char stringpool_str433[sizeof("ISO-IR-203")];
    char stringpool_str434[sizeof("CSKSC56011987")];
    char stringpool_str436[sizeof("CSISOLATINARABIC")];
    char stringpool_str440[sizeof("JAVA")];
    char stringpool_str441[sizeof("CSUNICODE11")];
    char stringpool_str442[sizeof("CHINESE")];
    char stringpool_str447[sizeof("CN-GB")];
    char stringpool_str452[sizeof("GB_1988-80")];
    char stringpool_str453[sizeof("UCS-4-INTERNAL")];
    char stringpool_str454[sizeof("ISO-2022-JP-MS")];
    char stringpool_str455[sizeof("ISO-2022-JP-1")];
    char stringpool_str463[sizeof("MACINTOSH")];
    char stringpool_str467[sizeof("LATIN7")];
    char stringpool_str469[sizeof("ISO-IR-57")];
    char stringpool_str471[sizeof("UCS-2-INTERNAL")];
    char stringpool_str472[sizeof("MS_KANJI")];
    char stringpool_str473[sizeof("GREEK")];
    char stringpool_str475[sizeof("ISO-IR-87")];
    char stringpool_str477[sizeof("ISO-IR-157")];
    char stringpool_str479[sizeof("MS-TURK")];
    char stringpool_str481[sizeof("ISO-2022-JP-2")];
    char stringpool_str482[sizeof("BIG5HKSCS")];
    char stringpool_str484[sizeof("CP1257")];
    char stringpool_str486[sizeof("CSISO2022JP2")];
    char stringpool_str488[sizeof("BIG5-HKSCS")];
    char stringpool_str489[sizeof("GREEK8")];
    char stringpool_str490[sizeof("WINDOWS-1256")];
    char stringpool_str492[sizeof("WINDOWS-1251")];
    char stringpool_str493[sizeof("ISO-IR-127")];
    char stringpool_str495[sizeof("MACTHAI")];
    char stringpool_str497[sizeof("EUCJP")];
    char stringpool_str500[sizeof("WINDOWS-1254")];
    char stringpool_str502[sizeof("WINDOWS-1255")];
    char stringpool_str503[sizeof("EUC-JP")];
    char stringpool_str505[sizeof("ISO_8859-3:1988")];
    char stringpool_str506[sizeof("MULELAO-1")];
    char stringpool_str507[sizeof("KOI8-U")];
    char stringpool_str508[sizeof("WINDOWS-1258")];
    char stringpool_str509[sizeof("ARABIC")];
    char stringpool_str510[sizeof("TIS620.2533-1")];
    char stringpool_str511[sizeof("ECMA-114")];
    char stringpool_str513[sizeof("KOI8-RU")];
    char stringpool_str515[sizeof("CSISOLATIN3")];
    char stringpool_str516[sizeof("HP-ROMAN8")];
    char stringpool_str518[sizeof("WINDOWS-1252")];
    char stringpool_str519[sizeof("MACROMAN")];
    char stringpool_str524[sizeof("ISO8859-7")];
    char stringpool_str527[sizeof("ECMA-118")];
    char stringpool_str529[sizeof("UCS-4LE")];
    char stringpool_str530[sizeof("ISO-8859-7")];
    char stringpool_str531[sizeof("ISO_8859-7")];
    char stringpool_str534[sizeof("UTF-32")];
    char stringpool_str536[sizeof("CSGB2312")];
    char stringpool_str537[sizeof("MACICELAND")];
    char stringpool_str547[sizeof("UCS-2LE")];
    char stringpool_str548[sizeof("JIS_X0212")];
    char stringpool_str553[sizeof("CSUNICODE")];
    char stringpool_str557[sizeof("EUCTW")];
    char stringpool_str561[sizeof("CP367")];
    char stringpool_str562[sizeof("ISO_8859-6:1987")];
    char stringpool_str563[sizeof("EUC-TW")];
    char stringpool_str564[sizeof("ISO_8859-1:1987")];
    char stringpool_str565[sizeof("IBM-EUCCN")];
    char stringpool_str567[sizeof("CSISOLATINHEBREW")];
    char stringpool_str569[sizeof("MS-EE")];
    char stringpool_str574[sizeof("MS-HEBR")];
    char stringpool_str575[sizeof("ISO-2022-JP")];
    char stringpool_str577[sizeof("GB_2312-80")];
    char stringpool_str578[sizeof("MACCROATIAN")];
    char stringpool_str579[sizeof("IBM-EUCKR")];
    char stringpool_str581[sizeof("CSISO2022JP")];
    char stringpool_str582[sizeof("WINDOWS-1250")];
    char stringpool_str586[sizeof("JIS_X0201")];
    char stringpool_str590[sizeof("ISO_8859-2:1987")];
    char stringpool_str592[sizeof("WINDOWS-936")];
    char stringpool_str594[sizeof("GB18030")];
    char stringpool_str599[sizeof("CSISO57GB1988")];
    char stringpool_str600[sizeof("TIS620.2533-0")];
    char stringpool_str607[sizeof("ANSI_X3.4-1986")];
    char stringpool_str609[sizeof("UNICODELITTLE")];
    char stringpool_str615[sizeof("WINDOWS-1253")];
    char stringpool_str617[sizeof("GEORGIAN-PS")];
    char stringpool_str618[sizeof("JIS_X0208")];
    char stringpool_str619[sizeof("JISX0201-1976")];
    char stringpool_str624[sizeof("CSISO58GB231280")];
    char stringpool_str625[sizeof("ANSI_X3.4-1968")];
    char stringpool_str627[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str629[sizeof("JIS_X0212-1990")];
    char stringpool_str630[sizeof("CSISO87JISX0208")];
    char stringpool_str631[sizeof("UTF-16LE")];
    char stringpool_str636[sizeof("UNICODE-1-1-UTF-7")];
    char stringpool_str638[sizeof("JIS_X0212.1990-0")];
    char stringpool_str640[sizeof("MS-GREEK")];
    char stringpool_str641[sizeof("CSMACINTOSH")];
    char stringpool_str643[sizeof("CSUNICODE11UTF7")];
    char stringpool_str646[sizeof("MACGREEK")];
    char stringpool_str652[sizeof("CSHPROMAN8")];
    char stringpool_str655[sizeof("HZ-GB-2312")];
    char stringpool_str664[sizeof("GEORGIAN-ACADEMY")];
    char stringpool_str665[sizeof("UCS-4BE")];
    char stringpool_str666[sizeof("JOHAB")];
    char stringpool_str682[sizeof("MACARABIC")];
    char stringpool_str683[sizeof("UCS-2BE")];
    char stringpool_str685[sizeof("WINDOWS-874")];
    char stringpool_str686[sizeof("ASMO-708")];
    char stringpool_str687[sizeof("ISO_8859-7:2003")];
    char stringpool_str690[sizeof("WINDOWS-1257")];
    char stringpool_str691[sizeof("BIGFIVE")];
    char stringpool_str697[sizeof("BIG-FIVE")];
    char stringpool_str699[sizeof("TCVN5712-1:1993")];
    char stringpool_str704[sizeof("MACTURKISH")];
    char stringpool_str707[sizeof("NEXTSTEP")];
    char stringpool_str709[sizeof("JIS_X0208-1990")];
    char stringpool_str711[sizeof("IBM367")];
    char stringpool_str719[sizeof("IBM-CP1133")];
    char stringpool_str721[sizeof("BIG5-HKSCS:2001")];
    char stringpool_str725[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str729[sizeof("BIG5-HKSCS:2004")];
    char stringpool_str737[sizeof("BIG5-HKSCS:2008")];
    char stringpool_str739[sizeof("BIG5-HKSCS:1999")];
    char stringpool_str742[sizeof("JIS_X0208-1983")];
    char stringpool_str747[sizeof("UTF-7")];
    char stringpool_str762[sizeof("ISO_8859-7:1987")];
    char stringpool_str765[sizeof("DECHANYU")];
    char stringpool_str767[sizeof("UTF-16BE")];
    char stringpool_str771[sizeof("DEC-HANYU")];
    char stringpool_str782[sizeof("UTF-32LE")];
    char stringpool_str787[sizeof("HEBREW")];
    char stringpool_str788[sizeof("CSEUCTW")];
    char stringpool_str791[sizeof("MS-ARAB")];
    char stringpool_str812[sizeof("MACCENTRALEUROPE")];
    char stringpool_str823[sizeof("UNICODEBIG")];
    char stringpool_str849[sizeof("MACROMANIA")];
    char stringpool_str873[sizeof("WINBALTRIM")];
    char stringpool_str878[sizeof("MACUKRAINE")];
    char stringpool_str881[sizeof("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE")];
    char stringpool_str884[sizeof("IBM-EUCJP")];
    char stringpool_str892[sizeof("UCS-4-SWAPPED")];
    char stringpool_str910[sizeof("UCS-2-SWAPPED")];
    char stringpool_str918[sizeof("UTF-32BE")];
    char stringpool_str924[sizeof("GB18030:2022")];
    char stringpool_str944[sizeof("IBM-EUCTW")];
    char stringpool_str951[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str972[sizeof("GB18030:2005")];
    char stringpool_str994[sizeof("CSEUCPKDFMTJAPANESE")];
    char stringpool_str1090[sizeof("MACHEBREW")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "L6",
    "L1",
    "CN",
    "SJIS",
    "L4",
    "L5",
    "R8",
    "L8",
    "866",
    "L2",
    "ISO-IR-6",
    "CP866",
    "VISCII",
    "C99",
    "ISO-IR-166",
    "TCVN",
    "LATIN6",
    "CP154",
    "LATIN1",
    "CYRILLIC",
    "CSVISCII",
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
    "VISCII1.1-1",
    "LATIN8",
    "CP1254",
    "ISO-IR-58",
    "CP949",
    "ISO_646.IRV:1991",
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
    "HZ",
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
    "CSISO14JISC6220RO",
    "EUC-CN",
    "ISO-8859-2",
    "ISO_8859-2",
    "PT154",
    "KSC_5601",
    "EUCKR",
    "ISO-IR-109",
    "EUC-KR",
    "ASCII",
    "GBK",
    "IBM866",
    "MS-CYRL",
    "L10",
    "KZ-1048",
    "CP50221",
    "L7",
    "CSASCII",
    "JP",
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
    "SHIFT-JIS",
    "SHIFT_JIS",
    "CP1250",
    "CSISOLATIN1",
    "ISO-2022-KR",
    "TIS620",
    "CP874",
    "CSISO2022KR",
    "TIS-620",
    "ISO646-US",
    "ISO-2022-CN-EXT",
    "CSUCS4",
    "CSISOLATINCYRILLIC",
    "CSISOLATIN4",
    "ELOT_928",
    "CSISOLATIN5",
    "CSISO159JISX02121990",
    "IBM-1252",
    "UCS-2",
    "ISO-IR-179",
    "TIS620.2529-1",
    "JIS_C6220-1969-RO",
    "ISO8859-10",
    "LATIN3",
    "BIG5",
    "CSISOLATIN2",
    "ISO-8859-10",
    "ISO_8859-10",
    "MS936",
    "BIG-5",
    "PTCP154",
    "IBM-1131",
    "CP1253",
    "DECKANJI",
    "CSBIG5",
    "ISO-IR-100",
    "JIS_C6226-1983",
    "DEC-KANJI",
    "CN-BIG5",
    "TCVN5712-1",
    "X0212",
    "UTF-16",
    "MS-ANSI",
    "KOREAN",
    "CN-GB-ISOIR165",
    "CSIBM866",
    "TCVN-5712",
    "STRK1048-2002",
    "CSPTCP154",
    "JIS0208",
    "ISO8859-3",
    "TIS620-0",
    "GB2312",
    "ISO-8859-3",
    "ISO_8859-3",
    "ISO8859-13",
    "UTF-8",
    "ROMAN8",
    "X0201",
    "ISO-8859-13",
    "ISO_8859-13",
    "ISO_8859-4:1988",
    "CSSHIFTJIS",
    "ISO_8859-5:1988",
    "IBM-932",
    "ISO646-JP",
    "ISO_8859-8:1988",
    "ISO-10646-UCS-4",
    "IBM850",
    "ISO_8859-9:1989",
    "IBM-850",
    "ARMSCII-8",
    "KS_C_5601-1987",
    "ISO-10646-UCS-2",
    "X0208",
    "CP1133",
    "CSEUCKR",
    "CSISOLATINGREEK",
    "US-ASCII",
    "UNICODE-1-1",
    "ISO-IR-203",
    "CSKSC56011987",
    "CSISOLATINARABIC",
    "JAVA",
    "CSUNICODE11",
    "CHINESE",
    "CN-GB",
    "GB_1988-80",
    "UCS-4-INTERNAL",
    "ISO-2022-JP-MS",
    "ISO-2022-JP-1",
    "MACINTOSH",
    "LATIN7",
    "ISO-IR-57",
    "UCS-2-INTERNAL",
    "MS_KANJI",
    "GREEK",
    "ISO-IR-87",
    "ISO-IR-157",
    "MS-TURK",
    "ISO-2022-JP-2",
    "BIG5HKSCS",
    "CP1257",
    "CSISO2022JP2",
    "BIG5-HKSCS",
    "GREEK8",
    "WINDOWS-1256",
    "WINDOWS-1251",
    "ISO-IR-127",
    "MACTHAI",
    "EUCJP",
    "WINDOWS-1254",
    "WINDOWS-1255",
    "EUC-JP",
    "ISO_8859-3:1988",
    "MULELAO-1",
    "KOI8-U",
    "WINDOWS-1258",
    "ARABIC",
    "TIS620.2533-1",
    "ECMA-114",
    "KOI8-RU",
    "CSISOLATIN3",
    "HP-ROMAN8",
    "WINDOWS-1252",
    "MACROMAN",
    "ISO8859-7",
    "ECMA-118",
    "UCS-4LE",
    "ISO-8859-7",
    "ISO_8859-7",
    "UTF-32",
    "CSGB2312",
    "MACICELAND",
    "UCS-2LE",
    "JIS_X0212",
    "CSUNICODE",
    "EUCTW",
    "CP367",
    "ISO_8859-6:1987",
    "EUC-TW",
    "ISO_8859-1:1987",
    "IBM-EUCCN",
    "CSISOLATINHEBREW",
    "MS-EE",
    "MS-HEBR",
    "ISO-2022-JP",
    "GB_2312-80",
    "MACCROATIAN",
    "IBM-EUCKR",
    "CSISO2022JP",
    "WINDOWS-1250",
    "JIS_X0201",
    "ISO_8859-2:1987",
    "WINDOWS-936",
    "GB18030",
    "CSISO57GB1988",
    "TIS620.2533-0",
    "ANSI_X3.4-1986",
    "UNICODELITTLE",
    "WINDOWS-1253",
    "GEORGIAN-PS",
    "JIS_X0208",
    "JISX0201-1976",
    "CSISO58GB231280",
    "ANSI_X3.4-1968",
    "CSPC862LATINHEBREW",
    "JIS_X0212-1990",
    "CSISO87JISX0208",
    "UTF-16LE",
    "UNICODE-1-1-UTF-7",
    "JIS_X0212.1990-0",
    "MS-GREEK",
    "CSMACINTOSH",
    "CSUNICODE11UTF7",
    "MACGREEK",
    "CSHPROMAN8",
    "HZ-GB-2312",
    "GEORGIAN-ACADEMY",
    "UCS-4BE",
    "JOHAB",
    "MACARABIC",
    "UCS-2BE",
    "WINDOWS-874",
    "ASMO-708",
    "ISO_8859-7:2003",
    "WINDOWS-1257",
    "BIGFIVE",
    "BIG-FIVE",
    "TCVN5712-1:1993",
    "MACTURKISH",
    "NEXTSTEP",
    "JIS_X0208-1990",
    "IBM367",
    "IBM-CP1133",
    "BIG5-HKSCS:2001",
    "CSPC850MULTILINGUAL",
    "BIG5-HKSCS:2004",
    "BIG5-HKSCS:2008",
    "BIG5-HKSCS:1999",
    "JIS_X0208-1983",
    "UTF-7",
    "ISO_8859-7:1987",
    "DECHANYU",
    "UTF-16BE",
    "DEC-HANYU",
    "UTF-32LE",
    "HEBREW",
    "CSEUCTW",
    "MS-ARAB",
    "MACCENTRALEUROPE",
    "UNICODEBIG",
    "MACROMANIA",
    "WINBALTRIM",
    "MACUKRAINE",
    "EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",
    "IBM-EUCJP",
    "UCS-4-SWAPPED",
    "UCS-2-SWAPPED",
    "UTF-32BE",
    "GB18030:2022",
    "IBM-EUCTW",
    "CSHALFWIDTHKATAKANA",
    "GB18030:2005",
    "CSEUCPKDFMTJAPANESE",
    "MACHEBREW"
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
    {-1}, {-1},
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
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 16 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str51, ei_ascii},
    {-1}, {-1},
#line 208 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str54, ei_cp866},
    {-1}, {-1}, {-1},
#line 259 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str58, ei_viscii},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 51 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str64, ei_c99},
#line 256 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str65, ei_tis620},
#line 262 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str66, ei_tcvn},
#line 133 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str67, ei_iso8859_10},
    {-1}, {-1},
#line 240 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str70, ei_pt154},
#line 59 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str71, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1},
#line 91 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str76, ei_iso8859_5},
#line 261 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str77, ei_viscii},
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
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 260 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str102, ei_viscii},
#line 151 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str103, ei_iso8859_14},
#line 185 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str104, ei_cp1254},
#line 295 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str105, ei_gb2312},
#line 364 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str106, ei_cp949},
#line 15 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str107, ei_ascii},
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
#line 341 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str126, ei_hz},
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
    {-1}, {-1},
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
#line 270 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str183, ei_iso646_jp},
#line 324 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str184, ei_euc_cn},
    {-1},
#line 63 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str186, ei_iso8859_2},
#line 64 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str187, ei_iso8859_2},
#line 238 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str188, ei_pt154},
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
    {-1},
#line 331 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str201, ei_ces_gbk},
    {-1}, {-1},
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
    {-1}, {-1}, {-1},
#line 144 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str216, ei_iso8859_13},
#line 22 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str217, ei_ascii},
    {-1},
#line 269 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str219, ei_iso646_jp},
#line 201 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str220, ei_cp850},
#line 246 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str221, ei_rk1048},
    {-1}, {-1}, {-1},
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
    {-1}, {-1},
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
#line 311 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str266, ei_sjis},
#line 310 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str267, ei_sjis},
#line 172 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str268, ei_cp1250},
#line 61 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str269, ei_iso8859_1},
#line 368 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str270, ei_iso2022_kr},
#line 251 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str271, ei_tis620},
    {-1}, {-1},
#line 257 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str274, ei_cp874},
    {-1},
#line 369 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str276, ei_iso2022_kr},
#line 250 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str277, ei_tis620},
    {-1},
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
    {-1}, {-1}, {-1},
#line 288 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str293, ei_jisx0212},
    {-1}, {-1},
#line 181 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str296, ei_cp1252},
    {-1}, {-1},
#line 24 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str299, ei_ucs2},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 142 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str305, ei_iso8859_13},
    {-1}, {-1},
#line 253 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str308, ei_tis620},
    {-1}, {-1}, {-1}, {-1},
#line 266 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str313, ei_iso646_jp},
    {-1}, {-1},
#line 136 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str316, ei_iso8859_10},
#line 75 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str317, ei_iso8859_3},
    {-1},
#line 347 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str319, ei_ces_big5},
    {-1},
#line 69 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str321, ei_iso8859_2},
#line 129 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str322, ei_iso8859_10},
#line 130 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str323, ei_iso8859_10},
#line 333 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str324, ei_cp936},
#line 348 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str325, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1},
#line 239 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str330, ei_pt154},
#line 213 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str331, ei_cp1131},
    {-1}, {-1},
#line 182 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str334, ei_cp1253},
    {-1}, {-1},
#line 371 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str337, ei_dec_kanji},
#line 352 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str338, ei_ces_big5},
    {-1}, {-1},
#line 56 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str341, ei_iso8859_1},
#line 281 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str342, ei_jisx0208},
#line 370 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str343, ei_dec_kanji},
#line 351 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str344, ei_ces_big5},
#line 264 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str345, ei_tcvn},
    {-1}, {-1},
#line 286 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str348, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 38 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str355, ei_utf16},
#line 180 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str356, ei_cp1252},
    {-1},
#line 304 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str358, ei_ksc5601},
    {-1}, {-1},
#line 298 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str361, ei_isoir165},
#line 211 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str362, ei_cp866},
#line 263 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str363, ei_tcvn},
#line 244 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str364, ei_rk1048},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 242 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str371, ei_pt154},
    {-1},
#line 278 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str373, ei_jisx0208},
#line 78 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str374, ei_iso8859_3},
#line 252 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str375, ei_tis620},
    {-1}, {-1},
#line 326 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str378, ei_euc_cn},
    {-1},
#line 71 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str380, ei_iso8859_3},
#line 72 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str381, ei_iso8859_3},
#line 145 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str382, ei_iso8859_13},
#line 23 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str383, ei_utf8},
#line 230 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str384, ei_hp_roman8},
    {-1},
#line 273 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str386, ei_jisx0201},
    {-1},
#line 140 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str388, ei_iso8859_13},
#line 141 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str389, ei_iso8859_13},
#line 81 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str390, ei_iso8859_4},
#line 314 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str391, ei_sjis},
#line 89 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str392, ei_iso8859_5},
#line 316 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str393, ei_cp932},
    {-1}, {-1}, {-1},
#line 267 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str397, ei_iso646_jp},
#line 116 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str398, ei_iso8859_8},
#line 34 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str399, ei_ucs4},
#line 200 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str400, ei_cp850},
    {-1},
#line 123 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str402, ei_iso8859_9},
    {-1}, {-1}, {-1},
#line 203 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str406, ei_cp850},
#line 234 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str407, ei_armscii_8},
    {-1}, {-1}, {-1},
#line 300 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str411, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 25 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str417, ei_ucs2},
#line 279 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str418, ei_jisx0208},
    {-1}, {-1},
#line 248 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421, ei_cp1133},
    {-1},
#line 362 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str423, ei_euc_kr},
    {-1}, {-1},
#line 112 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str426, ei_iso8859_7},
    {-1}, {-1}, {-1},
#line 12 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str430, ei_ascii},
    {-1},
#line 29 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str432, ei_ucs2be},
#line 158 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str433, ei_iso8859_15},
#line 303 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str434, ei_ksc5601},
    {-1},
#line 101 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str436, ei_iso8859_6},
    {-1}, {-1}, {-1},
#line 52 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str440, ei_java},
#line 30 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str441, ei_ucs2be},
#line 329 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str442, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1},
#line 327 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str447, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1},
#line 289 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str452, ei_iso646_cn},
#line 49 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str453, ei_ucs4internal},
#line 322 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str454, ei_iso2022_jpms},
#line 319 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str455, ei_iso2022_jp1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 215 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str463, ei_mac_roman},
    {-1}, {-1}, {-1},
#line 143 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str467, ei_iso8859_13},
    {-1},
#line 291 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str469, ei_iso646_cn},
    {-1},
#line 47 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str471, ei_ucs2internal},
#line 313 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str472, ei_sjis},
#line 111 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str473, ei_iso8859_7},
    {-1},
#line 280 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str475, ei_jisx0208},
    {-1},
#line 132 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str477, ei_iso8859_10},
    {-1},
#line 187 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str479, ei_cp1254},
    {-1},
#line 320 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str481, ei_iso2022_jp2},
#line 358 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str482, ei_big5hkscs2008},
    {-1},
#line 194 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str484, ei_cp1257},
    {-1},
#line 321 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str486, ei_iso2022_jp2},
    {-1},
#line 357 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str488, ei_big5hkscs2008},
#line 110 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str489, ei_iso8859_7},
#line 192 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str490, ei_cp1256},
    {-1},
#line 176 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str492, ei_cp1251},
#line 97 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str493, ei_iso8859_6},
    {-1},
#line 228 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str495, ei_mac_thai},
    {-1},
#line 306 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str497, ei_euc_jp},
    {-1}, {-1},
#line 186 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str500, ei_cp1254},
    {-1},
#line 189 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str502, ei_cp1255},
#line 305 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str503, ei_euc_jp},
    {-1},
#line 73 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str505, ei_iso8859_3},
#line 247 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str506, ei_mulelao},
#line 170 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str507, ei_koi8_u},
#line 198 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str508, ei_cp1258},
#line 100 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str509, ei_iso8859_6},
#line 255 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str510, ei_tis620},
#line 98 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str511, ei_iso8859_6},
    {-1},
#line 171 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str513, ei_koi8_ru},
    {-1},
#line 77 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str515, ei_iso8859_3},
#line 229 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str516, ei_hp_roman8},
    {-1},
#line 179 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str518, ei_cp1252},
#line 214 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str519, ei_mac_roman},
    {-1}, {-1}, {-1}, {-1},
#line 113 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str524, ei_iso8859_7},
    {-1}, {-1},
#line 108 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str527, ei_iso8859_7},
    {-1},
#line 37 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str529, ei_ucs4le},
#line 103 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str530, ei_iso8859_7},
#line 104 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str531, ei_iso8859_7},
    {-1}, {-1},
#line 41 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str534, ei_utf32},
    {-1},
#line 328 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str536, ei_euc_cn},
#line 219 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str537, ei_mac_iceland},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 31 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str547, ei_ucs2le},
#line 283 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str548, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1},
#line 26 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str553, ei_ucs2},
    {-1}, {-1}, {-1},
#line 344 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str557, ei_euc_tw},
    {-1}, {-1}, {-1},
#line 19 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str561, ei_ascii},
#line 96 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str562, ei_iso8859_6},
#line 343 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str563, ei_euc_tw},
#line 55 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str564, ei_iso8859_1},
#line 330 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str565, ei_euc_cn},
    {-1},
#line 119 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str567, ei_iso8859_8},
    {-1},
#line 174 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str569, ei_cp1250},
    {-1}, {-1}, {-1}, {-1},
#line 190 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str574, ei_cp1255},
#line 317 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str575, ei_iso2022_jp},
    {-1},
#line 294 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str577, ei_gb2312},
#line 220 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str578, ei_mac_croatian},
#line 363 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str579, ei_euc_kr},
    {-1},
#line 318 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str581, ei_iso2022_jp},
#line 173 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str582, ei_cp1250},
    {-1}, {-1}, {-1},
#line 271 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str586, ei_jisx0201},
    {-1}, {-1}, {-1},
#line 65 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str590, ei_iso8859_2},
    {-1},
#line 334 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str592, ei_cp936},
    {-1},
#line 335 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str594, ei_gb18030_2005},
    {-1}, {-1}, {-1}, {-1},
#line 293 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str599, ei_iso646_cn},
#line 254 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str600, ei_tis620},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 18 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str607, ei_ascii},
    {-1},
#line 32 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str609, ei_ucs2le},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 183 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str615, ei_cp1253},
    {-1},
#line 236 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str617, ei_georgian_ps},
#line 275 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str618, ei_jisx0208},
#line 272 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str619, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1},
#line 296 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str624, ei_gb2312},
#line 17 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str625, ei_ascii},
    {-1},
#line 207 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str627, ei_cp862},
    {-1},
#line 285 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str629, ei_jisx0212},
#line 282 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str630, ei_jisx0208},
#line 40 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str631, ei_utf16le},
    {-1}, {-1}, {-1}, {-1},
#line 45 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str636, ei_utf7},
    {-1},
#line 284 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str638, ei_jisx0212},
    {-1},
#line 184 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str640, ei_cp1253},
#line 217 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str641, ei_mac_roman},
    {-1},
#line 46 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str643, ei_utf7},
    {-1}, {-1},
#line 224 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str646, ei_mac_greek},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 232 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str652, ei_hp_roman8},
    {-1}, {-1},
#line 342 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str655, ei_hz},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 235 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str664, ei_georgian_academy},
#line 36 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str665, ei_ucs4be},
#line 366 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str666, ei_johab},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 227 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str682, ei_mac_arabic},
#line 27 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str683, ei_ucs2be},
    {-1},
#line 258 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str685, ei_cp874},
#line 99 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str686, ei_iso8859_6},
#line 106 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str687, ei_iso8859_7},
    {-1}, {-1},
#line 195 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str690, ei_cp1257},
#line 350 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str691, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 349 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str697, ei_ces_big5},
    {-1},
#line 265 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str699, ei_tcvn},
    {-1}, {-1}, {-1}, {-1},
#line 225 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str704, ei_mac_turkish},
    {-1}, {-1},
#line 233 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str707, ei_nextstep},
    {-1},
#line 277 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str709, ei_jisx0208},
    {-1},
#line 20 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str711, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 249 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str719, ei_cp1133},
    {-1},
#line 355 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str721, ei_big5hkscs2001},
    {-1}, {-1}, {-1},
#line 202 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str725, ei_cp850},
    {-1}, {-1}, {-1},
#line 356 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str729, ei_big5hkscs2004},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 359 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str737, ei_big5hkscs2008},
    {-1},
#line 354 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str739, ei_big5hkscs1999},
    {-1}, {-1},
#line 276 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str742, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1},
#line 44 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str747, ei_utf7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 105 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str762, ei_iso8859_7},
    {-1}, {-1},
#line 373 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str765, ei_dec_hanyu},
    {-1},
#line 39 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str767, ei_utf16be},
    {-1}, {-1}, {-1},
#line 372 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str771, ei_dec_hanyu},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 43 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str782, ei_utf32le},
    {-1}, {-1}, {-1}, {-1},
#line 118 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str787, ei_iso8859_8},
#line 345 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str788, ei_euc_tw},
    {-1}, {-1},
#line 193 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str791, ei_cp1256},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 218 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str812, ei_mac_centraleurope},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 28 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str823, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 221 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str849, ei_mac_romania},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 196 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str873, ei_cp1257},
    {-1}, {-1}, {-1}, {-1},
#line 223 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str878, ei_mac_ukraine},
    {-1}, {-1},
#line 307 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str881, ei_euc_jp},
    {-1}, {-1},
#line 309 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str884, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 50 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str892, ei_ucs4swapped},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 48 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str910, ei_ucs2swapped},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 42 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str918, ei_utf32be},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 337 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str924, ei_gb18030_2022},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 346 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str944, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 274 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str951, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 336 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str972, ei_gb18030_2005},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 308 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str994, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 226 "lib/generated/aliases_sysaix.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1090, ei_mac_hebrew}
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
