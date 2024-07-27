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

#define TOTAL_KEYWORDS 534
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 39
#define MIN_HASH_VALUE 21
#define MAX_HASH_VALUE 2224
/* maximum key range = 2204, duplicates = 0 */

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
      2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225,
      2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225,
      2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225,
      2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225,
      2225, 2225, 2225, 2225, 2225, 2225,   32, 2225,   33,    8,
        70,  126,   20,    6,    5,  113,   24,  168,  502, 2225,
      2225, 2225, 2225, 2225, 2225,   10,  261,    6,   57,  130,
        20,  243,  184,    5,  659,   82,    9,   94,   90,  124,
         8, 2225,  562,    5,  479,  608,   13,  294,   63,   16,
         5, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225,
      2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225,
      2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225,
      2225, 2225, 2225, 2225, 2225, 2225, 2225, 2225
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
    char stringpool_str21[sizeof("L6")];
    char stringpool_str23[sizeof("L5")];
    char stringpool_str27[sizeof("L1")];
    char stringpool_str28[sizeof("CPIS")];
    char stringpool_str31[sizeof("5601")];
    char stringpool_str32[sizeof("1125")];
    char stringpool_str33[sizeof("646")];
    char stringpool_str35[sizeof("ASCII")];
    char stringpool_str37[sizeof("866")];
    char stringpool_str38[sizeof("865")];
    char stringpool_str39[sizeof("855")];
    char stringpool_str40[sizeof("861")];
    char stringpool_str44[sizeof("CSASCII")];
    char stringpool_str45[sizeof("VISCII")];
    char stringpool_str50[sizeof("CSVISCII")];
    char stringpool_str51[sizeof("L4")];
    char stringpool_str53[sizeof("L10")];
    char stringpool_str55[sizeof("CP285")];
    char stringpool_str57[sizeof("858")];
    char stringpool_str59[sizeof("L8")];
    char stringpool_str65[sizeof("860")];
    char stringpool_str66[sizeof("850")];
    char stringpool_str67[sizeof("CP01146")];
    char stringpool_str68[sizeof("CSUCS4")];
    char stringpool_str69[sizeof("CP01145")];
    char stringpool_str70[sizeof("CYRILLIC")];
    char stringpool_str73[sizeof("CP01141")];
    char stringpool_str97[sizeof("CP01144")];
    char stringpool_str99[sizeof("PCK")];
    char stringpool_str102[sizeof("862")];
    char stringpool_str103[sizeof("852")];
    char stringpool_str105[sizeof("CP01148")];
    char stringpool_str108[sizeof("VISCII1.11")];
    char stringpool_str113[sizeof("MAC")];
    char stringpool_str123[sizeof("CP01140")];
    char stringpool_str130[sizeof("LATIN6")];
    char stringpool_str132[sizeof("LATIN5")];
    char stringpool_str133[sizeof("CSKZ1048")];
    char stringpool_str136[sizeof("LATIN1")];
    char stringpool_str146[sizeof("857")];
    char stringpool_str150[sizeof("X0201")];
    char stringpool_str151[sizeof("L2")];
    char stringpool_str154[sizeof("KSC5601")];
    char stringpool_str158[sizeof("863")];
    char stringpool_str159[sizeof("853")];
    char stringpool_str160[sizeof("LATIN4")];
    char stringpool_str162[sizeof("CP1250")];
    char stringpool_str163[sizeof("CCSID01146")];
    char stringpool_str165[sizeof("CCSID01145")];
    char stringpool_str168[sizeof("LATIN8")];
    char stringpool_str169[sizeof("CCSID01141")];
    char stringpool_str174[sizeof("CYRILLICASIAN")];
    char stringpool_str182[sizeof("X0208")];
    char stringpool_str188[sizeof("CN")];
    char stringpool_str193[sizeof("CCSID01144")];
    char stringpool_str194[sizeof("KZ1048")];
    char stringpool_str195[sizeof("LATIN10")];
    char stringpool_str196[sizeof("HZ")];
    char stringpool_str197[sizeof("CP01142")];
    char stringpool_str198[sizeof("CP870")];
    char stringpool_str200[sizeof("869")];
    char stringpool_str201[sizeof("CCSID01148")];
    char stringpool_str203[sizeof("CSPCP852")];
    char stringpool_str208[sizeof("CSKSC56011987")];
    char stringpool_str209[sizeof("ECMA114")];
    char stringpool_str210[sizeof("MSANSI")];
    char stringpool_str213[sizeof("ANSI1251")];
    char stringpool_str217[sizeof("ECMA118")];
    char stringpool_str219[sizeof("CCSID01140")];
    char stringpool_str234[sizeof("ISO646CN")];
    char stringpool_str237[sizeof("L7")];
    char stringpool_str240[sizeof("MS936")];
    char stringpool_str249[sizeof("X0212")];
    char stringpool_str250[sizeof("ISO88596")];
    char stringpool_str252[sizeof("ISO88595")];
    char stringpool_str256[sizeof("ISO88591")];
    char stringpool_str259[sizeof("ISO885916")];
    char stringpool_str260[sizeof("LATIN2")];
    char stringpool_str261[sizeof("ISO885915")];
    char stringpool_str262[sizeof("437")];
    char stringpool_str263[sizeof("L3")];
    char stringpool_str265[sizeof("ISO885911")];
    char stringpool_str277[sizeof("CSBIG5")];
    char stringpool_str280[sizeof("ISO88594")];
    char stringpool_str282[sizeof("BIG5")];
    char stringpool_str283[sizeof("CP01147")];
    char stringpool_str288[sizeof("ISO88598")];
    char stringpool_str289[sizeof("ISO885914")];
    char stringpool_str293[sizeof("CCSID01142")];
    char stringpool_str304[sizeof("IBM1166")];
    char stringpool_str305[sizeof("IBM1156")];
    char stringpool_str306[sizeof("IBM1165")];
    char stringpool_str307[sizeof("IBM1155")];
    char stringpool_str309[sizeof("CP01143")];
    char stringpool_str310[sizeof("IBM1161")];
    char stringpool_str311[sizeof("IBM866")];
    char stringpool_str312[sizeof("IBM856")];
    char stringpool_str313[sizeof("IBM865")];
    char stringpool_str314[sizeof("IBM855")];
    char stringpool_str315[sizeof("ISO885910")];
    char stringpool_str317[sizeof("IBM861")];
    char stringpool_str319[sizeof("IBM1146")];
    char stringpool_str321[sizeof("IBM1145")];
    char stringpool_str325[sizeof("IBM1141")];
    char stringpool_str332[sizeof("CP00924")];
    char stringpool_str334[sizeof("IBM1164")];
    char stringpool_str335[sizeof("IBM1154")];
    char stringpool_str340[sizeof("ASMO708")];
    char stringpool_str341[sizeof("IBM864")];
    char stringpool_str343[sizeof("IBM1158")];
    char stringpool_str344[sizeof("IBM1046")];
    char stringpool_str345[sizeof("C99")];
    char stringpool_str346[sizeof("LATIN7")];
    char stringpool_str349[sizeof("IBM1144")];
    char stringpool_str350[sizeof("IBM858")];
    char stringpool_str353[sizeof("IBM01146")];
    char stringpool_str355[sizeof("IBM01145")];
    char stringpool_str357[sizeof("IBM1148")];
    char stringpool_str359[sizeof("IBM01141")];
    char stringpool_str360[sizeof("IBM1160")];
    char stringpool_str362[sizeof("CNBIG5")];
    char stringpool_str363[sizeof("MSEE")];
    char stringpool_str364[sizeof("CCSID853")];
    char stringpool_str367[sizeof("IBM860")];
    char stringpool_str368[sizeof("IBM850")];
    char stringpool_str371[sizeof("IBM1125")];
    char stringpool_str372[sizeof("LATIN3")];
    char stringpool_str374[sizeof("IBM425")];
    char stringpool_str375[sizeof("IBM1140")];
    char stringpool_str377[sizeof("IBM500")];
    char stringpool_str378[sizeof("IBM285")];
    char stringpool_str379[sizeof("CCSID01147")];
    char stringpool_str380[sizeof("ISO88592")];
    char stringpool_str383[sizeof("IBM01144")];
    char stringpool_str384[sizeof("IBM16804")];
    char stringpool_str386[sizeof("IBM880")];
    char stringpool_str388[sizeof("CSPC8CODEPAGE1146")];
    char stringpool_str390[sizeof("HP15CN")];
    char stringpool_str391[sizeof("IBM01148")];
    char stringpool_str393[sizeof("CP01149")];
    char stringpool_str394[sizeof("IBM1026")];
    char stringpool_str396[sizeof("IBM1025")];
    char stringpool_str397[sizeof("CNS11643")];
    char stringpool_str399[sizeof("IBM1124")];
    char stringpool_str402[sizeof("IBM424")];
    char stringpool_str403[sizeof("CSPC8CODEPAGE1144")];
    char stringpool_str405[sizeof("CCSID01143")];
    char stringpool_str406[sizeof("IBM284")];
    char stringpool_str409[sizeof("IBM01140")];
    char stringpool_str412[sizeof("CSIBM1161")];
    char stringpool_str413[sizeof("CSIBM866")];
    char stringpool_str415[sizeof("CSIBM865")];
    char stringpool_str416[sizeof("CSIBM855")];
    char stringpool_str418[sizeof("IBM00858")];
    char stringpool_str419[sizeof("CSIBM861")];
    char stringpool_str421[sizeof("IBM875")];
    char stringpool_str425[sizeof("IBM871")];
    char stringpool_str428[sizeof("CCSID00924")];
    char stringpool_str431[sizeof("IBM1131")];
    char stringpool_str432[sizeof("IBM280")];
    char stringpool_str434[sizeof("IBM1162")];
    char stringpool_str435[sizeof("XMACCE")];
    char stringpool_str437[sizeof("IBM1112")];
    char stringpool_str441[sizeof("IBM862")];
    char stringpool_str442[sizeof("IBM852")];
    char stringpool_str443[sizeof("CSIBM864")];
    char stringpool_str448[sizeof("ISO2022CN")];
    char stringpool_str449[sizeof("IBM1142")];
    char stringpool_str450[sizeof("CSUNICODE11")];
    char stringpool_str452[sizeof("CSIBM858")];
    char stringpool_str456[sizeof("LATIN9")];
    char stringpool_str457[sizeof("CSIBM01145")];
    char stringpool_str461[sizeof("CSIBM01141")];
    char stringpool_str463[sizeof("KSC56011987")];
    char stringpool_str466[sizeof("ISO88597")];
    char stringpool_str469[sizeof("CSIBM860")];
    char stringpool_str470[sizeof("IBM838")];
    char stringpool_str473[sizeof("CSIBM1125")];
    char stringpool_str475[sizeof("IBM870")];
    char stringpool_str478[sizeof("MACICELAND")];
    char stringpool_str479[sizeof("CSIBM500")];
    char stringpool_str480[sizeof("CSIBM285")];
    char stringpool_str481[sizeof("IBM1130")];
    char stringpool_str483[sizeof("IBM01142")];
    char stringpool_str485[sizeof("IBM905")];
    char stringpool_str488[sizeof("CSIBM880")];
    char stringpool_str489[sizeof("CCSID01149")];
    char stringpool_str490[sizeof("CSISO2022CN")];
    char stringpool_str492[sizeof("ISO88593")];
    char stringpool_str493[sizeof("CSIBM01148")];
    char stringpool_str494[sizeof("DECHANZI")];
    char stringpool_str495[sizeof("CSPC8CODEPAGE437")];
    char stringpool_str496[sizeof("CSIBM1026")];
    char stringpool_str497[sizeof("IBM1252")];
    char stringpool_str498[sizeof("EBCDICCPIS")];
    char stringpool_str499[sizeof("IBM1122")];
    char stringpool_str501[sizeof("ISO885913")];
    char stringpool_str503[sizeof("IBM278")];
    char stringpool_str504[sizeof("CSIBM424")];
    char stringpool_str506[sizeof("IBM282")];
    char stringpool_str508[sizeof("CSIBM284")];
    char stringpool_str509[sizeof("EBCDICCPCA")];
    char stringpool_str510[sizeof("IBM775")];
    char stringpool_str511[sizeof("CSIBM01140")];
    char stringpool_str513[sizeof("EBCDICCPFI")];
    char stringpool_str518[sizeof("KSC56011989")];
    char stringpool_str521[sizeof("IBM1157")];
    char stringpool_str526[sizeof("IBM921")];
    char stringpool_str527[sizeof("CSIBM871")];
    char stringpool_str528[sizeof("IBM857")];
    char stringpool_str532[sizeof("KOREAN")];
    char stringpool_str534[sizeof("CSIBM280")];
    char stringpool_str535[sizeof("IBM1147")];
    char stringpool_str536[sizeof("CSIBM1162")];
    char stringpool_str538[sizeof("PT154")];
    char stringpool_str539[sizeof("ANSIX3.41986")];
    char stringpool_str546[sizeof("IBM1163")];
    char stringpool_str547[sizeof("IBM1153")];
    char stringpool_str548[sizeof("CSPC775BALTIC")];
    char stringpool_str550[sizeof("IBM924")];
    char stringpool_str553[sizeof("IBM863")];
    char stringpool_str554[sizeof("IBM853")];
    char stringpool_str555[sizeof("IBM1132")];
    char stringpool_str556[sizeof("PTCP154")];
    char stringpool_str558[sizeof("ANSIX3.41968")];
    char stringpool_str559[sizeof("CSUNICODE11UTF7")];
    char stringpool_str560[sizeof("IBM1047")];
    char stringpool_str561[sizeof("IBM1143")];
    char stringpool_str562[sizeof("CSUNICODE")];
    char stringpool_str565[sizeof("TDS565")];
    char stringpool_str566[sizeof("HPROMAN8")];
    char stringpool_str567[sizeof("CSPTCP154")];
    char stringpool_str568[sizeof("BIG5HKSCS")];
    char stringpool_str569[sizeof("IBM01147")];
    char stringpool_str571[sizeof("BIGFIVE")];
    char stringpool_str576[sizeof("ISO88599")];
    char stringpool_str577[sizeof("CSIBM870")];
    char stringpool_str585[sizeof("CSIBM01142")];
    char stringpool_str587[sizeof("CSIBM905")];
    char stringpool_str589[sizeof("GBK")];
    char stringpool_str590[sizeof("IBM4971")];
    char stringpool_str591[sizeof("EBCDICCPNL")];
    char stringpool_str593[sizeof("ISOIR6")];
    char stringpool_str595[sizeof("IBM01143")];
    char stringpool_str605[sizeof("CSIBM278")];
    char stringpool_str608[sizeof("ISOIR166")];
    char stringpool_str610[sizeof("ISOIR165")];
    char stringpool_str611[sizeof("IBM1123")];
    char stringpool_str612[sizeof("R8")];
    char stringpool_str613[sizeof("IBM12712")];
    char stringpool_str614[sizeof("IBM423")];
    char stringpool_str618[sizeof("IBM00924")];
    char stringpool_str620[sizeof("US")];
    char stringpool_str622[sizeof("CNGB")];
    char stringpool_str623[sizeof("EBCDICCPES")];
    char stringpool_str624[sizeof("CSGB2312")];
    char stringpool_str629[sizeof("IBM367")];
    char stringpool_str630[sizeof("CSIBM857")];
    char stringpool_str631[sizeof("TIS620")];
    char stringpool_str632[sizeof("ISOIR14")];
    char stringpool_str637[sizeof("IBM869")];
    char stringpool_str638[sizeof("ISOIR58")];
    char stringpool_str640[sizeof("IBM819")];
    char stringpool_str641[sizeof("IBM1137")];
    char stringpool_str642[sizeof("ISOIR101")];
    char stringpool_str644[sizeof("IBM437")];
    char stringpool_str645[sizeof("IBM1149")];
    char stringpool_str646[sizeof("USASCII")];
    char stringpool_str648[sizeof("CSIBM1163")];
    char stringpool_str649[sizeof("ARMSCII8")];
    char stringpool_str650[sizeof("IBM922")];
    char stringpool_str653[sizeof("ISOIR144")];
    char stringpool_str655[sizeof("CSIBM863")];
    char stringpool_str656[sizeof("CSIBM853")];
    char stringpool_str657[sizeof("IBM037")];
    char stringpool_str658[sizeof("UCS4")];
    char stringpool_str660[sizeof("ISOCELTIC")];
    char stringpool_str661[sizeof("ISOIR148")];
    char stringpool_str662[sizeof("CSIBM1047")];
    char stringpool_str665[sizeof("TIS6200")];
    char stringpool_str666[sizeof("ISO646US")];
    char stringpool_str667[sizeof("ISOIR110")];
    char stringpool_str668[sizeof("BIG52003")];
    char stringpool_str669[sizeof("TCVN")];
    char stringpool_str671[sizeof("CSIBM01147")];
    char stringpool_str673[sizeof("ISOIR126")];
    char stringpool_str675[sizeof("ISO646.IRV:1991")];
    char stringpool_str677[sizeof("JP")];
    char stringpool_str678[sizeof("SJIS")];
    char stringpool_str679[sizeof("IBM01149")];
    char stringpool_str681[sizeof("IBM277")];
    char stringpool_str682[sizeof("CHINESE")];
    char stringpool_str683[sizeof("IBMCP1133")];
    char stringpool_str692[sizeof("ISOIR100")];
    char stringpool_str693[sizeof("JAVA")];
    char stringpool_str695[sizeof("IBM1129")];
    char stringpool_str697[sizeof("CSIBM01143")];
    char stringpool_str701[sizeof("MSCYRL")];
    char stringpool_str704[sizeof("EBCDICCPDK")];
    char stringpool_str706[sizeof("IBM932")];
    char stringpool_str707[sizeof("IBM273")];
    char stringpool_str708[sizeof("IBM1097")];
    char stringpool_str712[sizeof("IBM943")];
    char stringpool_str716[sizeof("CSIBM423")];
    char stringpool_str720[sizeof("CSIBM00924")];
    char stringpool_str723[sizeof("ISO646JP")];
    char stringpool_str727[sizeof("ISO10646UCS4")];
    char stringpool_str733[sizeof("MACCYRILLIC")];
    char stringpool_str735[sizeof("ISOIR226")];
    char stringpool_str736[sizeof("IBM297")];
    char stringpool_str737[sizeof("IBM737")];
    char stringpool_str739[sizeof("CSIBM869")];
    char stringpool_str746[sizeof("EBCDICIS871+EURO")];
    char stringpool_str748[sizeof("EBCDICCPSE")];
    char stringpool_str749[sizeof("CSISOLATIN6")];
    char stringpool_str750[sizeof("CSISOLATIN5")];
    char stringpool_str751[sizeof("RK1048")];
    char stringpool_str752[sizeof("CSISOLATIN1")];
    char stringpool_str755[sizeof("CSISOLATINARABIC")];
    char stringpool_str757[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str758[sizeof("UCS2")];
    char stringpool_str759[sizeof("CSIBM037")];
    char stringpool_str760[sizeof("GB18030")];
    char stringpool_str764[sizeof("CSISOLATIN4")];
    char stringpool_str767[sizeof("ISOIR138")];
    char stringpool_str769[sizeof("ISO885916:2001")];
    char stringpool_str777[sizeof("ISO10646UCS2")];
    char stringpool_str781[sizeof("CSIBM01149")];
    char stringpool_str783[sizeof("CSIBM277")];
    char stringpool_str784[sizeof("GB2312")];
    char stringpool_str785[sizeof("ISO88595:1988")];
    char stringpool_str786[sizeof("ISO885915:1998")];
    char stringpool_str790[sizeof("TIS620.25291")];
    char stringpool_str792[sizeof("CSISO58GB231280")];
    char stringpool_str794[sizeof("MACTHAI")];
    char stringpool_str797[sizeof("TCVN57121")];
    char stringpool_str799[sizeof("ISO88594:1988")];
    char stringpool_str800[sizeof("ISO885914:1998")];
    char stringpool_str801[sizeof("UHC")];
    char stringpool_str802[sizeof("HZGB2312")];
    char stringpool_str803[sizeof("ISO88598:1988")];
    char stringpool_str806[sizeof("GB231280")];
    char stringpool_str807[sizeof("EBCDICFI278+EURO")];
    char stringpool_str808[sizeof("CSISO57GB1988")];
    char stringpool_str809[sizeof("CSIBM273")];
    char stringpool_str814[sizeof("CSISOLATIN2")];
    char stringpool_str816[sizeof("ISOIR57")];
    char stringpool_str818[sizeof("GB198880")];
    char stringpool_str819[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str821[sizeof("EBCDICCPNO")];
    char stringpool_str825[sizeof("ISOIR157")];
    char stringpool_str828[sizeof("EBCDICES284+EURO")];
    char stringpool_str830[sizeof("CSISOLATINGREEK")];
    char stringpool_str832[sizeof("SYSTEM1125")];
    char stringpool_str834[sizeof("ISOIR87")];
    char stringpool_str836[sizeof("STRK10482002")];
    char stringpool_str838[sizeof("CSIBM297")];
    char stringpool_str840[sizeof("ROMAN8")];
    char stringpool_str846[sizeof("TIS620.25331")];
    char stringpool_str847[sizeof("ISOIR230")];
    char stringpool_str850[sizeof("TCVN5712")];
    char stringpool_str855[sizeof("JIS0208")];
    char stringpool_str856[sizeof("ARABIC")];
    char stringpool_str857[sizeof("EBCDICCPCH")];
    char stringpool_str859[sizeof("ISO885910:1992")];
    char stringpool_str870[sizeof("CSISOLATIN3")];
    char stringpool_str871[sizeof("TIS620.25330")];
    char stringpool_str873[sizeof("ISO88596:1987")];
    char stringpool_str875[sizeof("MSKANJI")];
    char stringpool_str876[sizeof("ISO88591:1987")];
    char stringpool_str879[sizeof("WINDOWS1256")];
    char stringpool_str880[sizeof("WINDOWS1255")];
    char stringpool_str882[sizeof("WINDOWS1251")];
    char stringpool_str887[sizeof("JISX0201")];
    char stringpool_str889[sizeof("ISOIR127")];
    char stringpool_str894[sizeof("WINDOWS1254")];
    char stringpool_str898[sizeof("WINDOWS1258")];
    char stringpool_str905[sizeof("ISO88593:1988")];
    char stringpool_str907[sizeof("WINDOWS1250")];
    char stringpool_str909[sizeof("UCS4LE")];
    char stringpool_str911[sizeof("ELOT928")];
    char stringpool_str914[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str917[sizeof("EBCDICSE278+EURO")];
    char stringpool_str919[sizeof("JISX0208")];
    char stringpool_str921[sizeof("EBCDICDK277+EURO")];
    char stringpool_str925[sizeof("CSMACINTOSH")];
    char stringpool_str926[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str927[sizeof("EBCDICCPHE")];
    char stringpool_str928[sizeof("SDECKANJI")];
    char stringpool_str929[sizeof("EUCCN")];
    char stringpool_str935[sizeof("ISOIR159")];
    char stringpool_str937[sizeof("ISO2022JP")];
    char stringpool_str938[sizeof("ISO88592:1987")];
    char stringpool_str940[sizeof("ISOIR203")];
    char stringpool_str944[sizeof("WINDOWS1252")];
    char stringpool_str946[sizeof("ISO2022JP1")];
    char stringpool_str949[sizeof("ISOIR149")];
    char stringpool_str956[sizeof("IBMTHAI")];
    char stringpool_str957[sizeof("CSHPROMAN8")];
    char stringpool_str959[sizeof("UCS2LE")];
    char stringpool_str962[sizeof("ISOIR109")];
    char stringpool_str963[sizeof("TIS620.2533")];
    char stringpool_str966[sizeof("WINDOWS874")];
    char stringpool_str969[sizeof("EBCDICDE273+EURO")];
    char stringpool_str970[sizeof("ISO2022CNEXT")];
    char stringpool_str973[sizeof("MACARABIC")];
    char stringpool_str978[sizeof("CSISO14JISC6220RO")];
    char stringpool_str981[sizeof("ISO88597:1987")];
    char stringpool_str985[sizeof("CSISO87JISX0208")];
    char stringpool_str986[sizeof("JISX0212")];
    char stringpool_str987[sizeof("WINDOWS1257")];
    char stringpool_str989[sizeof("TACTIS")];
    char stringpool_str995[sizeof("JISX0212.19900")];
    char stringpool_str996[sizeof("EBCDICNO277+EURO")];
    char stringpool_str999[sizeof("MULELAO1")];
    char stringpool_str1000[sizeof("WINDOWS1253")];
    char stringpool_str1004[sizeof("EBCDICCPBE")];
    char stringpool_str1019[sizeof("MACROMANIA")];
    char stringpool_str1023[sizeof("ISO2022JP2004")];
    char stringpool_str1029[sizeof("WINDOWS950")];
    char stringpool_str1030[sizeof("ISO2022JPMS")];
    char stringpool_str1035[sizeof("CSEUCPKDFMTJAPANESE")];
    char stringpool_str1038[sizeof("CSISO2022KR")];
    char stringpool_str1039[sizeof("CSISO159JISX02121990")];
    char stringpool_str1042[sizeof("ISOIR179")];
    char stringpool_str1043[sizeof("CSISOLATINHEBREW")];
    char stringpool_str1046[sizeof("DECKANJI")];
    char stringpool_str1048[sizeof("UNICODE11")];
    char stringpool_str1056[sizeof("ISO88597:2003")];
    char stringpool_str1058[sizeof("CSIBMTHAI")];
    char stringpool_str1061[sizeof("CSISO2022JP")];
    char stringpool_str1064[sizeof("JISX02011976")];
    char stringpool_str1066[sizeof("ATARI")];
    char stringpool_str1068[sizeof("EBCDICCYRILLIC")];
    char stringpool_str1070[sizeof("ISO2022JP2")];
    char stringpool_str1071[sizeof("GREEK8")];
    char stringpool_str1078[sizeof("BIG5HKSCS:2001")];
    char stringpool_str1082[sizeof("MACROMAN")];
    char stringpool_str1084[sizeof("CNGBISOIR165")];
    char stringpool_str1090[sizeof("BIG5HKSCS:2004")];
    char stringpool_str1091[sizeof("ISO88599:1989")];
    char stringpool_str1092[sizeof("MSGREEK")];
    char stringpool_str1093[sizeof("WINDOWS936")];
    char stringpool_str1094[sizeof("BIG5HKSCS:2008")];
    char stringpool_str1097[sizeof("ISOIR199")];
    char stringpool_str1101[sizeof("EBCDICCPUS")];
    char stringpool_str1102[sizeof("EBCDICLATIN9EURO")];
    char stringpool_str1104[sizeof("GREEK")];
    char stringpool_str1108[sizeof("JISX02081990")];
    char stringpool_str1110[sizeof("UTF16")];
    char stringpool_str1124[sizeof("CSISO2022JP2")];
    char stringpool_str1129[sizeof("JISX02121990")];
    char stringpool_str1134[sizeof("JISC62261983")];
    char stringpool_str1139[sizeof("UTF8")];
    char stringpool_str1142[sizeof("CPGR")];
    char stringpool_str1157[sizeof("UCS4SWAPPED")];
    char stringpool_str1161[sizeof("UCS4BE")];
    char stringpool_str1162[sizeof("JISC62201969RO")];
    char stringpool_str1177[sizeof("EBCDICIT280+EURO")];
    char stringpool_str1182[sizeof("ISO2022JP3")];
    char stringpool_str1184[sizeof("MACINTOSH")];
    char stringpool_str1193[sizeof("KOI8T")];
    char stringpool_str1197[sizeof("EBCDICGB285+EURO")];
    char stringpool_str1199[sizeof("MSARAB")];
    char stringpool_str1201[sizeof("JISX02081983")];
    char stringpool_str1204[sizeof("IBMEUCCN")];
    char stringpool_str1207[sizeof("UCS2SWAPPED")];
    char stringpool_str1211[sizeof("UCS2BE")];
    char stringpool_str1225[sizeof("RISCOSLATIN1")];
    char stringpool_str1238[sizeof("BIG5HKSCS:1999")];
    char stringpool_str1248[sizeof("EBCDICCPGB")];
    char stringpool_str1284[sizeof("DECKOREAN")];
    char stringpool_str1295[sizeof("CSKOI8R")];
    char stringpool_str1302[sizeof("EBCDICCPROECE")];
    char stringpool_str1311[sizeof("GEORGIANPS")];
    char stringpool_str1314[sizeof("EBCDICINTERNATIONAL500+EURO")];
    char stringpool_str1317[sizeof("UTF7")];
    char stringpool_str1320[sizeof("JOHAB")];
    char stringpool_str1330[sizeof("GEORGIANACADEMY")];
    char stringpool_str1337[sizeof("NEXTSTEP")];
    char stringpool_str1341[sizeof("MACGREEK")];
    char stringpool_str1343[sizeof("GB18030:2005")];
    char stringpool_str1358[sizeof("UTF32")];
    char stringpool_str1359[sizeof("KOI8R")];
    char stringpool_str1370[sizeof("SHIFTJIS")];
    char stringpool_str1376[sizeof("UTF16LE")];
    char stringpool_str1383[sizeof("CSSHIFTJIS")];
    char stringpool_str1401[sizeof("MACCROATIAN")];
    char stringpool_str1407[sizeof("GB18030:2022")];
    char stringpool_str1418[sizeof("EUCJP")];
    char stringpool_str1419[sizeof("EBCDICFR297+EURO")];
    char stringpool_str1422[sizeof("TCVN57121:1993")];
    char stringpool_str1439[sizeof("MSTURK")];
    char stringpool_str1446[sizeof("EBCDICCPIT")];
    char stringpool_str1450[sizeof("EBCDICUS37+EURO")];
    char stringpool_str1451[sizeof("KOI8U")];
    char stringpool_str1468[sizeof("ISO2022KR")];
    char stringpool_str1492[sizeof("SHIFTJIS2004")];
    char stringpool_str1524[sizeof("EXTENDEDUNIXCODEPACKEDFORMATFORJAPANESE")];
    char stringpool_str1536[sizeof("MACCENTRALEUROPE")];
    char stringpool_str1559[sizeof("UTF32LE")];
    char stringpool_str1592[sizeof("SHIFTJISX0213")];
    char stringpool_str1593[sizeof("EUCJIS2004")];
    char stringpool_str1600[sizeof("HEBREW")];
    char stringpool_str1617[sizeof("EBCDICGREEK")];
    char stringpool_str1620[sizeof("MSHEBR")];
    char stringpool_str1627[sizeof("EBCDICCPFR")];
    char stringpool_str1628[sizeof("UTF16BE")];
    char stringpool_str1651[sizeof("UNICODELITTLE")];
    char stringpool_str1693[sizeof("IBMEUCJP")];
    char stringpool_str1699[sizeof("CSEUCTW")];
    char stringpool_str1711[sizeof("DECHANYU")];
    char stringpool_str1715[sizeof("EBCDICCPYU")];
    char stringpool_str1718[sizeof("EUCJISX0213")];
    char stringpool_str1731[sizeof("MACUKRAINE")];
    char stringpool_str1735[sizeof("EBCDICCPWT")];
    char stringpool_str1765[sizeof("UNICODE11UTF7")];
    char stringpool_str1777[sizeof("UNICODEBIG")];
    char stringpool_str1810[sizeof("EUCTW")];
    char stringpool_str1811[sizeof("UTF32BE")];
    char stringpool_str1823[sizeof("WINBALTRIM")];
    char stringpool_str1838[sizeof("CSEUCKR")];
    char stringpool_str1850[sizeof("EBCDICCPGR")];
    char stringpool_str1867[sizeof("KOKR.JOHAP92")];
    char stringpool_str1949[sizeof("EUCKR")];
    char stringpool_str1968[sizeof("MACHEBREW")];
    char stringpool_str2011[sizeof("UCS4INTERNAL")];
    char stringpool_str2014[sizeof("KOI8RU")];
    char stringpool_str2026[sizeof("ATARIST")];
    char stringpool_str2061[sizeof("UCS2INTERNAL")];
    char stringpool_str2085[sizeof("IBMEUCTW")];
    char stringpool_str2086[sizeof("EBCDICCPTR")];
    char stringpool_str2223[sizeof("MACTURKISH")];
    char stringpool_str2224[sizeof("IBMEUCKR")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "L6",
    "L5",
    "L1",
    "CPIS",
    "5601",
    "1125",
    "646",
    "ASCII",
    "866",
    "865",
    "855",
    "861",
    "CSASCII",
    "VISCII",
    "CSVISCII",
    "L4",
    "L10",
    "CP285",
    "858",
    "L8",
    "860",
    "850",
    "CP01146",
    "CSUCS4",
    "CP01145",
    "CYRILLIC",
    "CP01141",
    "CP01144",
    "PCK",
    "862",
    "852",
    "CP01148",
    "VISCII1.11",
    "MAC",
    "CP01140",
    "LATIN6",
    "LATIN5",
    "CSKZ1048",
    "LATIN1",
    "857",
    "X0201",
    "L2",
    "KSC5601",
    "863",
    "853",
    "LATIN4",
    "CP1250",
    "CCSID01146",
    "CCSID01145",
    "LATIN8",
    "CCSID01141",
    "CYRILLICASIAN",
    "X0208",
    "CN",
    "CCSID01144",
    "KZ1048",
    "LATIN10",
    "HZ",
    "CP01142",
    "CP870",
    "869",
    "CCSID01148",
    "CSPCP852",
    "CSKSC56011987",
    "ECMA114",
    "MSANSI",
    "ANSI1251",
    "ECMA118",
    "CCSID01140",
    "ISO646CN",
    "L7",
    "MS936",
    "X0212",
    "ISO88596",
    "ISO88595",
    "ISO88591",
    "ISO885916",
    "LATIN2",
    "ISO885915",
    "437",
    "L3",
    "ISO885911",
    "CSBIG5",
    "ISO88594",
    "BIG5",
    "CP01147",
    "ISO88598",
    "ISO885914",
    "CCSID01142",
    "IBM1166",
    "IBM1156",
    "IBM1165",
    "IBM1155",
    "CP01143",
    "IBM1161",
    "IBM866",
    "IBM856",
    "IBM865",
    "IBM855",
    "ISO885910",
    "IBM861",
    "IBM1146",
    "IBM1145",
    "IBM1141",
    "CP00924",
    "IBM1164",
    "IBM1154",
    "ASMO708",
    "IBM864",
    "IBM1158",
    "IBM1046",
    "C99",
    "LATIN7",
    "IBM1144",
    "IBM858",
    "IBM01146",
    "IBM01145",
    "IBM1148",
    "IBM01141",
    "IBM1160",
    "CNBIG5",
    "MSEE",
    "CCSID853",
    "IBM860",
    "IBM850",
    "IBM1125",
    "LATIN3",
    "IBM425",
    "IBM1140",
    "IBM500",
    "IBM285",
    "CCSID01147",
    "ISO88592",
    "IBM01144",
    "IBM16804",
    "IBM880",
    "CSPC8CODEPAGE1146",
    "HP15CN",
    "IBM01148",
    "CP01149",
    "IBM1026",
    "IBM1025",
    "CNS11643",
    "IBM1124",
    "IBM424",
    "CSPC8CODEPAGE1144",
    "CCSID01143",
    "IBM284",
    "IBM01140",
    "CSIBM1161",
    "CSIBM866",
    "CSIBM865",
    "CSIBM855",
    "IBM00858",
    "CSIBM861",
    "IBM875",
    "IBM871",
    "CCSID00924",
    "IBM1131",
    "IBM280",
    "IBM1162",
    "XMACCE",
    "IBM1112",
    "IBM862",
    "IBM852",
    "CSIBM864",
    "ISO2022CN",
    "IBM1142",
    "CSUNICODE11",
    "CSIBM858",
    "LATIN9",
    "CSIBM01145",
    "CSIBM01141",
    "KSC56011987",
    "ISO88597",
    "CSIBM860",
    "IBM838",
    "CSIBM1125",
    "IBM870",
    "MACICELAND",
    "CSIBM500",
    "CSIBM285",
    "IBM1130",
    "IBM01142",
    "IBM905",
    "CSIBM880",
    "CCSID01149",
    "CSISO2022CN",
    "ISO88593",
    "CSIBM01148",
    "DECHANZI",
    "CSPC8CODEPAGE437",
    "CSIBM1026",
    "IBM1252",
    "EBCDICCPIS",
    "IBM1122",
    "ISO885913",
    "IBM278",
    "CSIBM424",
    "IBM282",
    "CSIBM284",
    "EBCDICCPCA",
    "IBM775",
    "CSIBM01140",
    "EBCDICCPFI",
    "KSC56011989",
    "IBM1157",
    "IBM921",
    "CSIBM871",
    "IBM857",
    "KOREAN",
    "CSIBM280",
    "IBM1147",
    "CSIBM1162",
    "PT154",
    "ANSIX3.41986",
    "IBM1163",
    "IBM1153",
    "CSPC775BALTIC",
    "IBM924",
    "IBM863",
    "IBM853",
    "IBM1132",
    "PTCP154",
    "ANSIX3.41968",
    "CSUNICODE11UTF7",
    "IBM1047",
    "IBM1143",
    "CSUNICODE",
    "TDS565",
    "HPROMAN8",
    "CSPTCP154",
    "BIG5HKSCS",
    "IBM01147",
    "BIGFIVE",
    "ISO88599",
    "CSIBM870",
    "CSIBM01142",
    "CSIBM905",
    "GBK",
    "IBM4971",
    "EBCDICCPNL",
    "ISOIR6",
    "IBM01143",
    "CSIBM278",
    "ISOIR166",
    "ISOIR165",
    "IBM1123",
    "R8",
    "IBM12712",
    "IBM423",
    "IBM00924",
    "US",
    "CNGB",
    "EBCDICCPES",
    "CSGB2312",
    "IBM367",
    "CSIBM857",
    "TIS620",
    "ISOIR14",
    "IBM869",
    "ISOIR58",
    "IBM819",
    "IBM1137",
    "ISOIR101",
    "IBM437",
    "IBM1149",
    "USASCII",
    "CSIBM1163",
    "ARMSCII8",
    "IBM922",
    "ISOIR144",
    "CSIBM863",
    "CSIBM853",
    "IBM037",
    "UCS4",
    "ISOCELTIC",
    "ISOIR148",
    "CSIBM1047",
    "TIS6200",
    "ISO646US",
    "ISOIR110",
    "BIG52003",
    "TCVN",
    "CSIBM01147",
    "ISOIR126",
    "ISO646.IRV:1991",
    "JP",
    "SJIS",
    "IBM01149",
    "IBM277",
    "CHINESE",
    "IBMCP1133",
    "ISOIR100",
    "JAVA",
    "IBM1129",
    "CSIBM01143",
    "MSCYRL",
    "EBCDICCPDK",
    "IBM932",
    "IBM273",
    "IBM1097",
    "IBM943",
    "CSIBM423",
    "CSIBM00924",
    "ISO646JP",
    "ISO10646UCS4",
    "MACCYRILLIC",
    "ISOIR226",
    "IBM297",
    "IBM737",
    "CSIBM869",
    "EBCDICIS871+EURO",
    "EBCDICCPSE",
    "CSISOLATIN6",
    "CSISOLATIN5",
    "RK1048",
    "CSISOLATIN1",
    "CSISOLATINARABIC",
    "CSISOLATINCYRILLIC",
    "UCS2",
    "CSIBM037",
    "GB18030",
    "CSISOLATIN4",
    "ISOIR138",
    "ISO885916:2001",
    "ISO10646UCS2",
    "CSIBM01149",
    "CSIBM277",
    "GB2312",
    "ISO88595:1988",
    "ISO885915:1998",
    "TIS620.25291",
    "CSISO58GB231280",
    "MACTHAI",
    "TCVN57121",
    "ISO88594:1988",
    "ISO885914:1998",
    "UHC",
    "HZGB2312",
    "ISO88598:1988",
    "GB231280",
    "EBCDICFI278+EURO",
    "CSISO57GB1988",
    "CSIBM273",
    "CSISOLATIN2",
    "ISOIR57",
    "GB198880",
    "CSPC850MULTILINGUAL",
    "EBCDICCPNO",
    "ISOIR157",
    "EBCDICES284+EURO",
    "CSISOLATINGREEK",
    "SYSTEM1125",
    "ISOIR87",
    "STRK10482002",
    "CSIBM297",
    "ROMAN8",
    "TIS620.25331",
    "ISOIR230",
    "TCVN5712",
    "JIS0208",
    "ARABIC",
    "EBCDICCPCH",
    "ISO885910:1992",
    "CSISOLATIN3",
    "TIS620.25330",
    "ISO88596:1987",
    "MSKANJI",
    "ISO88591:1987",
    "WINDOWS1256",
    "WINDOWS1255",
    "WINDOWS1251",
    "JISX0201",
    "ISOIR127",
    "WINDOWS1254",
    "WINDOWS1258",
    "ISO88593:1988",
    "WINDOWS1250",
    "UCS4LE",
    "ELOT928",
    "CSHALFWIDTHKATAKANA",
    "EBCDICSE278+EURO",
    "JISX0208",
    "EBCDICDK277+EURO",
    "CSMACINTOSH",
    "CSPC862LATINHEBREW",
    "EBCDICCPHE",
    "SDECKANJI",
    "EUCCN",
    "ISOIR159",
    "ISO2022JP",
    "ISO88592:1987",
    "ISOIR203",
    "WINDOWS1252",
    "ISO2022JP1",
    "ISOIR149",
    "IBMTHAI",
    "CSHPROMAN8",
    "UCS2LE",
    "ISOIR109",
    "TIS620.2533",
    "WINDOWS874",
    "EBCDICDE273+EURO",
    "ISO2022CNEXT",
    "MACARABIC",
    "CSISO14JISC6220RO",
    "ISO88597:1987",
    "CSISO87JISX0208",
    "JISX0212",
    "WINDOWS1257",
    "TACTIS",
    "JISX0212.19900",
    "EBCDICNO277+EURO",
    "MULELAO1",
    "WINDOWS1253",
    "EBCDICCPBE",
    "MACROMANIA",
    "ISO2022JP2004",
    "WINDOWS950",
    "ISO2022JPMS",
    "CSEUCPKDFMTJAPANESE",
    "CSISO2022KR",
    "CSISO159JISX02121990",
    "ISOIR179",
    "CSISOLATINHEBREW",
    "DECKANJI",
    "UNICODE11",
    "ISO88597:2003",
    "CSIBMTHAI",
    "CSISO2022JP",
    "JISX02011976",
    "ATARI",
    "EBCDICCYRILLIC",
    "ISO2022JP2",
    "GREEK8",
    "BIG5HKSCS:2001",
    "MACROMAN",
    "CNGBISOIR165",
    "BIG5HKSCS:2004",
    "ISO88599:1989",
    "MSGREEK",
    "WINDOWS936",
    "BIG5HKSCS:2008",
    "ISOIR199",
    "EBCDICCPUS",
    "EBCDICLATIN9EURO",
    "GREEK",
    "JISX02081990",
    "UTF16",
    "CSISO2022JP2",
    "JISX02121990",
    "JISC62261983",
    "UTF8",
    "CPGR",
    "UCS4SWAPPED",
    "UCS4BE",
    "JISC62201969RO",
    "EBCDICIT280+EURO",
    "ISO2022JP3",
    "MACINTOSH",
    "KOI8T",
    "EBCDICGB285+EURO",
    "MSARAB",
    "JISX02081983",
    "IBMEUCCN",
    "UCS2SWAPPED",
    "UCS2BE",
    "RISCOSLATIN1",
    "BIG5HKSCS:1999",
    "EBCDICCPGB",
    "DECKOREAN",
    "CSKOI8R",
    "EBCDICCPROECE",
    "GEORGIANPS",
    "EBCDICINTERNATIONAL500+EURO",
    "UTF7",
    "JOHAB",
    "GEORGIANACADEMY",
    "NEXTSTEP",
    "MACGREEK",
    "GB18030:2005",
    "UTF32",
    "KOI8R",
    "SHIFTJIS",
    "UTF16LE",
    "CSSHIFTJIS",
    "MACCROATIAN",
    "GB18030:2022",
    "EUCJP",
    "EBCDICFR297+EURO",
    "TCVN57121:1993",
    "MSTURK",
    "EBCDICCPIT",
    "EBCDICUS37+EURO",
    "KOI8U",
    "ISO2022KR",
    "SHIFTJIS2004",
    "EXTENDEDUNIXCODEPACKEDFORMATFORJAPANESE",
    "MACCENTRALEUROPE",
    "UTF32LE",
    "SHIFTJISX0213",
    "EUCJIS2004",
    "HEBREW",
    "EBCDICGREEK",
    "MSHEBR",
    "EBCDICCPFR",
    "UTF16BE",
    "UNICODELITTLE",
    "IBMEUCJP",
    "CSEUCTW",
    "DECHANYU",
    "EBCDICCPYU",
    "EUCJISX0213",
    "MACUKRAINE",
    "EBCDICCPWT",
    "UNICODE11UTF7",
    "UNICODEBIG",
    "EUCTW",
    "UTF32BE",
    "WINBALTRIM",
    "CSEUCKR",
    "EBCDICCPGR",
    "KOKR.JOHAP92",
    "EUCKR",
    "MACHEBREW",
    "UCS4INTERNAL",
    "KOI8RU",
    "ATARIST",
    "UCS2INTERNAL",
    "IBMEUCTW",
    "EBCDICCPTR",
    "MACTURKISH",
    "IBMEUCKR"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 114 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str21, ei_iso8859_10},
    {-1},
#line 108 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str23, ei_iso8859_9},
    {-1}, {-1}, {-1},
#line 58 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str27, ei_iso8859_1},
#line 363 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str28, ei_cp861},
    {-1}, {-1},
#line 315 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str31, ei_euc_kr},
#line 378 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str32, ei_cp1125},
#line 22 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str33, ei_ascii},
    {-1},
#line 13 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str35, ei_ascii},
    {-1},
#line 168 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str37, ei_cp866},
#line 371 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str38, ei_cp865},
#line 349 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str39, ei_cp855},
#line 362 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str40, ei_cp861},
    {-1}, {-1}, {-1},
#line 21 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str44, ei_ascii},
#line 215 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str45, ei_viscii},
    {-1}, {-1}, {-1}, {-1},
#line 217 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str50, ei_viscii},
#line 76 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str51, ei_iso8859_4},
    {-1},
#line 136 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str53, ei_iso8859_16},
    {-1},
#line 405 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str55, ei_ebcdic285},
    {-1},
#line 355 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str57, ei_cp858},
    {-1},
#line 126 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str59, ei_iso8859_14},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 359 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str65, ei_cp860},
#line 162 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str66, ei_cp850},
#line 500 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str67, ei_ebcdic1146},
#line 35 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str68, ei_ucs4},
#line 494 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str69, ei_ebcdic1145},
#line 81 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str70, ei_iso8859_5},
    {-1}, {-1},
#line 468 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str73, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 488 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str97, ei_ebcdic1144},
    {-1},
#line 270 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str99, ei_sjis},
    {-1}, {-1},
#line 165 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str102, ei_cp862},
#line 342 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str103, ei_cp852},
    {-1},
#line 512 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str105, ei_ebcdic1148},
    {-1}, {-1},
#line 216 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str108, ei_viscii},
    {-1}, {-1}, {-1}, {-1},
#line 173 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str113, ei_mac_roman},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 462 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str123, ei_ebcdic1140},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 113 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str130, ei_iso8859_10},
    {-1},
#line 107 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str132, ei_iso8859_9},
#line 203 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str133, ei_rk1048},
    {-1}, {-1},
#line 57 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str136, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 352 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str146, ei_cp857},
    {-1}, {-1}, {-1},
#line 229 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str150, ei_jisx0201},
#line 64 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str151, ei_iso8859_2},
    {-1}, {-1},
#line 255 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str154, ei_ksc5601},
    {-1}, {-1}, {-1},
#line 366 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str158, ei_cp863},
#line 345 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str159, ei_cp853},
#line 75 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str160, ei_iso8859_4},
    {-1},
#line 141 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str162, ei_cp1250},
#line 499 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163, ei_ebcdic1146},
    {-1},
#line 493 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str165, ei_ebcdic1145},
    {-1}, {-1},
#line 125 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str168, ei_iso8859_14},
#line 467 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str169, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1},
#line 198 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str174, ei_pt154},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 235 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str182, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 248 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str188, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1},
#line 487 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str193, ei_ebcdic1144},
#line 202 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str194, ei_rk1048},
#line 135 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str195, ei_iso8859_16},
#line 295 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str196, ei_hz},
#line 474 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str197, ei_ebcdic1142},
#line 426 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str198, ei_ebcdic870},
    {-1},
#line 374 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str200, ei_cp869},
#line 511 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str201, ei_ebcdic1148},
    {-1},
#line 343 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str203, ei_cp852},
    {-1}, {-1}, {-1}, {-1},
#line 259 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str208, ei_ksc5601},
#line 86 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str209, ei_iso8859_6},
#line 149 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str210, ei_cp1252},
    {-1}, {-1},
#line 146 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str213, ei_cp1251},
    {-1}, {-1}, {-1},
#line 94 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str217, ei_iso8859_7},
    {-1},
#line 461 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str219, ei_ebcdic1140},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 246 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str234, ei_iso646_cn},
    {-1}, {-1},
#line 120 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str237, ei_iso8859_13},
    {-1}, {-1},
#line 287 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str240, ei_cp936},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 242 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str249, ei_jisx0212},
#line 83 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str250, ei_iso8859_6},
    {-1},
#line 78 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str252, ei_iso8859_5},
    {-1}, {-1}, {-1},
#line 53 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str256, ei_iso8859_1},
    {-1}, {-1},
#line 132 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str259, ei_iso8859_16},
#line 63 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str260, ei_iso8859_2},
#line 128 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str261, ei_iso8859_15},
#line 336 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str262, ei_cp437},
#line 70 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str263, ei_iso8859_3},
    {-1},
#line 116 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str265, ei_iso8859_11},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 304 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str277, ei_ces_big5},
    {-1}, {-1},
#line 72 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str280, ei_iso8859_4},
    {-1},
#line 301 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str282, ei_ces_big5},
#line 506 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str283, ei_ebcdic1147},
    {-1}, {-1}, {-1}, {-1},
#line 99 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str288, ei_iso8859_8},
#line 122 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str289, ei_iso8859_14},
    {-1}, {-1}, {-1},
#line 473 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str293, ei_ebcdic1142},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 530 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str304, ei_ebcdic1166},
#line 524 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str305, ei_ebcdic1156},
#line 529 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str306, ei_ebcdic1165},
#line 523 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str307, ei_ebcdic1155},
    {-1},
#line 481 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str309, ei_ebcdic1143},
#line 329 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str310, ei_cp1161},
#line 167 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str311, ei_cp866},
#line 323 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str312, ei_cp856},
#line 370 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str313, ei_cp865},
#line 348 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str314, ei_cp855},
#line 110 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str315, ei_iso8859_10},
    {-1},
#line 361 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str317, ei_cp861},
    {-1},
#line 497 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str319, ei_ebcdic1146},
    {-1},
#line 491 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str321, ei_ebcdic1145},
    {-1}, {-1}, {-1},
#line 465 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str325, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 444 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str332, ei_ebcdic924},
    {-1},
#line 528 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str334, ei_ebcdic1164},
#line 522 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str335, ei_ebcdic1154},
    {-1}, {-1}, {-1}, {-1},
#line 87 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str340, ei_iso8859_6},
#line 368 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str341, ei_cp864},
    {-1},
#line 526 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str343, ei_ebcdic1158},
#line 326 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str344, ei_cp1046},
#line 51 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str345, ei_c99},
#line 119 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str346, ei_iso8859_13},
    {-1}, {-1},
#line 485 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str349, ei_ebcdic1144},
#line 354 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str350, ei_cp858},
    {-1}, {-1},
#line 498 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str353, ei_ebcdic1146},
    {-1},
#line 492 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str355, ei_ebcdic1145},
    {-1},
#line 509 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str357, ei_ebcdic1148},
    {-1},
#line 466 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str359, ei_ebcdic1141},
#line 527 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str360, ei_ebcdic1160},
    {-1},
#line 303 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str362, ei_ces_big5},
#line 143 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str363, ei_cp1250},
#line 346 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str364, ei_cp853},
    {-1}, {-1},
#line 358 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str367, ei_cp860},
#line 161 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str368, ei_cp850},
    {-1}, {-1},
#line 377 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str371, ei_cp1125},
#line 69 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str372, ei_iso8859_3},
    {-1},
#line 417 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str374, ei_ebcdic425},
#line 459 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str375, ei_ebcdic1140},
    {-1},
#line 418 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str377, ei_ebcdic500},
#line 404 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str378, ei_ebcdic285},
#line 505 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str379, ei_ebcdic1147},
#line 60 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str380, ei_iso8859_2},
    {-1}, {-1},
#line 486 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str383, ei_ebcdic1144},
#line 533 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str384, ei_ebcdic16804},
    {-1},
#line 435 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str386, ei_ebcdic880},
    {-1},
#line 502 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str388, ei_ebcdic1146},
    {-1},
#line 284 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str390, ei_euc_cn},
#line 510 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str391, ei_ebcdic1148},
    {-1},
#line 518 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str393, ei_ebcdic1149},
#line 448 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str394, ei_ebcdic1026},
    {-1},
#line 447 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str396, ei_ebcdic1025},
#line 300 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str397, ei_euc_tw},
    {-1},
#line 327 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str399, ei_cp1124},
    {-1}, {-1},
#line 414 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str402, ei_ebcdic424},
#line 490 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str403, ei_ebcdic1144},
    {-1},
#line 480 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str405, ei_ebcdic1143},
#line 401 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str406, ei_ebcdic284},
    {-1}, {-1},
#line 460 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str409, ei_ebcdic1140},
    {-1}, {-1},
#line 330 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str412, ei_cp1161},
#line 169 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str413, ei_cp866},
    {-1},
#line 372 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str415, ei_cp865},
#line 350 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str416, ei_cp855},
    {-1},
#line 356 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str418, ei_cp858},
#line 364 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str419, ei_cp861},
    {-1},
#line 433 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421, ei_ebcdic875},
    {-1}, {-1}, {-1},
#line 430 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str425, ei_ebcdic871},
    {-1}, {-1},
#line 443 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str428, ei_ebcdic924},
    {-1}, {-1},
#line 170 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str431, ei_cp1131},
#line 397 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str432, ei_ebcdic280},
    {-1},
#line 331 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str434, ei_cp1162},
#line 176 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str435, ei_mac_centraleurope},
    {-1},
#line 453 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str437, ei_ebcdic1112},
    {-1}, {-1}, {-1},
#line 164 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str441, ei_cp862},
#line 341 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str442, ei_cp852},
#line 369 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str443, ei_cp864},
    {-1}, {-1}, {-1}, {-1},
#line 292 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str448, ei_iso2022_cn},
#line 471 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str449, ei_ebcdic1142},
#line 30 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str450, ei_ucs2be},
    {-1},
#line 357 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str452, ei_cp858},
    {-1}, {-1}, {-1},
#line 131 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str456, ei_iso8859_15},
#line 496 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str457, ei_ebcdic1145},
    {-1}, {-1}, {-1},
#line 470 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str461, ei_ebcdic1141},
    {-1},
#line 256 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str463, ei_ksc5601},
    {-1}, {-1},
#line 90 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str466, ei_iso8859_7},
    {-1}, {-1},
#line 360 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str469, ei_cp860},
#line 422 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str470, ei_ebcdic838},
    {-1}, {-1},
#line 380 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str473, ei_cp1125},
    {-1},
#line 425 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str475, ei_ebcdic870},
    {-1}, {-1},
#line 177 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str478, ei_mac_iceland},
#line 421 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str479, ei_ebcdic500},
#line 407 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str480, ei_ebcdic285},
#line 456 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str481, ei_ebcdic1130},
    {-1},
#line 472 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str483, ei_ebcdic1142},
    {-1},
#line 438 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str485, ei_ebcdic905},
    {-1}, {-1},
#line 437 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str488, ei_ebcdic880},
#line 517 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str489, ei_ebcdic1149},
#line 293 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str490, ei_iso2022_cn},
    {-1},
#line 66 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str492, ei_iso8859_3},
#line 514 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str493, ei_ebcdic1148},
#line 285 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str494, ei_euc_cn},
#line 337 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str495, ei_cp437},
#line 449 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str496, ei_ebcdic1026},
#line 148 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str497, ei_cp1252},
#line 431 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str498, ei_ebcdic871},
#line 454 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str499, ei_ebcdic1122},
    {-1},
#line 117 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str501, ei_iso8859_13},
    {-1},
#line 393 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str503, ei_ebcdic278},
#line 416 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str504, ei_ebcdic424},
    {-1},
#line 400 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str506, ei_ebcdic282},
    {-1},
#line 403 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str508, ei_ebcdic284},
#line 383 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str509, ei_ebcdic037},
#line 339 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str510, ei_cp775},
#line 464 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str511, ei_ebcdic1140},
    {-1},
#line 394 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str513, ei_ebcdic278},
    {-1}, {-1}, {-1}, {-1},
#line 257 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str518, ei_ksc5601},
    {-1}, {-1},
#line 525 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str521, ei_ebcdic1157},
    {-1}, {-1}, {-1}, {-1},
#line 121 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str526, ei_iso8859_13},
#line 432 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str527, ei_ebcdic871},
#line 351 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str528, ei_cp857},
    {-1}, {-1}, {-1},
#line 260 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str532, ei_ksc5601},
    {-1},
#line 399 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str534, ei_ebcdic280},
#line 503 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str535, ei_ebcdic1147},
#line 332 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str536, ei_cp1162},
    {-1},
#line 196 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str538, ei_pt154},
#line 18 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str539, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 333 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str546, ei_cp1163},
#line 521 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str547, ei_ebcdic1153},
#line 340 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str548, ei_cp775},
    {-1},
#line 441 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str550, ei_ebcdic924},
    {-1}, {-1},
#line 365 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str553, ei_cp863},
#line 344 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str554, ei_cp853},
#line 457 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str555, ei_ebcdic1132},
#line 197 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str556, ei_pt154},
    {-1},
#line 17 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str558, ei_ascii},
#line 46 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str559, ei_utf7},
#line 450 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str560, ei_ebcdic1047},
#line 478 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str561, ei_ebcdic1143},
#line 26 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str562, ei_ucs2},
    {-1}, {-1},
#line 541 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str565, ei_tds565},
#line 187 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str566, ei_hp_roman8},
#line 199 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str567, ei_pt154},
#line 309 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str568, ei_big5hkscs2008},
#line 504 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str569, ei_ebcdic1147},
    {-1},
#line 302 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str571, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1},
#line 104 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str576, ei_iso8859_9},
#line 429 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str577, ei_ebcdic870},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 477 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str585, ei_ebcdic1142},
    {-1},
#line 440 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str587, ei_ebcdic905},
    {-1},
#line 286 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str589, ei_ces_gbk},
#line 531 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str590, ei_ebcdic4971},
#line 385 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str591, ei_ebcdic037},
    {-1},
#line 16 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str593, ei_ascii},
    {-1},
#line 479 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str595, ei_ebcdic1143},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 396 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str605, ei_ebcdic278},
    {-1}, {-1},
#line 211 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str608, ei_tis620},
    {-1},
#line 253 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str610, ei_isoir165},
#line 455 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str611, ei_ebcdic1123},
#line 189 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str612, ei_hp_roman8},
#line 532 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str613, ei_ebcdic12712},
#line 411 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str614, ei_ebcdic423},
    {-1}, {-1}, {-1},
#line 442 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str618, ei_ebcdic924},
    {-1},
#line 20 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str620, ei_ascii},
    {-1},
#line 280 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str622, ei_euc_cn},
#line 402 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str623, ei_ebcdic284},
#line 281 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str624, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1},
#line 19 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str629, ei_ascii},
#line 353 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str630, ei_cp857},
#line 206 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str631, ei_tis620},
#line 224 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str632, ei_iso646_jp},
    {-1}, {-1}, {-1}, {-1},
#line 373 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str637, ei_cp869},
#line 251 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str638, ei_gb2312},
    {-1},
#line 56 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str640, ei_iso8859_1},
#line 458 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str641, ei_ebcdic1137},
#line 62 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str642, ei_iso8859_2},
    {-1},
#line 335 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str644, ei_cp437},
#line 515 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str645, ei_ebcdic1149},
#line 12 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str646, ei_ascii},
    {-1},
#line 334 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str648, ei_cp1163},
#line 192 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str649, ei_armscii_8},
#line 324 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str650, ei_cp922},
    {-1}, {-1},
#line 80 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str653, ei_iso8859_5},
    {-1},
#line 367 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str655, ei_cp863},
#line 347 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str656, ei_cp853},
#line 381 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str657, ei_ebcdic037},
#line 33 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str658, ei_ucs4},
    {-1},
#line 127 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str660, ei_iso8859_14},
#line 106 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str661, ei_iso8859_9},
#line 451 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str662, ei_ebcdic1047},
    {-1}, {-1},
#line 207 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str665, ei_tis620},
#line 14 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str666, ei_ascii},
#line 74 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str667, ei_iso8859_4},
#line 540 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str668, ei_big5_2003},
#line 218 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str669, ei_tcvn},
    {-1},
#line 508 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str671, ei_ebcdic1147},
    {-1},
#line 93 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str673, ei_iso8859_7},
    {-1},
#line 15 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str675, ei_ascii},
    {-1},
#line 225 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str677, ei_iso646_jp},
#line 267 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str678, ei_sjis},
#line 516 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str679, ei_ebcdic1149},
    {-1},
#line 389 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str681, ei_ebcdic277},
#line 282 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str682, ei_euc_cn},
#line 205 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str683, ei_cp1133},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 55 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str692, ei_iso8859_1},
#line 52 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str693, ei_java},
    {-1},
#line 328 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str695, ei_cp1129},
    {-1},
#line 484 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str697, ei_ebcdic1143},
    {-1}, {-1}, {-1},
#line 145 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str701, ei_cp1251},
    {-1}, {-1},
#line 390 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str704, ei_ebcdic277},
    {-1},
#line 271 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str706, ei_cp932},
#line 387 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str707, ei_ebcdic273},
#line 452 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str708, ei_ebcdic1097},
    {-1}, {-1}, {-1},
#line 325 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str712, ei_cp943},
    {-1}, {-1}, {-1},
#line 413 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str716, ei_ebcdic423},
    {-1}, {-1}, {-1},
#line 446 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str720, ei_ebcdic924},
    {-1}, {-1},
#line 223 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str723, ei_iso646_jp},
    {-1}, {-1}, {-1},
#line 34 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str727, ei_ucs4},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 180 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str733, ei_mac_cyrillic},
    {-1},
#line 134 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str735, ei_iso8859_16},
#line 408 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str736, ei_ebcdic297},
#line 338 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str737, ei_cp737},
    {-1},
#line 376 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str739, ei_cp869},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 519 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str746, ei_ebcdic1149},
    {-1},
#line 395 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str748, ei_ebcdic278},
#line 115 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str749, ei_iso8859_10},
#line 109 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str750, ei_iso8859_9},
#line 200 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str751, ei_rk1048},
#line 59 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str752, ei_iso8859_1},
    {-1}, {-1},
#line 89 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str755, ei_iso8859_6},
    {-1},
#line 82 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str757, ei_iso8859_5},
#line 24 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str758, ei_ucs2},
#line 386 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str759, ei_ebcdic037},
#line 290 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str760, ei_gb18030_2022},
    {-1}, {-1}, {-1},
#line 77 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str764, ei_iso8859_4},
    {-1}, {-1},
#line 101 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str767, ei_iso8859_8},
    {-1},
#line 133 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str769, ei_iso8859_16},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 25 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str777, ei_ucs2},
    {-1}, {-1}, {-1},
#line 520 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str781, ei_ebcdic1149},
    {-1},
#line 392 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str783, ei_ebcdic277},
#line 279 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str784, ei_euc_cn},
#line 79 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str785, ei_iso8859_5},
#line 129 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str786, ei_iso8859_15},
    {-1}, {-1}, {-1},
#line 208 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str790, ei_tis620},
    {-1},
#line 252 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str792, ei_gb2312},
    {-1},
#line 186 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str794, ei_mac_thai},
    {-1}, {-1},
#line 220 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str797, ei_tcvn},
    {-1},
#line 73 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str799, ei_iso8859_4},
#line 123 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str800, ei_iso8859_14},
#line 316 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str801, ei_cp949},
#line 296 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str802, ei_hz},
#line 100 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str803, ei_iso8859_8},
    {-1}, {-1},
#line 250 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str806, ei_gb2312},
#line 482 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str807, ei_ebcdic1143},
#line 249 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str808, ei_iso646_cn},
#line 388 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str809, ei_ebcdic273},
    {-1}, {-1}, {-1}, {-1},
#line 65 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str814, ei_iso8859_2},
    {-1},
#line 247 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str816, ei_iso646_cn},
    {-1},
#line 245 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str818, ei_iso646_cn},
#line 163 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str819, ei_cp850},
    {-1},
#line 391 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str821, ei_ebcdic277},
    {-1}, {-1}, {-1},
#line 112 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str825, ei_iso8859_10},
    {-1}, {-1},
#line 495 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str828, ei_ebcdic1145},
    {-1},
#line 98 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str830, ei_iso8859_7},
    {-1},
#line 379 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str832, ei_cp1125},
    {-1},
#line 236 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str834, ei_jisx0208},
    {-1},
#line 201 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str836, ei_rk1048},
    {-1},
#line 410 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str838, ei_ebcdic297},
    {-1},
#line 188 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str840, ei_hp_roman8},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 210 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str846, ei_tis620},
#line 542 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str847, ei_tds565},
    {-1}, {-1},
#line 219 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str850, ei_tcvn},
    {-1}, {-1}, {-1}, {-1},
#line 234 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str855, ei_jisx0208},
#line 88 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str856, ei_iso8859_6},
#line 420 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str857, ei_ebcdic500},
    {-1},
#line 111 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str859, ei_iso8859_10},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 71 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str870, ei_iso8859_3},
#line 209 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str871, ei_tis620},
    {-1},
#line 84 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str873, ei_iso8859_6},
    {-1},
#line 268 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str875, ei_sjis},
#line 54 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str876, ei_iso8859_1},
    {-1}, {-1},
#line 156 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str879, ei_cp1256},
#line 154 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str880, ei_cp1255},
    {-1},
#line 144 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str882, ei_cp1251},
    {-1}, {-1}, {-1}, {-1},
#line 227 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str887, ei_jisx0201},
    {-1},
#line 85 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str889, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1},
#line 152 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str894, ei_cp1254},
    {-1}, {-1}, {-1},
#line 160 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str898, ei_cp1258},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 67 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str905, ei_iso8859_3},
    {-1},
#line 142 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str907, ei_cp1250},
    {-1},
#line 37 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str909, ei_ucs4le},
    {-1},
#line 95 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str911, ei_iso8859_7},
    {-1}, {-1},
#line 230 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str914, ei_jisx0201},
    {-1}, {-1},
#line 483 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str917, ei_ebcdic1143},
    {-1},
#line 231 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str919, ei_jisx0208},
    {-1},
#line 475 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str921, ei_ebcdic1142},
    {-1}, {-1}, {-1},
#line 174 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str925, ei_mac_roman},
#line 166 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str926, ei_cp862},
#line 415 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str927, ei_ebcdic424},
#line 265 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str928, ei_euc_jp},
#line 278 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str929, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 243 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str935, ei_jisx0212},
    {-1},
#line 272 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str937, ei_iso2022_jp},
#line 61 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str938, ei_iso8859_2},
    {-1},
#line 130 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str940, ei_iso8859_15},
    {-1}, {-1}, {-1},
#line 147 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str944, ei_cp1252},
    {-1},
#line 274 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str946, ei_iso2022_jp1},
    {-1}, {-1},
#line 258 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str949, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 423 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str956, ei_ebcdic838},
#line 190 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str957, ei_hp_roman8},
    {-1},
#line 31 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str959, ei_ucs2le},
    {-1}, {-1},
#line 68 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str962, ei_iso8859_3},
#line 213 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str963, ei_tis620},
    {-1}, {-1},
#line 214 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str966, ei_cp874},
    {-1}, {-1},
#line 469 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str969, ei_ebcdic1141},
#line 294 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str970, ei_iso2022_cn_ext},
    {-1}, {-1},
#line 185 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str973, ei_mac_arabic},
    {-1}, {-1}, {-1}, {-1},
#line 226 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str978, ei_iso646_jp},
    {-1}, {-1},
#line 91 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str981, ei_iso8859_7},
    {-1}, {-1}, {-1},
#line 238 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str985, ei_jisx0208},
#line 239 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str986, ei_jisx0212},
#line 158 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str987, ei_cp1257},
    {-1},
#line 212 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str989, ei_tis620},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 240 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str995, ei_jisx0212},
#line 476 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str996, ei_ebcdic1142},
    {-1}, {-1},
#line 204 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str999, ei_mulelao},
#line 150 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1000, ei_cp1253},
    {-1}, {-1}, {-1},
#line 419 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1004, ei_ebcdic500},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 179 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1019, ei_mac_romania},
    {-1}, {-1}, {-1},
#line 539 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1023, ei_iso2022_jp3},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 305 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1029, ei_cp950},
#line 277 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1030, ei_iso2022_jpms},
    {-1}, {-1}, {-1}, {-1},
#line 263 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1035, ei_euc_jp},
    {-1}, {-1},
#line 320 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1038, ei_iso2022_kr},
#line 244 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1039, ei_jisx0212},
    {-1}, {-1},
#line 118 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1042, ei_iso8859_13},
#line 103 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1043, ei_iso8859_8},
    {-1}, {-1},
#line 321 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1046, ei_dec_kanji},
    {-1},
#line 29 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1048, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 92 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1056, ei_iso8859_7},
    {-1},
#line 424 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1058, ei_ebcdic838},
    {-1}, {-1},
#line 273 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1061, ei_iso2022_jp},
    {-1}, {-1},
#line 228 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1064, ei_jisx0201},
    {-1},
#line 544 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1066, ei_atarist},
    {-1},
#line 436 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1068, ei_ebcdic880},
    {-1},
#line 275 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1070, ei_iso2022_jp2},
#line 96 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1071, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 307 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1078, ei_big5hkscs2001},
    {-1}, {-1}, {-1},
#line 171 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1082, ei_mac_roman},
    {-1},
#line 254 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1084, ei_isoir165},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 308 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1090, ei_big5hkscs2004},
#line 105 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1091, ei_iso8859_9},
#line 151 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1092, ei_cp1253},
#line 288 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1093, ei_cp936},
#line 310 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1094, ei_big5hkscs2008},
    {-1}, {-1},
#line 124 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1097, ei_iso8859_14},
    {-1}, {-1}, {-1},
#line 382 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1101, ei_ebcdic037},
#line 445 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1102, ei_ebcdic924},
    {-1},
#line 97 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1104, ei_iso8859_7},
    {-1}, {-1}, {-1},
#line 233 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1108, ei_jisx0208},
    {-1},
#line 38 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1110, ei_utf16},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 276 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1124, ei_iso2022_jp2},
    {-1}, {-1}, {-1}, {-1},
#line 241 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1129, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1},
#line 237 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1134, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1},
#line 23 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1139, ei_utf8},
    {-1}, {-1},
#line 375 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1142, ei_cp869},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 50 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1157, ei_ucs4swapped},
    {-1}, {-1}, {-1},
#line 36 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1161, ei_ucs4be},
#line 222 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1162, ei_iso646_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 489 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1177, ei_ebcdic1144},
    {-1}, {-1}, {-1}, {-1},
#line 538 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1182, ei_iso2022_jp3},
    {-1},
#line 172 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1184, ei_mac_roman},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 195 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1193, ei_koi8_t},
    {-1}, {-1}, {-1},
#line 501 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1197, ei_ebcdic1146},
    {-1},
#line 157 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1199, ei_cp1256},
    {-1},
#line 232 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1201, ei_jisx0208},
    {-1}, {-1},
#line 283 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1204, ei_euc_cn},
    {-1}, {-1},
#line 48 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1207, ei_ucs2swapped},
    {-1}, {-1}, {-1},
#line 27 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1211, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 545 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1225, ei_riscos1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 306 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1238, ei_big5hkscs1999},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 406 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1248, ei_ebcdic285},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 314 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1284, ei_euc_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 138 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1295, ei_koi8_r},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 427 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1302, ei_ebcdic870},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 194 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1311, ei_georgian_ps},
    {-1}, {-1},
#line 513 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1314, ei_ebcdic1148},
    {-1}, {-1},
#line 44 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1317, ei_utf7},
    {-1}, {-1},
#line 317 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1320, ei_johab},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 193 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1330, ei_georgian_academy},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 191 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1337, ei_nextstep},
    {-1}, {-1}, {-1},
#line 182 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1341, ei_mac_greek},
    {-1},
#line 289 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1343, ei_gb18030_2005},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 41 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1358, ei_utf32},
#line 137 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1359, ei_koi8_r},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 266 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1370, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 40 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1376, ei_utf16le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 269 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1383, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 178 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1401, ei_mac_croatian},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 291 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1407, ei_gb18030_2022},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 261 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1418, ei_euc_jp},
#line 507 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1419, ei_ebcdic1147},
    {-1}, {-1},
#line 221 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1422, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 153 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1439, ei_cp1254},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 398 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1446, ei_ebcdic280},
    {-1}, {-1}, {-1},
#line 463 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1450, ei_ebcdic1140},
#line 139 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1451, ei_koi8_u},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 319 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1468, ei_iso2022_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 537 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1492, ei_shift_jisx0213},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 262 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1524, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 175 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1536, ei_mac_centraleurope},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 43 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1559, ei_utf32le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 536 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1592, ei_shift_jisx0213},
#line 535 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1593, ei_euc_jisx0213},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 102 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1600, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 434 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1617, ei_ebcdic875},
    {-1}, {-1},
#line 155 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1620, ei_cp1255},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 409 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1627, ei_ebcdic297},
#line 39 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1628, ei_utf16be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 32 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1651, ei_ucs2le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 264 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1693, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 298 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1699, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 322 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1711, ei_dec_hanyu},
    {-1}, {-1}, {-1},
#line 428 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1715, ei_ebcdic870},
    {-1}, {-1},
#line 534 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1718, ei_euc_jisx0213},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 181 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1731, ei_mac_ukraine},
    {-1}, {-1}, {-1},
#line 384 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1735, ei_ebcdic037},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 45 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1765, ei_utf7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 28 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1777, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 297 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1810, ei_euc_tw},
#line 42 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1811, ei_utf32be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 159 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1823, ei_cp1257},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 312 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1838, ei_euc_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 412 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1850, ei_ebcdic423},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 318 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1867, ei_johab},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 311 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1949, ei_euc_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 184 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1968, ei_mac_hebrew},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 49 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2011, ei_ucs4internal},
    {-1}, {-1},
#line 140 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2014, ei_koi8_ru},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 543 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2026, ei_atarist},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 47 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2061, ei_ucs2internal},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 299 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2085, ei_euc_tw},
#line 439 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2086, ei_ebcdic905},
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
    {-1},
#line 183 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2223, ei_mac_turkish},
#line 313 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2224, ei_euc_kr}
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
