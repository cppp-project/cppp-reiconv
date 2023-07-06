# CMake script for cppp-reiconv/tests


option(ENABLE_TEST "Enable cppp-reiconv test suites build." OFF)

if (ENABLE_TEST)
    # Init CTest
    enable_testing()
    include(CTest)
    message(STATUS "Test suite for 'cppp-reiconv' enabled.")

    # Includes
    include_directories("${srcdir}/tests")
    include_directories("${output_includedir}")

    # Test executables
    add_executable(cmp           "${srcdir}/tests/cmp.cpp")
    add_executable(table-from    "${srcdir}/tests/table-from.cpp")
    add_executable(table-to      "${srcdir}/tests/table-to.cpp")
    add_executable(reiconv-test  "${srcdir}/tests/reiconv-test.cpp")
    add_executable(test-shiftseq "${srcdir}/tests/test-shiftseq.cpp")
    add_executable(genutf8       "${srcdir}/tests/genutf8.cpp")
    add_executable(gengb18030z   "${srcdir}/tests/gengb18030z.cpp")
    add_executable(uniq-u        "${srcdir}/tests/uniq-u.cpp")

    target_link_libraries(table-from    libcppp-reiconv.shared)
    target_link_libraries(table-to      libcppp-reiconv.shared)
    target_link_libraries(reiconv-test  libcppp-reiconv.shared)
    target_link_libraries(test-shiftseq libcppp-reiconv.shared)

    set_target_properties(cmp           PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}" )
    set_target_properties(table-from    PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}" )
    set_target_properties(table-to      PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}" )
    set_target_properties(reiconv-test  PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}" )
    set_target_properties(test-shiftseq PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}" )
    set_target_properties(genutf8       PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}" )
    set_target_properties(gengb18030z   PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}" )
    set_target_properties(uniq-u        PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}" )

    if(WIN32)
        set(BATEXT ".bat")
    else()
        set(BATEXT "")
    endif()

    # Test macro
    macro(test state encoding)
        add_test( NAME "check-${state}-${encoding}"
                  WORKING_DIRECTORY "${output_testsdir}"
                  COMMAND "${srcdir}/tests/check-${state}${BATEXT}" "${srcdir}/tests/data" "${encoding}" )
    endmacro(test)
    
    # Init test

    add_custom_command(TARGET genutf8 POST_BUILD
        COMMAND "${output_testsdir}/genutf8" > "${srcdir}/tests/data/UTF-8.TXT"
        WORKING_DIRECTORY "${output_testsdir}"
        COMMENT "Generating UTF-8 test data ... "
    )

    file(COPY "${srcdir}/tests/data/GB18030-2005.IRREVERSIBLE.TXT" DESTINATION "${output_testsdir}")
    file(COPY_FILE "${srcdir}/tests/data/GB18030-2005-BMP.TXT" "${output_testsdir}/tmp-GB18030-2005.TXT")
    add_custom_command(TARGET gengb18030z POST_BUILD
        COMMAND "${output_testsdir}/gengb18030z" >> "${output_testsdir}/tmp-GB18030-2005.TXT"
        WORKING_DIRECTORY "${output_testsdir}"
        COMMENT "Generating GB18030:2005 test data ... "
    )
    add_custom_command(TARGET gengb18030z POST_BUILD
        COMMAND "sort" < "${output_testsdir}/tmp-GB18030-2005.TXT" > "${srcdir}/tests/data/GB18030-2005.TXT"
        WORKING_DIRECTORY "${output_testsdir}"
        COMMENT "Sorting GB18030:2005 test data ... "
    )

    file(COPY_FILE "${srcdir}/tests/data/GB18030-2022-BMP.TXT" "${output_testsdir}/tmp-GB18030-2022.TXT")
    add_custom_command(TARGET gengb18030z POST_BUILD
        COMMAND "${output_testsdir}/gengb18030z" >> "${output_testsdir}/tmp-GB18030-2022.TXT"
        WORKING_DIRECTORY "${output_testsdir}"
        COMMENT "Generating GB18030:2022 test data ... "
    )
    add_custom_command(TARGET gengb18030z POST_BUILD
        COMMAND "sort" < "${output_testsdir}/tmp-GB18030-2022.TXT" > "${srcdir}/tests/data/GB18030-2022.TXT"
        WORKING_DIRECTORY "${output_testsdir}"
        COMMENT "Sorting GB18030:2022 test data ... "
    )

    # Start test

    # General multi-byte encodings
    test("stateless" "UTF-8")
    test("stateful"  "UTF-16")
    test("stateful"  "UCS-2BE")
    test("stateful"  "UCS-2LE")
    test("stateful"  "UCS-4BE")
    test("stateful"  "UCS-4LE")
    test("stateful"  "UTF-16BE")
    test("stateful"  "UTF-16LE")
    test("stateful"  "UTF-32")
    test("stateful"  "UTF-32BE")
    test("stateful"  "UTF-32LE")
    test("stateful"  "UTF-7")

    # 8-bit encodings
    test("stateless" "ISO-8859-1")
    test("stateless" "ISO-8859-2")
    test("stateless" "ISO-8859-3")
    test("stateless" "ISO-8859-4")
    test("stateless" "ISO-8859-5")
    test("stateless" "ISO-8859-6")
    test("stateless" "ISO-8859-7")
    test("stateless" "ISO-8859-8")
    test("stateless" "ISO-8859-9")
    test("stateless" "ISO-8859-10")
    test("stateless" "ISO-8859-11")
    test("stateless" "ISO-8859-13")
    test("stateless" "ISO-8859-14")
    test("stateless" "ISO-8859-15")
    test("stateless" "ISO-8859-16")
    test("stateless" "KOI8-R")
    test("stateless" "KOI8-U")
    test("stateless" "KOI8-RU")
    test("stateless" "CP1250")
    test("stateless" "CP1251")
    test("stateless" "CP1252")
    test("stateless" "CP1253")
    test("stateless" "CP1254")
    test("stateless" "CP1255")
    test("stateful"  "CP1255")
    test("stateless" "CP1256")
    test("stateless" "CP1257")
    test("stateless" "CP1258")
    test("stateful"  "CP1258")
    test("stateless" "CP850")
    test("stateless" "CP862")
    test("stateless" "CP866")
    test("stateless" "CP1131")
    test("stateless" "MacRoman")
    test("stateless" "MacCentralEurope")
    test("stateless" "MacIceland")
    test("stateless" "MacCroatian")
    test("stateless" "MacRomania")
    test("stateless" "MacCyrillic")
    test("stateless" "MacUkraine")
    test("stateless" "MacGreek")
    test("stateless" "MacTurkish")
    test("stateless" "MacHebrew")
    test("stateless" "MacArabic")
    test("stateless" "MacThai")
    test("stateless" "HP-ROMAN8")
    test("stateless" "NEXTSTEP")
    test("stateless" "ARMSCII-8")
    test("stateless" "Georgian-Academy")
    test("stateless" "Georgian-PS")
    test("stateless" "KOI8-T")
    test("stateless" "PT154")
    test("stateless" "RK1048")
    test("stateless" "MuleLao-1")
    test("stateless" "CP1133")
    test("stateless" "TIS-620")
    test("stateless" "CP874")
    test("stateless" "VISCII")
    test("stateless" "TCVN")
    test("stateful"  "TCVN")

    # CJK character sets
    test("stateless" "ISO646-JP")
    test("stateless" "JIS_X0201")
    test("stateless" "ISO646-CN")
    test("stateless" "ISO-IR-165")

    # CJK encodings
    test("stateless" "EUC-JP")
    test("stateless" "SHIFT_JIS")
    test("stateless" "CP932")
    test("stateful"  "ISO-2022-JP")
    test("stateful"  "ISO-2022-JP-2")
    test("stateful"  "ISO-2022-JP-1")
    test("stateful"  "ISO-2022-JP-MS")
    test("stateless" "EUC-CN")
    test("stateless" "GBK")
    test("stateless" "CP936")
    test("stateless" "GB18030:2005")
    test("stateless" "GB18030:2022")
    test("stateful"  "ISO-2022-CN")
    test("stateful"  "ISO-2022-CN-EXT")
    test("stateful"  "HZ")
    test("stateless" "EUC-TW")
    test("stateless" "BIG5")
    test("stateless" "CP950")
    test("stateless" "BIG5-HKSCS:1999")
    test("stateful"  "BIG5-HKSCS:1999")
    test("stateless" "BIG5-HKSCS:2001")
    test("stateful"  "BIG5-HKSCS:2001")
    test("stateless" "BIG5-HKSCS:2004")
    test("stateful"  "BIG5-HKSCS:2004")
    test("stateless" "BIG5-HKSCS:2008")
    test("stateful"  "BIG5-HKSCS:2008")
    test("stateless" "EUC-KR")
    test("stateless" "CP949")
    test("stateless" "JOHAB")
    test("stateful"  "ISO-2022-KR")

    # Shift sequence before invalid multibyte character
    add_test( NAME test-shiftseq
              WORKING_DIRECTORY "${output_testsdir}"
              COMMAND "${output_testsdir}/test-shiftseq" )
    
    #if(CMAKE_SYSTEM_NAME STREQUAL "AIX")
    # AIX specific encodings
    test("stateless" "CP856")
    test("stateless" "CP922")
    test("stateless" "CP1046")
    test("stateless" "CP1124")
    test("stateless" "CP1129")
    test("stateless" "CP1161")
    test("stateless" "CP1162")
    test("stateless" "CP1163")
    #endif()
    
    # OSF/1 specific encodings
    test("stateless" "DEC-KANJI")
    test("stateless" "DEC-HANYU")

    # DOS specific encodings
    test("stateless" "CP437")
    test("stateless" "CP737")
    test("stateless" "CP775")
    test("stateless" "CP852")
    test("stateless" "CP853")
    test("stateless" "CP855")
    test("stateless" "CP857")
    test("stateless" "CP858")
    test("stateless" "CP860")
    test("stateless" "CP861")
    test("stateless" "CP863")
    test("stateless" "CP864")
    test("stateless" "CP865")
    test("stateless" "CP869")
    test("stateless" "CP1125")

    # Extra encodings
    test("stateless" "EUC-JISX0213")
    test("stateless" "SHIFT_JISX0213")
    test("stateful"  "ISO-2022-JP-3")
    test("stateless" "BIG5-2003")
    test("stateless" "TDS565")
    test("stateless" "ATARIST")
    test("stateless" "RISCOS-LATIN1")

endif()
