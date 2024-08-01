/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -Z HashPool -m 10 lib/generated/aliases.gperf  */
/* Computed positions: -k'1-2,4-10,$' */

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

#define TOTAL_KEYWORDS 555
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 39
#define MIN_HASH_VALUE 7
#define MAX_HASH_VALUE 2577
/* maximum key range = 2571, duplicates = 0 */

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
      2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578,
      2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578,
      2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578,
      2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578,
      2578, 2578, 2578, 2578, 2578, 2578,    0, 2578,   28,    4,
        58,  142,   16,    1,    0,  104,   18,  186,  721, 2578,
      2578, 2578, 2578, 2578, 2578,    6,  254,    0,   54,   16,
        13,  318,   81,    0,  736,   92,  707,   81,   17,   27,
         8, 2578,  628,    0,  446,  667,   22,  364,   41,    2,
         1, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578,
      2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578,
      2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578,
      2578, 2578, 2578, 2578, 2578, 2578, 2578, 2578
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
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
      case 2:
        hval += asso_values[static_cast<unsigned char>(str[1])];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

struct stringpool_t
  {
    char stringpool_str7[sizeof("CSASCII")];
    char stringpool_str8[sizeof("CSVISCII")];
    char stringpool_str11[sizeof("ASCII")];
    char stringpool_str12[sizeof("CPIS")];
    char stringpool_str13[sizeof("5601")];
    char stringpool_str14[sizeof("1125")];
    char stringpool_str19[sizeof("646")];
    char stringpool_str21[sizeof("866")];
    char stringpool_str22[sizeof("865")];
    char stringpool_str23[sizeof("855")];
    char stringpool_str25[sizeof("861")];
    char stringpool_str28[sizeof("VISCII")];
    char stringpool_str33[sizeof("CP285")];
    char stringpool_str36[sizeof("CN")];
    char stringpool_str38[sizeof("CSUCS4")];
    char stringpool_str39[sizeof("CP01146")];
    char stringpool_str40[sizeof("858")];
    char stringpool_str41[sizeof("CP01145")];
    char stringpool_str47[sizeof("CP01141")];
    char stringpool_str48[sizeof("VISCII1.11")];
    char stringpool_str49[sizeof("860")];
    char stringpool_str50[sizeof("850")];
    char stringpool_str58[sizeof("ISO646CN")];
    char stringpool_str69[sizeof("ECMA114")];
    char stringpool_str71[sizeof("CP01144")];
    char stringpool_str73[sizeof("ECMA118")];
    char stringpool_str75[sizeof("CP01148")];
    char stringpool_str79[sizeof("862")];
    char stringpool_str80[sizeof("852")];
    char stringpool_str85[sizeof("HZ")];
    char stringpool_str90[sizeof("MAC")];
    char stringpool_str93[sizeof("CSKZ1048")];
    char stringpool_str95[sizeof("CP01140")];
    char stringpool_str102[sizeof("ANSI1251")];
    char stringpool_str103[sizeof("PCK")];
    char stringpool_str104[sizeof("MSANSI")];
    char stringpool_str110[sizeof("X0201")];
    char stringpool_str116[sizeof("CCSID01146")];
    char stringpool_str117[sizeof("MSEE")];
    char stringpool_str118[sizeof("CCSID01145")];
    char stringpool_str124[sizeof("CCSID01141")];
    char stringpool_str126[sizeof("857")];
    char stringpool_str129[sizeof("CP1250")];
    char stringpool_str130[sizeof("HP15CN")];
    char stringpool_str133[sizeof("CSUNICODE11")];
    char stringpool_str136[sizeof("KSC5601")];
    char stringpool_str138[sizeof("X0208")];
    char stringpool_str139[sizeof("CSUNICODE")];
    char stringpool_str140[sizeof("CSPC8CODEPAGE1146")];
    char stringpool_str148[sizeof("CCSID01144")];
    char stringpool_str151[sizeof("CSPCP852")];
    char stringpool_str152[sizeof("CCSID01148")];
    char stringpool_str153[sizeof("CHINESE")];
    char stringpool_str154[sizeof("CSKSC56011987")];
    char stringpool_str155[sizeof("CP01142")];
    char stringpool_str156[sizeof("CSPC8CODEPAGE1144")];
    char stringpool_str160[sizeof("XMACCE")];
    char stringpool_str163[sizeof("863")];
    char stringpool_str164[sizeof("853")];
    char stringpool_str172[sizeof("CCSID01140")];
    char stringpool_str173[sizeof("CP870")];
    char stringpool_str179[sizeof("KZ1048")];
    char stringpool_str181[sizeof("KOREAN")];
    char stringpool_str183[sizeof("DECHANZI")];
    char stringpool_str194[sizeof("X0212")];
    char stringpool_str207[sizeof("869")];
    char stringpool_str208[sizeof("ASMO708")];
    char stringpool_str221[sizeof("DOS862")];
    char stringpool_str228[sizeof("MS936")];
    char stringpool_str231[sizeof("ISO88596")];
    char stringpool_str232[sizeof("CCSID01142")];
    char stringpool_str233[sizeof("ISO88595")];
    char stringpool_str236[sizeof("ISO885916")];
    char stringpool_str237[sizeof("CSUNICODE11UTF7")];
    char stringpool_str238[sizeof("ISO885915")];
    char stringpool_str239[sizeof("ISO88591")];
    char stringpool_str243[sizeof("CSPC8CODEPAGE437")];
    char stringpool_str244[sizeof("ISO885911")];
    char stringpool_str245[sizeof("ISO2022CN")];
    char stringpool_str247[sizeof("CP01147")];
    char stringpool_str257[sizeof("CSISO2022CN")];
    char stringpool_str260[sizeof("BIG5")];
    char stringpool_str263[sizeof("ISO88594")];
    char stringpool_str264[sizeof("HPROMAN8")];
    char stringpool_str265[sizeof("437")];
    char stringpool_str267[sizeof("ISO88598")];
    char stringpool_str268[sizeof("ISO885914")];
    char stringpool_str269[sizeof("IBM1166")];
    char stringpool_str270[sizeof("IBM1156")];
    char stringpool_str271[sizeof("IBM1165")];
    char stringpool_str272[sizeof("IBM1155")];
    char stringpool_str277[sizeof("IBM1161")];
    char stringpool_str278[sizeof("IBM866")];
    char stringpool_str279[sizeof("IBM856")];
    char stringpool_str280[sizeof("IBM865")];
    char stringpool_str281[sizeof("IBM855")];
    char stringpool_str285[sizeof("IBM1146")];
    char stringpool_str286[sizeof("IBM861")];
    char stringpool_str287[sizeof("IBM1145")];
    char stringpool_str292[sizeof("ISO885910")];
    char stringpool_str293[sizeof("IBM1141")];
    char stringpool_str301[sizeof("IBM1164")];
    char stringpool_str302[sizeof("IBM1154")];
    char stringpool_str306[sizeof("IBM1158")];
    char stringpool_str309[sizeof("IBM1046")];
    char stringpool_str310[sizeof("IBM864")];
    char stringpool_str314[sizeof("IBM01146")];
    char stringpool_str315[sizeof("IBM858")];
    char stringpool_str316[sizeof("IBM01145")];
    char stringpool_str317[sizeof("IBM1144")];
    char stringpool_str319[sizeof("CP00924")];
    char stringpool_str321[sizeof("IBM1148")];
    char stringpool_str322[sizeof("IBM01141")];
    char stringpool_str323[sizeof("CP01143")];
    char stringpool_str324[sizeof("CCSID01147")];
    char stringpool_str325[sizeof("IBM1160")];
    char stringpool_str326[sizeof("CSBIG5")];
    char stringpool_str328[sizeof("BIGFIVE")];
    char stringpool_str329[sizeof("IBM1125")];
    char stringpool_str333[sizeof("CNS11643")];
    char stringpool_str334[sizeof("IBM860")];
    char stringpool_str335[sizeof("IBM850")];
    char stringpool_str336[sizeof("IBM425")];
    char stringpool_str338[sizeof("IBM285")];
    char stringpool_str341[sizeof("IBM1140")];
    char stringpool_str342[sizeof("EBCDICCPIS")];
    char stringpool_str343[sizeof("CNBIG5")];
    char stringpool_str344[sizeof("IBM16804")];
    char stringpool_str345[sizeof("IBM500")];
    char stringpool_str346[sizeof("IBM01144")];
    char stringpool_str347[sizeof("ISO88592")];
    char stringpool_str350[sizeof("IBM01148")];
    char stringpool_str351[sizeof("IBM1026")];
    char stringpool_str352[sizeof("IBM880")];
    char stringpool_str353[sizeof("IBM1025")];
    char stringpool_str354[sizeof("EBCDICCPCA")];
    char stringpool_str355[sizeof("EBCDICCPFI")];
    char stringpool_str358[sizeof("EBCDICCPES")];
    char stringpool_str359[sizeof("IBM1124")];
    char stringpool_str360[sizeof("CSIBM1161")];
    char stringpool_str361[sizeof("CSIBM866")];
    char stringpool_str363[sizeof("CSIBM865")];
    char stringpool_str364[sizeof("CSIBM855")];
    char stringpool_str365[sizeof("CCSID853")];
    char stringpool_str366[sizeof("IBM424")];
    char stringpool_str368[sizeof("IBM284")];
    char stringpool_str369[sizeof("CSIBM861")];
    char stringpool_str370[sizeof("IBM01140")];
    char stringpool_str373[sizeof("IBM00858")];
    char stringpool_str374[sizeof("EBCDICCPSE")];
    char stringpool_str375[sizeof("C99")];
    char stringpool_str384[sizeof("IBM875")];
    char stringpool_str385[sizeof("IBM1162")];
    char stringpool_str389[sizeof("IBM1112")];
    char stringpool_str390[sizeof("IBM871")];
    char stringpool_str392[sizeof("IBM280")];
    char stringpool_str393[sizeof("CSIBM864")];
    char stringpool_str394[sizeof("IBM862")];
    char stringpool_str395[sizeof("IBM852")];
    char stringpool_str396[sizeof("CCSID00924")];
    char stringpool_str398[sizeof("CSIBM858")];
    char stringpool_str399[sizeof("CSIBM01145")];
    char stringpool_str400[sizeof("CCSID01143")];
    char stringpool_str401[sizeof("IBM1142")];
    char stringpool_str405[sizeof("CSIBM01141")];
    char stringpool_str411[sizeof("CP01149")];
    char stringpool_str412[sizeof("CSIBM1125")];
    char stringpool_str413[sizeof("EBCDICCPNO")];
    char stringpool_str417[sizeof("CSIBM860")];
    char stringpool_str419[sizeof("IBM1131")];
    char stringpool_str421[sizeof("CSIBM285")];
    char stringpool_str424[sizeof("ANSIX3.41986")];
    char stringpool_str428[sizeof("CSIBM500")];
    char stringpool_str430[sizeof("IBM01142")];
    char stringpool_str433[sizeof("CSIBM01148")];
    char stringpool_str434[sizeof("CSIBM1026")];
    char stringpool_str435[sizeof("CSIBM880")];
    char stringpool_str437[sizeof("BIG5HKSCS")];
    char stringpool_str438[sizeof("IBM870")];
    char stringpool_str439[sizeof("ISO88597")];
    char stringpool_str440[sizeof("IBM1252")];
    char stringpool_str442[sizeof("ANSIX3.41968")];
    char stringpool_str443[sizeof("IBM1122")];
    char stringpool_str448[sizeof("KSC56011987")];
    char stringpool_str449[sizeof("CSIBM424")];
    char stringpool_str451[sizeof("CSIBM284")];
    char stringpool_str452[sizeof("IBM282")];
    char stringpool_str453[sizeof("CSIBM01140")];
    char stringpool_str455[sizeof("EBCDICCPHE")];
    char stringpool_str456[sizeof("IBM838")];
    char stringpool_str458[sizeof("IBM278")];
    char stringpool_str459[sizeof("EBCDICES284+EURO")];
    char stringpool_str467[sizeof("IBM1130")];
    char stringpool_str468[sizeof("CSIBM1162")];
    char stringpool_str470[sizeof("IBM775")];
    char stringpool_str473[sizeof("CSIBM871")];
    char stringpool_str475[sizeof("CSIBM280")];
    char stringpool_str476[sizeof("IBM905")];
    char stringpool_str478[sizeof("IBM1157")];
    char stringpool_str479[sizeof("CSWINDOWS1256")];
    char stringpool_str480[sizeof("CSWINDOWS1255")];
    char stringpool_str483[sizeof("CSWINDOWS1251")];
    char stringpool_str484[sizeof("TCVN")];
    char stringpool_str487[sizeof("IBM857")];
    char stringpool_str488[sizeof("CCSID01149")];
    char stringpool_str489[sizeof("EBCDICIS871+EURO")];
    char stringpool_str492[sizeof("PT154")];
    char stringpool_str493[sizeof("IBM1147")];
    char stringpool_str495[sizeof("CSWINDOWS1254")];
    char stringpool_str497[sizeof("CSWINDOWS1258")];
    char stringpool_str500[sizeof("CSPTCP154")];
    char stringpool_str504[sizeof("EBCDICCPCH")];
    char stringpool_str506[sizeof("PTCP154")];
    char stringpool_str507[sizeof("CSWINDOWS1250")];
    char stringpool_str508[sizeof("CSWINDOWS874")];
    char stringpool_str509[sizeof("TDS565")];
    char stringpool_str512[sizeof("IBM921")];
    char stringpool_str513[sizeof("CSIBM01142")];
    char stringpool_str515[sizeof("ISO88593")];
    char stringpool_str517[sizeof("IBM1047")];
    char stringpool_str520[sizeof("ISO885913")];
    char stringpool_str521[sizeof("CSIBM870")];
    char stringpool_str522[sizeof("IBM01147")];
    char stringpool_str527[sizeof("IBM1132")];
    char stringpool_str529[sizeof("CNGB")];
    char stringpool_str530[sizeof("KSC56011989")];
    char stringpool_str536[sizeof("IBM924")];
    char stringpool_str537[sizeof("CSWINDOWS1252")];
    char stringpool_str541[sizeof("CSIBM278")];
    char stringpool_str542[sizeof("EBCDICFI278+EURO")];
    char stringpool_str545[sizeof("EBCDICSE278+EURO")];
    char stringpool_str548[sizeof("IBM12712")];
    char stringpool_str553[sizeof("IBM1163")];
    char stringpool_str554[sizeof("IBM1153")];
    char stringpool_str559[sizeof("CSIBM905")];
    char stringpool_str562[sizeof("IBM863")];
    char stringpool_str563[sizeof("IBM853")];
    char stringpool_str566[sizeof("TIS620")];
    char stringpool_str569[sizeof("IBM1143")];
    char stringpool_str570[sizeof("CSIBM857")];
    char stringpool_str573[sizeof("EBCDICNO277+EURO")];
    char stringpool_str575[sizeof("IBM4971")];
    char stringpool_str580[sizeof("EBCDICCPDK")];
    char stringpool_str582[sizeof("CSGB2312")];
    char stringpool_str583[sizeof("CSWINDOWS1257")];
    char stringpool_str588[sizeof("CSMACINTOSH")];
    char stringpool_str594[sizeof("IBM00924")];
    char stringpool_str595[sizeof("TIS6200")];
    char stringpool_str598[sizeof("IBM01143")];
    char stringpool_str599[sizeof("EBCDICDE273+EURO")];
    char stringpool_str600[sizeof("CSIBM1047")];
    char stringpool_str603[sizeof("ISO88599")];
    char stringpool_str605[sizeof("CSIBM01147")];
    char stringpool_str610[sizeof("IBM367")];
    char stringpool_str611[sizeof("IBM1123")];
    char stringpool_str618[sizeof("IBM423")];
    char stringpool_str619[sizeof("IBM1137")];
    char stringpool_str620[sizeof("IBM922")];
    char stringpool_str621[sizeof("CSWINDOWS1253")];
    char stringpool_str623[sizeof("SYSTEM1125")];
    char stringpool_str626[sizeof("IBM437")];
    char stringpool_str627[sizeof("MACTHAI")];
    char stringpool_str628[sizeof("EBCDICCPBE")];
    char stringpool_str630[sizeof("IBM277")];
    char stringpool_str634[sizeof("ISOIR6")];
    char stringpool_str636[sizeof("CSIBM1163")];
    char stringpool_str638[sizeof("IBM037")];
    char stringpool_str640[sizeof("ISOIR166")];
    char stringpool_str642[sizeof("ISOIR165")];
    char stringpool_str645[sizeof("CSIBM863")];
    char stringpool_str646[sizeof("CSIBM853")];
    char stringpool_str647[sizeof("TCVN57121")];
    char stringpool_str650[sizeof("IBM869")];
    char stringpool_str654[sizeof("IBM819")];
    char stringpool_str657[sizeof("IBM1149")];
    char stringpool_str661[sizeof("BIG52003")];
    char stringpool_str663[sizeof("XMACTHAI")];
    char stringpool_str664[sizeof("HZGB2312")];
    char stringpool_str665[sizeof("TIS620.25291")];
    char stringpool_str666[sizeof("R8")];
    char stringpool_str667[sizeof("GBK")];
    char stringpool_str669[sizeof("US")];
    char stringpool_str671[sizeof("ISOIR14")];
    char stringpool_str672[sizeof("ISOIR58")];
    char stringpool_str674[sizeof("USASCII")];
    char stringpool_str675[sizeof("EBCDICDK277+EURO")];
    char stringpool_str676[sizeof("ISOIR101")];
    char stringpool_str677[sizeof("CSIBM00924")];
    char stringpool_str678[sizeof("ARMSCII8")];
    char stringpool_str681[sizeof("CSIBM01143")];
    char stringpool_str685[sizeof("ISO646.IRV:1991")];
    char stringpool_str686[sizeof("IBM01149")];
    char stringpool_str687[sizeof("IBM1097")];
    char stringpool_str688[sizeof("ISOIR144")];
    char stringpool_str691[sizeof("ISO646US")];
    char stringpool_str692[sizeof("ISOIR148")];
    char stringpool_str693[sizeof("ISO2022CNEXT")];
    char stringpool_str696[sizeof("TCVN5712")];
    char stringpool_str698[sizeof("ISOIR126")];
    char stringpool_str699[sizeof("IBM1129")];
    char stringpool_str700[sizeof("ISOIR110")];
    char stringpool_str701[sizeof("CSIBM423")];
    char stringpool_str703[sizeof("UCS4")];
    char stringpool_str704[sizeof("IBM932")];
    char stringpool_str705[sizeof("IBMCP1133")];
    char stringpool_str706[sizeof("IBM273")];
    char stringpool_str709[sizeof("L6")];
    char stringpool_str711[sizeof("L5")];
    char stringpool_str712[sizeof("IBM297")];
    char stringpool_str713[sizeof("CSIBM277")];
    char stringpool_str714[sizeof("IBM737")];
    char stringpool_str717[sizeof("L1")];
    char stringpool_str719[sizeof("CSISO58GB231280")];
    char stringpool_str720[sizeof("ROMAN8")];
    char stringpool_str721[sizeof("CSIBM037")];
    char stringpool_str722[sizeof("EUCCN")];
    char stringpool_str724[sizeof("ISOIR100")];
    char stringpool_str733[sizeof("CSIBM869")];
    char stringpool_str736[sizeof("LATIN6")];
    char stringpool_str738[sizeof("LATIN5")];
    char stringpool_str739[sizeof("CSISO57GB1988")];
    char stringpool_str740[sizeof("SJIS")];
    char stringpool_str741[sizeof("L4")];
    char stringpool_str742[sizeof("L10")];
    char stringpool_str743[sizeof("ISO10646UCS4")];
    char stringpool_str744[sizeof("LATIN1")];
    char stringpool_str745[sizeof("L8")];
    char stringpool_str746[sizeof("IBM943")];
    char stringpool_str748[sizeof("MACINTOSH")];
    char stringpool_str749[sizeof("TIS620.25331")];
    char stringpool_str751[sizeof("UHC")];
    char stringpool_str752[sizeof("ISOIR226")];
    char stringpool_str754[sizeof("JP")];
    char stringpool_str758[sizeof("JAVA")];
    char stringpool_str760[sizeof("STRK10482002")];
    char stringpool_str768[sizeof("LATIN4")];
    char stringpool_str769[sizeof("CSIBM01149")];
    char stringpool_str772[sizeof("LATIN8")];
    char stringpool_str773[sizeof("TIS620.25330")];
    char stringpool_str776[sizeof("ISO646JP")];
    char stringpool_str785[sizeof("ISO10646UCS2")];
    char stringpool_str787[sizeof("UCS2")];
    char stringpool_str789[sizeof("CSIBM273")];
    char stringpool_str794[sizeof("IBMTHAI")];
    char stringpool_str795[sizeof("CSIBM297")];
    char stringpool_str797[sizeof("LATIN10")];
    char stringpool_str802[sizeof("UNICODE11")];
    char stringpool_str806[sizeof("RK1048")];
    char stringpool_str813[sizeof("CSHPROMAN8")];
    char stringpool_str818[sizeof("ISOIR138")];
    char stringpool_str823[sizeof("GB18030")];
    char stringpool_str825[sizeof("L2")];
    char stringpool_str827[sizeof("CSISO14JISC6220RO")];
    char stringpool_str840[sizeof("GB2312")];
    char stringpool_str844[sizeof("ISOIR57")];
    char stringpool_str847[sizeof("MSKANJI")];
    char stringpool_str849[sizeof("ISOIR157")];
    char stringpool_str852[sizeof("LATIN2")];
    char stringpool_str857[sizeof("EBCDICINTERNATIONAL500+EURO")];
    char stringpool_str858[sizeof("GB231280")];
    char stringpool_str861[sizeof("ISOIR87")];
    char stringpool_str868[sizeof("MACROMANIA")];
    char stringpool_str871[sizeof("MACROMAN")];
    char stringpool_str876[sizeof("GB198880")];
    char stringpool_str877[sizeof("CSIBMTHAI")];
    char stringpool_str881[sizeof("XMACICELANDIC")];
    char stringpool_str882[sizeof("DECKOREAN")];
    char stringpool_str883[sizeof("WINDOWS1256")];
    char stringpool_str884[sizeof("WINDOWS1255")];
    char stringpool_str886[sizeof("TIS620.2533")];
    char stringpool_str887[sizeof("WINDOWS1251")];
    char stringpool_str889[sizeof("EBCDICIT280+EURO")];
    char stringpool_str892[sizeof("ISOIR230")];
    char stringpool_str893[sizeof("JIS0208")];
    char stringpool_str894[sizeof("ARABIC")];
    char stringpool_str899[sizeof("WINDOWS1254")];
    char stringpool_str901[sizeof("WINDOWS1258")];
    char stringpool_str904[sizeof("TACTIS")];
    char stringpool_str906[sizeof("ISOIR127")];
    char stringpool_str907[sizeof("JISX0201")];
    char stringpool_str910[sizeof("XMACROMANIAN")];
    char stringpool_str911[sizeof("WINDOWS1250")];
    char stringpool_str914[sizeof("SDECKANJI")];
    char stringpool_str917[sizeof("L7")];
    char stringpool_str918[sizeof("CSISO87JISX0208")];
    char stringpool_str929[sizeof("DECKANJI")];
    char stringpool_str932[sizeof("MSGREEK")];
    char stringpool_str935[sizeof("JISX0208")];
    char stringpool_str941[sizeof("WINDOWS1252")];
    char stringpool_str943[sizeof("CNGBISOIR165")];
    char stringpool_str944[sizeof("LATIN7")];
    char stringpool_str950[sizeof("CSEUCPKDFMTJAPANESE")];
    char stringpool_str951[sizeof("MACICELAND")];
    char stringpool_str953[sizeof("EXTENDEDUNIXCODEPACKEDFORMATFORJAPANESE")];
    char stringpool_str960[sizeof("CSISO2022KR")];
    char stringpool_str963[sizeof("ISO2022JP")];
    char stringpool_str964[sizeof("ISO2022JP1")];
    char stringpool_str965[sizeof("NEXTSTEP")];
    char stringpool_str966[sizeof("ISO885916:2001")];
    char stringpool_str968[sizeof("EBCDICCYRILLIC")];
    char stringpool_str971[sizeof("JISX0212.19900")];
    char stringpool_str973[sizeof("WINDOWS874")];
    char stringpool_str975[sizeof("UCS4BE")];
    char stringpool_str979[sizeof("IBMEUCCN")];
    char stringpool_str980[sizeof("ISO88595:1988")];
    char stringpool_str981[sizeof("ISO885915:1998")];
    char stringpool_str984[sizeof("CSISO2022JP")];
    char stringpool_str987[sizeof("WINDOWS1257")];
    char stringpool_str990[sizeof("MACARABIC")];
    char stringpool_str991[sizeof("JISX0212")];
    char stringpool_str993[sizeof("L3")];
    char stringpool_str995[sizeof("ISO88594:1988")];
    char stringpool_str996[sizeof("ISO885914:1998")];
    char stringpool_str997[sizeof("ISO88598:1988")];
    char stringpool_str1002[sizeof("CSISO159JISX02121990")];
    char stringpool_str1006[sizeof("ISOIR203")];
    char stringpool_str1009[sizeof("EBCDICCPUS")];
    char stringpool_str1013[sizeof("ISOIR159")];
    char stringpool_str1015[sizeof("EBCDICGB285+EURO")];
    char stringpool_str1016[sizeof("EBCDICCPROECE")];
    char stringpool_str1017[sizeof("UCS2BE")];
    char stringpool_str1020[sizeof("LATIN3")];
    char stringpool_str1025[sizeof("WINDOWS1253")];
    char stringpool_str1026[sizeof("XMACARABIC")];
    char stringpool_str1028[sizeof("ISOIR149")];
    char stringpool_str1033[sizeof("ISO2022JP2004")];
    char stringpool_str1034[sizeof("KOI8T")];
    char stringpool_str1035[sizeof("CSISO2022JP2")];
    char stringpool_str1038[sizeof("ISO2022JPMS")];
    char stringpool_str1040[sizeof("ISOIR109")];
    char stringpool_str1048[sizeof("ISO885910:1992")];
    char stringpool_str1062[sizeof("WINDOWS950")];
    char stringpool_str1065[sizeof("ISO88596:1987")];
    char stringpool_str1069[sizeof("ISO88591:1987")];
    char stringpool_str1072[sizeof("ISO2022JP2")];
    char stringpool_str1085[sizeof("ATARI")];
    char stringpool_str1096[sizeof("GREEK8")];
    char stringpool_str1097[sizeof("JISX02011976")];
    char stringpool_str1108[sizeof("LATIN9")];
    char stringpool_str1111[sizeof("JISC62201969RO")];
    char stringpool_str1116[sizeof("ISOIR179")];
    char stringpool_str1121[sizeof("ISO88593:1988")];
    char stringpool_str1122[sizeof("UTF16")];
    char stringpool_str1123[sizeof("ISO88592:1987")];
    char stringpool_str1139[sizeof("JISX02081990")];
    char stringpool_str1147[sizeof("WINDOWS936")];
    char stringpool_str1150[sizeof("UCS4SWAPPED")];
    char stringpool_str1151[sizeof("GREEK")];
    char stringpool_str1153[sizeof("UTF8")];
    char stringpool_str1155[sizeof("JISX02121990")];
    char stringpool_str1167[sizeof("BIG5HKSCS:2001")];
    char stringpool_str1168[sizeof("EBCDICCPGB")];
    char stringpool_str1169[sizeof("ISO88597:1987")];
    char stringpool_str1178[sizeof("ISOCELTIC")];
    char stringpool_str1179[sizeof("BIG5HKSCS:2004")];
    char stringpool_str1181[sizeof("BIG5HKSCS:2008")];
    char stringpool_str1189[sizeof("CSPC775BALTIC")];
    char stringpool_str1192[sizeof("UCS2SWAPPED")];
    char stringpool_str1196[sizeof("JISC62261983")];
    char stringpool_str1198[sizeof("ISOIR199")];
    char stringpool_str1214[sizeof("CSISOLATIN6")];
    char stringpool_str1215[sizeof("CSISOLATIN5")];
    char stringpool_str1218[sizeof("CSISOLATIN1")];
    char stringpool_str1219[sizeof("CSISOLATINARABIC")];
    char stringpool_str1221[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str1228[sizeof("MACCROATIAN")];
    char stringpool_str1229[sizeof("MSARAB")];
    char stringpool_str1230[sizeof("CSISOLATIN4")];
    char stringpool_str1234[sizeof("EBCDICCPIT")];
    char stringpool_str1240[sizeof("ISO2022JP3")];
    char stringpool_str1252[sizeof("EBCDICFR297+EURO")];
    char stringpool_str1253[sizeof("JISX02081983")];
    char stringpool_str1257[sizeof("MACGREEK")];
    char stringpool_str1258[sizeof("XMACCROATIAN")];
    char stringpool_str1261[sizeof("ISO88597:2003")];
    char stringpool_str1268[sizeof("CPGR")];
    char stringpool_str1272[sizeof("CSISOLATIN2")];
    char stringpool_str1279[sizeof("EBCDICUS37+EURO")];
    char stringpool_str1282[sizeof("JOHAB")];
    char stringpool_str1284[sizeof("SHIFTJIS")];
    char stringpool_str1286[sizeof("CSSHIFTJIS")];
    char stringpool_str1293[sizeof("XMACGREEK")];
    char stringpool_str1308[sizeof("CSKOI8R")];
    char stringpool_str1310[sizeof("CSISOLATINGREEK")];
    char stringpool_str1321[sizeof("GEORGIANPS")];
    char stringpool_str1325[sizeof("UTF7")];
    char stringpool_str1326[sizeof("GEORGIANACADEMY")];
    char stringpool_str1333[sizeof("ISO88599:1989")];
    char stringpool_str1349[sizeof("BIG5HKSCS:1999")];
    char stringpool_str1356[sizeof("CSISOLATIN3")];
    char stringpool_str1376[sizeof("UTF32")];
    char stringpool_str1390[sizeof("SHIFTJIS2004")];
    char stringpool_str1398[sizeof("KOI8R")];
    char stringpool_str1405[sizeof("EBCDICGREEK")];
    char stringpool_str1410[sizeof("UTF16BE")];
    char stringpool_str1424[sizeof("CYRILLIC")];
    char stringpool_str1428[sizeof("UCS4LE")];
    char stringpool_str1440[sizeof("EUCJP")];
    char stringpool_str1452[sizeof("CYRILLICASIAN")];
    char stringpool_str1456[sizeof("ELOT928")];
    char stringpool_str1470[sizeof("UCS2LE")];
    char stringpool_str1475[sizeof("HEBREW")];
    char stringpool_str1476[sizeof("KOI8U")];
    char stringpool_str1500[sizeof("SHIFTJISX0213")];
    char stringpool_str1511[sizeof("TCVN57121:1993")];
    char stringpool_str1518[sizeof("DECHANYU")];
    char stringpool_str1520[sizeof("MULELAO1")];
    char stringpool_str1526[sizeof("EBCDICLATIN9EURO")];
    char stringpool_str1539[sizeof("MACUKRAINE")];
    char stringpool_str1559[sizeof("ISO2022KR")];
    char stringpool_str1562[sizeof("XMACUKRAINIAN")];
    char stringpool_str1566[sizeof("MSTURK")];
    char stringpool_str1573[sizeof("UNICODE11UTF7")];
    char stringpool_str1575[sizeof("EUCJIS2004")];
    char stringpool_str1583[sizeof("CSISOLATINHEBREW")];
    char stringpool_str1598[sizeof("EBCDICCPWT")];
    char stringpool_str1606[sizeof("UTF32BE")];
    char stringpool_str1608[sizeof("GB18030:2005")];
    char stringpool_str1611[sizeof("EBCDICCPFR")];
    char stringpool_str1613[sizeof("MSHEBR")];
    char stringpool_str1615[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str1617[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str1665[sizeof("GB18030:2022")];
    char stringpool_str1675[sizeof("KOKR.JOHAP92")];
    char stringpool_str1678[sizeof("EBCDICCPYU")];
    char stringpool_str1681[sizeof("UNICODEBIG")];
    char stringpool_str1697[sizeof("IBMEUCJP")];
    char stringpool_str1703[sizeof("EUCJISX0213")];
    char stringpool_str1773[sizeof("EBCDICCPNL")];
    char stringpool_str1819[sizeof("MACHEBREW")];
    char stringpool_str1830[sizeof("RISCOSLATIN1")];
    char stringpool_str1848[sizeof("CSEUCTW")];
    char stringpool_str1855[sizeof("XMACHEBREW")];
    char stringpool_str1862[sizeof("EUCTW")];
    char stringpool_str1863[sizeof("UTF16LE")];
    char stringpool_str1916[sizeof("EBCDICCPGR")];
    char stringpool_str1939[sizeof("MACCENTRALEUROPE")];
    char stringpool_str1963[sizeof("UNICODELITTLE")];
    char stringpool_str1979[sizeof("ATARIST")];
    char stringpool_str2022[sizeof("CSEUCKR")];
    char stringpool_str2036[sizeof("EUCKR")];
    char stringpool_str2044[sizeof("EBCDICCPTR")];
    char stringpool_str2047[sizeof("XMACTURKISH")];
    char stringpool_str2059[sizeof("UTF32LE")];
    char stringpool_str2092[sizeof("MACTURKISH")];
    char stringpool_str2105[sizeof("KOI8RU")];
    char stringpool_str2119[sizeof("IBMEUCTW")];
    char stringpool_str2131[sizeof("MSCYRL")];
    char stringpool_str2142[sizeof("MACCYRILLIC")];
    char stringpool_str2178[sizeof("XMACCYRILLIC")];
    char stringpool_str2228[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str2293[sizeof("IBMEUCKR")];
    char stringpool_str2526[sizeof("UCS4INTERNAL")];
    char stringpool_str2568[sizeof("UCS2INTERNAL")];
    char stringpool_str2577[sizeof("WINBALTRIM")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "CSASCII",
    "CSVISCII",
    "ASCII",
    "CPIS",
    "5601",
    "1125",
    "646",
    "866",
    "865",
    "855",
    "861",
    "VISCII",
    "CP285",
    "CN",
    "CSUCS4",
    "CP01146",
    "858",
    "CP01145",
    "CP01141",
    "VISCII1.11",
    "860",
    "850",
    "ISO646CN",
    "ECMA114",
    "CP01144",
    "ECMA118",
    "CP01148",
    "862",
    "852",
    "HZ",
    "MAC",
    "CSKZ1048",
    "CP01140",
    "ANSI1251",
    "PCK",
    "MSANSI",
    "X0201",
    "CCSID01146",
    "MSEE",
    "CCSID01145",
    "CCSID01141",
    "857",
    "CP1250",
    "HP15CN",
    "CSUNICODE11",
    "KSC5601",
    "X0208",
    "CSUNICODE",
    "CSPC8CODEPAGE1146",
    "CCSID01144",
    "CSPCP852",
    "CCSID01148",
    "CHINESE",
    "CSKSC56011987",
    "CP01142",
    "CSPC8CODEPAGE1144",
    "XMACCE",
    "863",
    "853",
    "CCSID01140",
    "CP870",
    "KZ1048",
    "KOREAN",
    "DECHANZI",
    "X0212",
    "869",
    "ASMO708",
    "DOS862",
    "MS936",
    "ISO88596",
    "CCSID01142",
    "ISO88595",
    "ISO885916",
    "CSUNICODE11UTF7",
    "ISO885915",
    "ISO88591",
    "CSPC8CODEPAGE437",
    "ISO885911",
    "ISO2022CN",
    "CP01147",
    "CSISO2022CN",
    "BIG5",
    "ISO88594",
    "HPROMAN8",
    "437",
    "ISO88598",
    "ISO885914",
    "IBM1166",
    "IBM1156",
    "IBM1165",
    "IBM1155",
    "IBM1161",
    "IBM866",
    "IBM856",
    "IBM865",
    "IBM855",
    "IBM1146",
    "IBM861",
    "IBM1145",
    "ISO885910",
    "IBM1141",
    "IBM1164",
    "IBM1154",
    "IBM1158",
    "IBM1046",
    "IBM864",
    "IBM01146",
    "IBM858",
    "IBM01145",
    "IBM1144",
    "CP00924",
    "IBM1148",
    "IBM01141",
    "CP01143",
    "CCSID01147",
    "IBM1160",
    "CSBIG5",
    "BIGFIVE",
    "IBM1125",
    "CNS11643",
    "IBM860",
    "IBM850",
    "IBM425",
    "IBM285",
    "IBM1140",
    "EBCDICCPIS",
    "CNBIG5",
    "IBM16804",
    "IBM500",
    "IBM01144",
    "ISO88592",
    "IBM01148",
    "IBM1026",
    "IBM880",
    "IBM1025",
    "EBCDICCPCA",
    "EBCDICCPFI",
    "EBCDICCPES",
    "IBM1124",
    "CSIBM1161",
    "CSIBM866",
    "CSIBM865",
    "CSIBM855",
    "CCSID853",
    "IBM424",
    "IBM284",
    "CSIBM861",
    "IBM01140",
    "IBM00858",
    "EBCDICCPSE",
    "C99",
    "IBM875",
    "IBM1162",
    "IBM1112",
    "IBM871",
    "IBM280",
    "CSIBM864",
    "IBM862",
    "IBM852",
    "CCSID00924",
    "CSIBM858",
    "CSIBM01145",
    "CCSID01143",
    "IBM1142",
    "CSIBM01141",
    "CP01149",
    "CSIBM1125",
    "EBCDICCPNO",
    "CSIBM860",
    "IBM1131",
    "CSIBM285",
    "ANSIX3.41986",
    "CSIBM500",
    "IBM01142",
    "CSIBM01148",
    "CSIBM1026",
    "CSIBM880",
    "BIG5HKSCS",
    "IBM870",
    "ISO88597",
    "IBM1252",
    "ANSIX3.41968",
    "IBM1122",
    "KSC56011987",
    "CSIBM424",
    "CSIBM284",
    "IBM282",
    "CSIBM01140",
    "EBCDICCPHE",
    "IBM838",
    "IBM278",
    "EBCDICES284+EURO",
    "IBM1130",
    "CSIBM1162",
    "IBM775",
    "CSIBM871",
    "CSIBM280",
    "IBM905",
    "IBM1157",
    "CSWINDOWS1256",
    "CSWINDOWS1255",
    "CSWINDOWS1251",
    "TCVN",
    "IBM857",
    "CCSID01149",
    "EBCDICIS871+EURO",
    "PT154",
    "IBM1147",
    "CSWINDOWS1254",
    "CSWINDOWS1258",
    "CSPTCP154",
    "EBCDICCPCH",
    "PTCP154",
    "CSWINDOWS1250",
    "CSWINDOWS874",
    "TDS565",
    "IBM921",
    "CSIBM01142",
    "ISO88593",
    "IBM1047",
    "ISO885913",
    "CSIBM870",
    "IBM01147",
    "IBM1132",
    "CNGB",
    "KSC56011989",
    "IBM924",
    "CSWINDOWS1252",
    "CSIBM278",
    "EBCDICFI278+EURO",
    "EBCDICSE278+EURO",
    "IBM12712",
    "IBM1163",
    "IBM1153",
    "CSIBM905",
    "IBM863",
    "IBM853",
    "TIS620",
    "IBM1143",
    "CSIBM857",
    "EBCDICNO277+EURO",
    "IBM4971",
    "EBCDICCPDK",
    "CSGB2312",
    "CSWINDOWS1257",
    "CSMACINTOSH",
    "IBM00924",
    "TIS6200",
    "IBM01143",
    "EBCDICDE273+EURO",
    "CSIBM1047",
    "ISO88599",
    "CSIBM01147",
    "IBM367",
    "IBM1123",
    "IBM423",
    "IBM1137",
    "IBM922",
    "CSWINDOWS1253",
    "SYSTEM1125",
    "IBM437",
    "MACTHAI",
    "EBCDICCPBE",
    "IBM277",
    "ISOIR6",
    "CSIBM1163",
    "IBM037",
    "ISOIR166",
    "ISOIR165",
    "CSIBM863",
    "CSIBM853",
    "TCVN57121",
    "IBM869",
    "IBM819",
    "IBM1149",
    "BIG52003",
    "XMACTHAI",
    "HZGB2312",
    "TIS620.25291",
    "R8",
    "GBK",
    "US",
    "ISOIR14",
    "ISOIR58",
    "USASCII",
    "EBCDICDK277+EURO",
    "ISOIR101",
    "CSIBM00924",
    "ARMSCII8",
    "CSIBM01143",
    "ISO646.IRV:1991",
    "IBM01149",
    "IBM1097",
    "ISOIR144",
    "ISO646US",
    "ISOIR148",
    "ISO2022CNEXT",
    "TCVN5712",
    "ISOIR126",
    "IBM1129",
    "ISOIR110",
    "CSIBM423",
    "UCS4",
    "IBM932",
    "IBMCP1133",
    "IBM273",
    "L6",
    "L5",
    "IBM297",
    "CSIBM277",
    "IBM737",
    "L1",
    "CSISO58GB231280",
    "ROMAN8",
    "CSIBM037",
    "EUCCN",
    "ISOIR100",
    "CSIBM869",
    "LATIN6",
    "LATIN5",
    "CSISO57GB1988",
    "SJIS",
    "L4",
    "L10",
    "ISO10646UCS4",
    "LATIN1",
    "L8",
    "IBM943",
    "MACINTOSH",
    "TIS620.25331",
    "UHC",
    "ISOIR226",
    "JP",
    "JAVA",
    "STRK10482002",
    "LATIN4",
    "CSIBM01149",
    "LATIN8",
    "TIS620.25330",
    "ISO646JP",
    "ISO10646UCS2",
    "UCS2",
    "CSIBM273",
    "IBMTHAI",
    "CSIBM297",
    "LATIN10",
    "UNICODE11",
    "RK1048",
    "CSHPROMAN8",
    "ISOIR138",
    "GB18030",
    "L2",
    "CSISO14JISC6220RO",
    "GB2312",
    "ISOIR57",
    "MSKANJI",
    "ISOIR157",
    "LATIN2",
    "EBCDICINTERNATIONAL500+EURO",
    "GB231280",
    "ISOIR87",
    "MACROMANIA",
    "MACROMAN",
    "GB198880",
    "CSIBMTHAI",
    "XMACICELANDIC",
    "DECKOREAN",
    "WINDOWS1256",
    "WINDOWS1255",
    "TIS620.2533",
    "WINDOWS1251",
    "EBCDICIT280+EURO",
    "ISOIR230",
    "JIS0208",
    "ARABIC",
    "WINDOWS1254",
    "WINDOWS1258",
    "TACTIS",
    "ISOIR127",
    "JISX0201",
    "XMACROMANIAN",
    "WINDOWS1250",
    "SDECKANJI",
    "L7",
    "CSISO87JISX0208",
    "DECKANJI",
    "MSGREEK",
    "JISX0208",
    "WINDOWS1252",
    "CNGBISOIR165",
    "LATIN7",
    "CSEUCPKDFMTJAPANESE",
    "MACICELAND",
    "EXTENDEDUNIXCODEPACKEDFORMATFORJAPANESE",
    "CSISO2022KR",
    "ISO2022JP",
    "ISO2022JP1",
    "NEXTSTEP",
    "ISO885916:2001",
    "EBCDICCYRILLIC",
    "JISX0212.19900",
    "WINDOWS874",
    "UCS4BE",
    "IBMEUCCN",
    "ISO88595:1988",
    "ISO885915:1998",
    "CSISO2022JP",
    "WINDOWS1257",
    "MACARABIC",
    "JISX0212",
    "L3",
    "ISO88594:1988",
    "ISO885914:1998",
    "ISO88598:1988",
    "CSISO159JISX02121990",
    "ISOIR203",
    "EBCDICCPUS",
    "ISOIR159",
    "EBCDICGB285+EURO",
    "EBCDICCPROECE",
    "UCS2BE",
    "LATIN3",
    "WINDOWS1253",
    "XMACARABIC",
    "ISOIR149",
    "ISO2022JP2004",
    "KOI8T",
    "CSISO2022JP2",
    "ISO2022JPMS",
    "ISOIR109",
    "ISO885910:1992",
    "WINDOWS950",
    "ISO88596:1987",
    "ISO88591:1987",
    "ISO2022JP2",
    "ATARI",
    "GREEK8",
    "JISX02011976",
    "LATIN9",
    "JISC62201969RO",
    "ISOIR179",
    "ISO88593:1988",
    "UTF16",
    "ISO88592:1987",
    "JISX02081990",
    "WINDOWS936",
    "UCS4SWAPPED",
    "GREEK",
    "UTF8",
    "JISX02121990",
    "BIG5HKSCS:2001",
    "EBCDICCPGB",
    "ISO88597:1987",
    "ISOCELTIC",
    "BIG5HKSCS:2004",
    "BIG5HKSCS:2008",
    "CSPC775BALTIC",
    "UCS2SWAPPED",
    "JISC62261983",
    "ISOIR199",
    "CSISOLATIN6",
    "CSISOLATIN5",
    "CSISOLATIN1",
    "CSISOLATINARABIC",
    "CSISOLATINCYRILLIC",
    "MACCROATIAN",
    "MSARAB",
    "CSISOLATIN4",
    "EBCDICCPIT",
    "ISO2022JP3",
    "EBCDICFR297+EURO",
    "JISX02081983",
    "MACGREEK",
    "XMACCROATIAN",
    "ISO88597:2003",
    "CPGR",
    "CSISOLATIN2",
    "EBCDICUS37+EURO",
    "JOHAB",
    "SHIFTJIS",
    "CSSHIFTJIS",
    "XMACGREEK",
    "CSKOI8R",
    "CSISOLATINGREEK",
    "GEORGIANPS",
    "UTF7",
    "GEORGIANACADEMY",
    "ISO88599:1989",
    "BIG5HKSCS:1999",
    "CSISOLATIN3",
    "UTF32",
    "SHIFTJIS2004",
    "KOI8R",
    "EBCDICGREEK",
    "UTF16BE",
    "CYRILLIC",
    "UCS4LE",
    "EUCJP",
    "CYRILLICASIAN",
    "ELOT928",
    "UCS2LE",
    "HEBREW",
    "KOI8U",
    "SHIFTJISX0213",
    "TCVN57121:1993",
    "DECHANYU",
    "MULELAO1",
    "EBCDICLATIN9EURO",
    "MACUKRAINE",
    "ISO2022KR",
    "XMACUKRAINIAN",
    "MSTURK",
    "UNICODE11UTF7",
    "EUCJIS2004",
    "CSISOLATINHEBREW",
    "EBCDICCPWT",
    "UTF32BE",
    "GB18030:2005",
    "EBCDICCPFR",
    "MSHEBR",
    "CSHALFWIDTHKATAKANA",
    "CSPC862LATINHEBREW",
    "GB18030:2022",
    "KOKR.JOHAP92",
    "EBCDICCPYU",
    "UNICODEBIG",
    "IBMEUCJP",
    "EUCJISX0213",
    "EBCDICCPNL",
    "MACHEBREW",
    "RISCOSLATIN1",
    "CSEUCTW",
    "XMACHEBREW",
    "EUCTW",
    "UTF16LE",
    "EBCDICCPGR",
    "MACCENTRALEUROPE",
    "UNICODELITTLE",
    "ATARIST",
    "CSEUCKR",
    "EUCKR",
    "EBCDICCPTR",
    "XMACTURKISH",
    "UTF32LE",
    "MACTURKISH",
    "KOI8RU",
    "IBMEUCTW",
    "MSCYRL",
    "MACCYRILLIC",
    "XMACCYRILLIC",
    "CSPC850MULTILINGUAL",
    "IBMEUCKR",
    "UCS4INTERNAL",
    "UCS2INTERNAL",
    "WINBALTRIM"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 21 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str7, ei_ascii},
#line 238 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str8, ei_viscii},
    {-1}, {-1},
#line 13 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str11, ei_ascii},
#line 384 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str12, ei_cp861},
#line 336 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str13, ei_euc_kr},
#line 399 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str14, ei_cp1125},
    {-1}, {-1}, {-1}, {-1},
#line 22 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str19, ei_ascii},
    {-1},
#line 178 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str21, ei_cp866},
#line 392 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str22, ei_cp865},
#line 370 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str23, ei_cp855},
    {-1},
#line 383 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str25, ei_cp861},
    {-1}, {-1},
#line 236 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str28, ei_viscii},
    {-1}, {-1}, {-1}, {-1},
#line 426 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str33, ei_ebcdic285},
    {-1}, {-1},
#line 269 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str36, ei_iso646_cn},
    {-1},
#line 35 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str38, ei_ucs4},
#line 521 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str39, ei_ebcdic1146},
#line 376 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str40, ei_cp858},
#line 515 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str41, ei_ebcdic1145},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 489 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str47, ei_ebcdic1141},
#line 237 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str48, ei_viscii},
#line 380 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str49, ei_cp860},
#line 171 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str50, ei_cp850},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 267 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str58, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 86 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str69, ei_iso8859_6},
    {-1},
#line 509 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str71, ei_ebcdic1144},
    {-1},
#line 94 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str73, ei_iso8859_7},
    {-1},
#line 533 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str75, ei_ebcdic1148},
    {-1}, {-1}, {-1},
#line 174 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str79, ei_cp862},
#line 363 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str80, ei_cp852},
    {-1}, {-1}, {-1}, {-1},
#line 316 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str85, ei_hz},
    {-1}, {-1}, {-1}, {-1},
#line 183 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str90, ei_mac_roman},
    {-1}, {-1},
#line 223 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str93, ei_rk1048},
    {-1},
#line 483 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str95, ei_ebcdic1140},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 148 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str102, ei_cp1251},
#line 291 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str103, ei_sjis},
#line 152 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str104, ei_cp1252},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 250 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str110, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 520 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str116, ei_ebcdic1146},
#line 144 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str117, ei_cp1250},
#line 514 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str118, ei_ebcdic1145},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 488 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str124, ei_ebcdic1141},
    {-1},
#line 373 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str126, ei_cp857},
    {-1}, {-1},
#line 141 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str129, ei_cp1250},
#line 305 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str130, ei_euc_cn},
    {-1}, {-1},
#line 30 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str133, ei_ucs2be},
    {-1}, {-1},
#line 276 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str136, ei_ksc5601},
    {-1},
#line 256 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str138, ei_jisx0208},
#line 26 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str139, ei_ucs2},
#line 523 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str140, ei_ebcdic1146},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 508 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str148, ei_ebcdic1144},
    {-1}, {-1},
#line 364 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str151, ei_cp852},
#line 532 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str152, ei_ebcdic1148},
#line 303 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str153, ei_euc_cn},
#line 280 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str154, ei_ksc5601},
#line 495 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str155, ei_ebcdic1142},
#line 511 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str156, ei_ebcdic1144},
    {-1}, {-1}, {-1},
#line 186 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str160, ei_mac_centraleurope},
    {-1}, {-1},
#line 387 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163, ei_cp863},
#line 366 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str164, ei_cp853},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 482 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str172, ei_ebcdic1140},
#line 447 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str173, ei_ebcdic870},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 222 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str179, ei_rk1048},
    {-1},
#line 281 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str181, ei_ksc5601},
    {-1},
#line 306 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str183, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 263 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str194, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 395 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str207, ei_cp869},
#line 87 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str208, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 176 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str221, ei_cp862},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 308 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str228, ei_cp936},
    {-1}, {-1},
#line 83 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str231, ei_iso8859_6},
#line 494 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str232, ei_ebcdic1142},
#line 78 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str233, ei_iso8859_5},
    {-1}, {-1},
#line 132 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str236, ei_iso8859_16},
#line 46 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str237, ei_utf7},
#line 128 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str238, ei_iso8859_15},
#line 53 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str239, ei_iso8859_1},
    {-1}, {-1}, {-1},
#line 358 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str243, ei_cp437},
#line 116 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str244, ei_iso8859_11},
#line 313 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str245, ei_iso2022_cn},
    {-1},
#line 527 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str247, ei_ebcdic1147},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 314 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str257, ei_iso2022_cn},
    {-1}, {-1},
#line 322 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str260, ei_ces_big5},
    {-1}, {-1},
#line 72 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str263, ei_iso8859_4},
#line 207 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str264, ei_hp_roman8},
#line 357 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str265, ei_cp437},
    {-1},
#line 99 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str267, ei_iso8859_8},
#line 122 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str268, ei_iso8859_14},
#line 551 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str269, ei_ebcdic1166},
#line 545 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str270, ei_ebcdic1156},
#line 550 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str271, ei_ebcdic1165},
#line 544 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str272, ei_ebcdic1155},
    {-1}, {-1}, {-1}, {-1},
#line 350 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str277, ei_cp1161},
#line 177 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str278, ei_cp866},
#line 344 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str279, ei_cp856},
#line 391 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str280, ei_cp865},
#line 369 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str281, ei_cp855},
    {-1}, {-1}, {-1},
#line 518 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str285, ei_ebcdic1146},
#line 382 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str286, ei_cp861},
#line 512 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str287, ei_ebcdic1145},
    {-1}, {-1}, {-1}, {-1},
#line 110 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str292, ei_iso8859_10},
#line 486 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str293, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 549 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str301, ei_ebcdic1164},
#line 543 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str302, ei_ebcdic1154},
    {-1}, {-1}, {-1},
#line 547 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str306, ei_ebcdic1158},
    {-1}, {-1},
#line 347 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str309, ei_cp1046},
#line 389 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str310, ei_cp864},
    {-1}, {-1}, {-1},
#line 519 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str314, ei_ebcdic1146},
#line 375 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str315, ei_cp858},
#line 513 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str316, ei_ebcdic1145},
#line 506 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str317, ei_ebcdic1144},
    {-1},
#line 465 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str319, ei_ebcdic924},
    {-1},
#line 530 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str321, ei_ebcdic1148},
#line 487 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str322, ei_ebcdic1141},
#line 502 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str323, ei_ebcdic1143},
#line 526 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str324, ei_ebcdic1147},
#line 548 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str325, ei_ebcdic1160},
#line 325 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str326, ei_ces_big5},
    {-1},
#line 323 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str328, ei_ces_big5},
#line 398 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str329, ei_cp1125},
    {-1}, {-1}, {-1},
#line 321 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str333, ei_euc_tw},
#line 379 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str334, ei_cp860},
#line 170 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str335, ei_cp850},
#line 438 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str336, ei_ebcdic425},
    {-1},
#line 425 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str338, ei_ebcdic285},
    {-1}, {-1},
#line 480 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str341, ei_ebcdic1140},
#line 452 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str342, ei_ebcdic871},
#line 324 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str343, ei_ces_big5},
#line 554 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str344, ei_ebcdic16804},
#line 439 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str345, ei_ebcdic500},
#line 507 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str346, ei_ebcdic1144},
#line 60 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str347, ei_iso8859_2},
    {-1}, {-1},
#line 531 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str350, ei_ebcdic1148},
#line 469 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str351, ei_ebcdic1026},
#line 456 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str352, ei_ebcdic880},
#line 468 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str353, ei_ebcdic1025},
#line 404 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str354, ei_ebcdic037},
#line 415 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str355, ei_ebcdic278},
    {-1}, {-1},
#line 423 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str358, ei_ebcdic284},
#line 348 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str359, ei_cp1124},
#line 351 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str360, ei_cp1161},
#line 179 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str361, ei_cp866},
    {-1},
#line 393 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str363, ei_cp865},
#line 371 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str364, ei_cp855},
#line 367 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str365, ei_cp853},
#line 435 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str366, ei_ebcdic424},
    {-1},
#line 422 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str368, ei_ebcdic284},
#line 385 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str369, ei_cp861},
#line 481 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str370, ei_ebcdic1140},
    {-1}, {-1},
#line 377 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str373, ei_cp858},
#line 416 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str374, ei_ebcdic278},
#line 51 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str375, ei_c99},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 454 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str384, ei_ebcdic875},
#line 352 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str385, ei_cp1162},
    {-1}, {-1}, {-1},
#line 474 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str389, ei_ebcdic1112},
#line 451 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str390, ei_ebcdic871},
    {-1},
#line 418 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str392, ei_ebcdic280},
#line 390 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str393, ei_cp864},
#line 173 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str394, ei_cp862},
#line 362 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str395, ei_cp852},
#line 464 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str396, ei_ebcdic924},
    {-1},
#line 378 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str398, ei_cp858},
#line 517 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str399, ei_ebcdic1145},
#line 501 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str400, ei_ebcdic1143},
#line 492 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str401, ei_ebcdic1142},
    {-1}, {-1}, {-1},
#line 491 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str405, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 539 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str411, ei_ebcdic1149},
#line 401 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str412, ei_cp1125},
#line 412 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str413, ei_ebcdic277},
    {-1}, {-1}, {-1},
#line 381 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str417, ei_cp860},
    {-1},
#line 180 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str419, ei_cp1131},
    {-1},
#line 428 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421, ei_ebcdic285},
    {-1}, {-1},
#line 18 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str424, ei_ascii},
    {-1}, {-1}, {-1},
#line 442 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str428, ei_ebcdic500},
    {-1},
#line 493 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str430, ei_ebcdic1142},
    {-1}, {-1},
#line 535 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str433, ei_ebcdic1148},
#line 470 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str434, ei_ebcdic1026},
#line 458 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str435, ei_ebcdic880},
    {-1},
#line 330 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str437, ei_big5hkscs2008},
#line 446 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str438, ei_ebcdic870},
#line 90 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str439, ei_iso8859_7},
#line 151 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str440, ei_cp1252},
    {-1},
#line 17 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str442, ei_ascii},
#line 475 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str443, ei_ebcdic1122},
    {-1}, {-1}, {-1}, {-1},
#line 277 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str448, ei_ksc5601},
#line 437 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str449, ei_ebcdic424},
    {-1},
#line 424 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str451, ei_ebcdic284},
#line 421 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str452, ei_ebcdic282},
#line 485 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str453, ei_ebcdic1140},
    {-1},
#line 436 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str455, ei_ebcdic424},
#line 443 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str456, ei_ebcdic838},
    {-1},
#line 414 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str458, ei_ebcdic278},
#line 516 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str459, ei_ebcdic1145},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 477 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str467, ei_ebcdic1130},
#line 353 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str468, ei_cp1162},
    {-1},
#line 360 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str470, ei_cp775},
    {-1}, {-1},
#line 453 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str473, ei_ebcdic871},
    {-1},
#line 420 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str475, ei_ebcdic280},
#line 459 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str476, ei_ebcdic905},
    {-1},
#line 546 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str478, ei_ebcdic1157},
#line 163 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str479, ei_cp1256},
#line 160 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str480, ei_cp1255},
    {-1}, {-1},
#line 146 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str483, ei_cp1251},
#line 239 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str484, ei_tcvn},
    {-1}, {-1},
#line 372 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str487, ei_cp857},
#line 538 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str488, ei_ebcdic1149},
#line 540 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str489, ei_ebcdic1149},
    {-1}, {-1},
#line 216 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str492, ei_pt154},
#line 524 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str493, ei_ebcdic1147},
    {-1},
#line 157 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str495, ei_cp1254},
    {-1},
#line 169 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str497, ei_cp1258},
    {-1}, {-1},
#line 219 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str500, ei_pt154},
    {-1}, {-1}, {-1},
#line 441 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str504, ei_ebcdic500},
    {-1},
#line 217 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str506, ei_pt154},
#line 142 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str507, ei_cp1250},
#line 235 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str508, ei_cp874},
#line 562 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str509, ei_tds565},
    {-1}, {-1},
#line 121 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str512, ei_iso8859_13},
#line 498 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str513, ei_ebcdic1142},
    {-1},
#line 66 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str515, ei_iso8859_3},
    {-1},
#line 471 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str517, ei_ebcdic1047},
    {-1}, {-1},
#line 117 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str520, ei_iso8859_13},
#line 450 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str521, ei_ebcdic870},
#line 525 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str522, ei_ebcdic1147},
    {-1}, {-1}, {-1}, {-1},
#line 478 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str527, ei_ebcdic1132},
    {-1},
#line 301 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str529, ei_euc_cn},
#line 278 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str530, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 462 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str536, ei_ebcdic924},
#line 150 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str537, ei_cp1252},
    {-1}, {-1}, {-1},
#line 417 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str541, ei_ebcdic278},
#line 503 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str542, ei_ebcdic1143},
    {-1}, {-1},
#line 504 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str545, ei_ebcdic1143},
    {-1}, {-1},
#line 553 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str548, ei_ebcdic12712},
    {-1}, {-1}, {-1}, {-1},
#line 354 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str553, ei_cp1163},
#line 542 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str554, ei_ebcdic1153},
    {-1}, {-1}, {-1}, {-1},
#line 461 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str559, ei_ebcdic905},
    {-1}, {-1},
#line 386 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str562, ei_cp863},
#line 365 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str563, ei_cp853},
    {-1}, {-1},
#line 226 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str566, ei_tis620},
    {-1}, {-1},
#line 499 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str569, ei_ebcdic1143},
#line 374 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str570, ei_cp857},
    {-1}, {-1},
#line 497 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str573, ei_ebcdic1142},
    {-1},
#line 552 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str575, ei_ebcdic4971},
    {-1}, {-1}, {-1}, {-1},
#line 411 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str580, ei_ebcdic277},
    {-1},
#line 302 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str582, ei_euc_cn},
#line 166 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str583, ei_cp1257},
    {-1}, {-1}, {-1}, {-1},
#line 184 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str588, ei_mac_roman},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 463 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str594, ei_ebcdic924},
#line 227 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str595, ei_tis620},
    {-1}, {-1},
#line 500 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str598, ei_ebcdic1143},
#line 490 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str599, ei_ebcdic1141},
#line 472 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str600, ei_ebcdic1047},
    {-1}, {-1},
#line 104 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str603, ei_iso8859_9},
    {-1},
#line 529 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str605, ei_ebcdic1147},
    {-1}, {-1}, {-1}, {-1},
#line 19 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str610, ei_ascii},
#line 476 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str611, ei_ebcdic1123},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 432 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str618, ei_ebcdic423},
#line 479 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str619, ei_ebcdic1137},
#line 345 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str620, ei_cp922},
#line 154 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str621, ei_cp1253},
    {-1},
#line 400 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str623, ei_cp1125},
    {-1}, {-1},
#line 356 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str626, ei_cp437},
#line 205 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str627, ei_mac_thai},
#line 440 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str628, ei_ebcdic500},
    {-1},
#line 410 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str630, ei_ebcdic277},
    {-1}, {-1}, {-1},
#line 16 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str634, ei_ascii},
    {-1},
#line 355 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str636, ei_cp1163},
    {-1},
#line 402 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str638, ei_ebcdic037},
    {-1},
#line 231 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str640, ei_tis620},
    {-1},
#line 274 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str642, ei_isoir165},
    {-1}, {-1},
#line 388 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str645, ei_cp863},
#line 368 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str646, ei_cp853},
#line 241 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str647, ei_tcvn},
    {-1}, {-1},
#line 394 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str650, ei_cp869},
    {-1}, {-1}, {-1},
#line 56 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str654, ei_iso8859_1},
    {-1}, {-1},
#line 536 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str657, ei_ebcdic1149},
    {-1}, {-1}, {-1},
#line 561 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str661, ei_big5_2003},
    {-1},
#line 206 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str663, ei_mac_thai},
#line 317 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str664, ei_hz},
#line 228 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str665, ei_tis620},
#line 209 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str666, ei_hp_roman8},
#line 307 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str667, ei_ces_gbk},
    {-1},
#line 20 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str669, ei_ascii},
    {-1},
#line 245 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str671, ei_iso646_jp},
#line 272 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str672, ei_gb2312},
    {-1},
#line 12 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str674, ei_ascii},
#line 496 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str675, ei_ebcdic1142},
#line 62 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str676, ei_iso8859_2},
#line 467 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str677, ei_ebcdic924},
#line 212 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str678, ei_armscii_8},
    {-1}, {-1},
#line 505 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str681, ei_ebcdic1143},
    {-1}, {-1}, {-1},
#line 15 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str685, ei_ascii},
#line 537 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str686, ei_ebcdic1149},
#line 473 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str687, ei_ebcdic1097},
#line 80 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str688, ei_iso8859_5},
    {-1}, {-1},
#line 14 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str691, ei_ascii},
#line 106 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str692, ei_iso8859_9},
#line 315 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str693, ei_iso2022_cn_ext},
    {-1}, {-1},
#line 240 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str696, ei_tcvn},
    {-1},
#line 93 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str698, ei_iso8859_7},
#line 349 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str699, ei_cp1129},
#line 74 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str700, ei_iso8859_4},
#line 434 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str701, ei_ebcdic423},
    {-1},
#line 33 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str703, ei_ucs4},
#line 292 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str704, ei_cp932},
#line 225 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str705, ei_cp1133},
#line 408 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str706, ei_ebcdic273},
    {-1}, {-1},
#line 114 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str709, ei_iso8859_10},
    {-1},
#line 108 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str711, ei_iso8859_9},
#line 429 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str712, ei_ebcdic297},
#line 413 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str713, ei_ebcdic277},
#line 359 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str714, ei_cp737},
    {-1}, {-1},
#line 58 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str717, ei_iso8859_1},
    {-1},
#line 273 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str719, ei_gb2312},
#line 208 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str720, ei_hp_roman8},
#line 407 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str721, ei_ebcdic037},
#line 299 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str722, ei_euc_cn},
    {-1},
#line 55 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str724, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 397 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str733, ei_cp869},
    {-1}, {-1},
#line 113 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str736, ei_iso8859_10},
    {-1},
#line 107 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str738, ei_iso8859_9},
#line 270 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str739, ei_iso646_cn},
#line 288 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str740, ei_sjis},
#line 76 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str741, ei_iso8859_4},
#line 136 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str742, ei_iso8859_16},
#line 34 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str743, ei_ucs4},
#line 57 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str744, ei_iso8859_1},
#line 126 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str745, ei_iso8859_14},
#line 346 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str746, ei_cp943},
    {-1},
#line 182 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str748, ei_mac_roman},
#line 230 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str749, ei_tis620},
    {-1},
#line 337 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str751, ei_cp949},
#line 134 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str752, ei_iso8859_16},
    {-1},
#line 246 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str754, ei_iso646_jp},
    {-1}, {-1}, {-1},
#line 52 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str758, ei_java},
    {-1},
#line 221 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str760, ei_rk1048},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 75 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str768, ei_iso8859_4},
#line 541 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str769, ei_ebcdic1149},
    {-1}, {-1},
#line 125 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str772, ei_iso8859_14},
#line 229 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str773, ei_tis620},
    {-1}, {-1},
#line 244 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str776, ei_iso646_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 25 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str785, ei_ucs2},
    {-1},
#line 24 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str787, ei_ucs2},
    {-1},
#line 409 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str789, ei_ebcdic273},
    {-1}, {-1}, {-1}, {-1},
#line 444 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str794, ei_ebcdic838},
#line 431 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str795, ei_ebcdic297},
    {-1},
#line 135 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str797, ei_iso8859_16},
    {-1}, {-1}, {-1}, {-1},
#line 29 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str802, ei_ucs2be},
    {-1}, {-1}, {-1},
#line 220 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str806, ei_rk1048},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 210 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str813, ei_hp_roman8},
    {-1}, {-1}, {-1}, {-1},
#line 101 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str818, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1},
#line 311 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str823, ei_gb18030_2022},
    {-1},
#line 64 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str825, ei_iso8859_2},
    {-1},
#line 247 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str827, ei_iso646_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 300 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str840, ei_euc_cn},
    {-1}, {-1}, {-1},
#line 268 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str844, ei_iso646_cn},
    {-1}, {-1},
#line 289 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str847, ei_sjis},
    {-1},
#line 112 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str849, ei_iso8859_10},
    {-1}, {-1},
#line 63 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str852, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1},
#line 534 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str857, ei_ebcdic1148},
#line 271 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str858, ei_gb2312},
    {-1}, {-1},
#line 257 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str861, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 191 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str868, ei_mac_romania},
    {-1}, {-1},
#line 181 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str871, ei_mac_roman},
    {-1}, {-1}, {-1}, {-1},
#line 266 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str876, ei_iso646_cn},
#line 445 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str877, ei_ebcdic838},
    {-1}, {-1}, {-1},
#line 188 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str881, ei_mac_iceland},
#line 335 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str882, ei_euc_kr},
#line 162 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str883, ei_cp1256},
#line 159 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str884, ei_cp1255},
    {-1},
#line 233 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str886, ei_tis620},
#line 145 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str887, ei_cp1251},
    {-1},
#line 510 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str889, ei_ebcdic1144},
    {-1}, {-1},
#line 563 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str892, ei_tds565},
#line 255 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str893, ei_jisx0208},
#line 88 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str894, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1},
#line 156 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str899, ei_cp1254},
    {-1},
#line 168 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str901, ei_cp1258},
    {-1}, {-1},
#line 232 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str904, ei_tis620},
    {-1},
#line 85 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str906, ei_iso8859_6},
#line 248 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str907, ei_jisx0201},
    {-1}, {-1},
#line 192 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str910, ei_mac_romania},
#line 143 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str911, ei_cp1250},
    {-1}, {-1},
#line 286 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str914, ei_euc_jp},
    {-1}, {-1},
#line 120 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str917, ei_iso8859_13},
#line 259 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str918, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 342 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str929, ei_dec_kanji},
    {-1}, {-1},
#line 155 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str932, ei_cp1253},
    {-1}, {-1},
#line 252 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str935, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 149 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str941, ei_cp1252},
    {-1},
#line 275 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str943, ei_isoir165},
#line 119 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str944, ei_iso8859_13},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 284 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str950, ei_euc_jp},
#line 187 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str951, ei_mac_iceland},
    {-1},
#line 283 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str953, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 341 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str960, ei_iso2022_kr},
    {-1}, {-1},
#line 293 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str963, ei_iso2022_jp},
#line 295 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str964, ei_iso2022_jp1},
#line 211 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str965, ei_nextstep},
#line 133 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str966, ei_iso8859_16},
    {-1},
#line 457 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str968, ei_ebcdic880},
    {-1}, {-1},
#line 261 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str971, ei_jisx0212},
    {-1},
#line 234 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str973, ei_cp874},
    {-1},
#line 36 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str975, ei_ucs4be},
    {-1}, {-1}, {-1},
#line 304 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str979, ei_euc_cn},
#line 79 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str980, ei_iso8859_5},
#line 129 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str981, ei_iso8859_15},
    {-1}, {-1},
#line 294 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str984, ei_iso2022_jp},
    {-1}, {-1},
#line 165 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str987, ei_cp1257},
    {-1}, {-1},
#line 203 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str990, ei_mac_arabic},
#line 260 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str991, ei_jisx0212},
    {-1},
#line 70 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str993, ei_iso8859_3},
    {-1},
#line 73 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str995, ei_iso8859_4},
#line 123 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str996, ei_iso8859_14},
#line 100 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str997, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1},
#line 265 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1002, ei_jisx0212},
    {-1}, {-1}, {-1},
#line 130 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1006, ei_iso8859_15},
    {-1}, {-1},
#line 403 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1009, ei_ebcdic037},
    {-1}, {-1}, {-1},
#line 264 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1013, ei_jisx0212},
    {-1},
#line 522 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1015, ei_ebcdic1146},
#line 448 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1016, ei_ebcdic870},
#line 27 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1017, ei_ucs2be},
    {-1}, {-1},
#line 69 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1020, ei_iso8859_3},
    {-1}, {-1}, {-1}, {-1},
#line 153 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1025, ei_cp1253},
#line 204 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1026, ei_mac_arabic},
    {-1},
#line 279 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1028, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1},
#line 560 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1033, ei_iso2022_jp3},
#line 215 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1034, ei_koi8_t},
#line 297 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1035, ei_iso2022_jp2},
    {-1}, {-1},
#line 298 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1038, ei_iso2022_jpms},
    {-1},
#line 68 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1040, ei_iso8859_3},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 111 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1048, ei_iso8859_10},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 326 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1062, ei_cp950},
    {-1}, {-1},
#line 84 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1065, ei_iso8859_6},
    {-1}, {-1}, {-1},
#line 54 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1069, ei_iso8859_1},
    {-1}, {-1},
#line 296 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1072, ei_iso2022_jp2},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 565 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1085, ei_atarist},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 96 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1096, ei_iso8859_7},
#line 249 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1097, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 131 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1108, ei_iso8859_15},
    {-1}, {-1},
#line 243 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1111, ei_iso646_jp},
    {-1}, {-1}, {-1}, {-1},
#line 118 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1116, ei_iso8859_13},
    {-1}, {-1}, {-1}, {-1},
#line 67 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1121, ei_iso8859_3},
#line 38 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1122, ei_utf16},
#line 61 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1123, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 254 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1139, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 309 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1147, ei_cp936},
    {-1}, {-1},
#line 50 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1150, ei_ucs4swapped},
#line 97 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1151, ei_iso8859_7},
    {-1},
#line 23 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1153, ei_utf8},
    {-1},
#line 262 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1155, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 328 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1167, ei_big5hkscs2001},
#line 427 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1168, ei_ebcdic285},
#line 91 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1169, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 127 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1178, ei_iso8859_14},
#line 329 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1179, ei_big5hkscs2004},
    {-1},
#line 331 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1181, ei_big5hkscs2008},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 361 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1189, ei_cp775},
    {-1}, {-1},
#line 48 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1192, ei_ucs2swapped},
    {-1}, {-1}, {-1},
#line 258 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1196, ei_jisx0208},
    {-1},
#line 124 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1198, ei_iso8859_14},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 115 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1214, ei_iso8859_10},
#line 109 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1215, ei_iso8859_9},
    {-1}, {-1},
#line 59 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1218, ei_iso8859_1},
#line 89 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1219, ei_iso8859_6},
    {-1},
#line 82 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1221, ei_iso8859_5},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 189 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1228, ei_mac_croatian},
#line 164 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1229, ei_cp1256},
#line 77 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1230, ei_iso8859_4},
    {-1}, {-1}, {-1},
#line 419 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1234, ei_ebcdic280},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 559 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1240, ei_iso2022_jp3},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 528 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1252, ei_ebcdic1147},
#line 253 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1253, ei_jisx0208},
    {-1}, {-1}, {-1},
#line 197 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1257, ei_mac_greek},
#line 190 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1258, ei_mac_croatian},
    {-1}, {-1},
#line 92 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1261, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 396 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1268, ei_cp869},
    {-1}, {-1}, {-1},
#line 65 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1272, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 484 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1279, ei_ebcdic1140},
    {-1}, {-1},
#line 338 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1282, ei_johab},
    {-1},
#line 287 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1284, ei_sjis},
    {-1},
#line 290 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1286, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 198 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1293, ei_mac_greek},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 138 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1308, ei_koi8_r},
    {-1},
#line 98 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1310, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 214 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1321, ei_georgian_ps},
    {-1}, {-1}, {-1},
#line 44 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1325, ei_utf7},
#line 213 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1326, ei_georgian_academy},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 105 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1333, ei_iso8859_9},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 327 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1349, ei_big5hkscs1999},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 71 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1356, ei_iso8859_3},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 41 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1376, ei_utf32},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 558 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1390, ei_shift_jisx0213},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 137 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1398, ei_koi8_r},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 455 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1405, ei_ebcdic875},
    {-1}, {-1}, {-1}, {-1},
#line 39 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1410, ei_utf16be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 81 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1424, ei_iso8859_5},
    {-1}, {-1}, {-1},
#line 37 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1428, ei_ucs4le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 282 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1440, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 218 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1452, ei_pt154},
    {-1}, {-1}, {-1},
#line 95 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1456, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 31 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1470, ei_ucs2le},
    {-1}, {-1}, {-1}, {-1},
#line 102 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1475, ei_iso8859_8},
#line 139 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1476, ei_koi8_u},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 557 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1500, ei_shift_jisx0213},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 242 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1511, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 343 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1518, ei_dec_hanyu},
    {-1},
#line 224 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1520, ei_mulelao},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 466 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1526, ei_ebcdic924},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 195 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1539, ei_mac_ukraine},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 340 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1559, ei_iso2022_kr},
    {-1}, {-1},
#line 196 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1562, ei_mac_ukraine},
    {-1}, {-1}, {-1},
#line 158 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1566, ei_cp1254},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 45 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1573, ei_utf7},
    {-1},
#line 556 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1575, ei_euc_jisx0213},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 103 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1583, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 405 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1598, ei_ebcdic037},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 42 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1606, ei_utf32be},
    {-1},
#line 310 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1608, ei_gb18030_2005},
    {-1}, {-1},
#line 430 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1611, ei_ebcdic297},
    {-1},
#line 161 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1613, ei_cp1255},
    {-1},
#line 251 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1615, ei_jisx0201},
    {-1},
#line 175 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1617, ei_cp862},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 312 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1665, ei_gb18030_2022},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 339 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1675, ei_johab},
    {-1}, {-1},
#line 449 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1678, ei_ebcdic870},
    {-1}, {-1},
#line 28 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1681, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 285 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1697, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 555 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1703, ei_euc_jisx0213},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 406 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1773, ei_ebcdic037},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 201 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1819, ei_mac_hebrew},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 566 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1830, ei_riscos1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 319 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1848, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 202 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1855, ei_mac_hebrew},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 318 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1862, ei_euc_tw},
#line 40 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1863, ei_utf16le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 433 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1916, ei_ebcdic423},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 185 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1939, ei_mac_centraleurope},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 32 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1963, ei_ucs2le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 564 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1979, ei_atarist},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 333 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2022, ei_euc_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 332 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2036, ei_euc_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 460 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2044, ei_ebcdic905},
    {-1}, {-1},
#line 200 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2047, ei_mac_turkish},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 43 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2059, ei_utf32le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 199 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2092, ei_mac_turkish},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 140 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2105, ei_koi8_ru},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 320 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2119, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 147 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2131, ei_cp1251},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 193 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2142, ei_mac_cyrillic},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 194 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2178, ei_mac_cyrillic},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 172 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2228, ei_cp850},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 334 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2293, ei_euc_kr},
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
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 49 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2526, ei_ucs4internal},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 47 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2568, ei_ucs2internal},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 167 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2577, ei_cp1257}
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
