# CMake script for cppp-reiconv/tests

# Init CTest
enable_testing()
include(CTest)
message(STATUS "Test suite for '${PROJECT_NAME}' enabled.")

# Includes
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/tests")
include_directories("${output_includedir}")

# Test executables
add_executable(data-generator  "${CMAKE_CURRENT_SOURCE_DIR}/tests/data-generator.cpp")
add_executable(test-bom-state  "${CMAKE_CURRENT_SOURCE_DIR}/tests/test-bom-state.cpp")
add_executable(test-discard    "${CMAKE_CURRENT_SOURCE_DIR}/tests/test-discard.cpp")
add_executable(check-encoding  "${CMAKE_CURRENT_SOURCE_DIR}/tests/check-encoding.cpp")
add_executable(check-stateful  "${CMAKE_CURRENT_SOURCE_DIR}/tests/check-stateful.cpp")
add_executable(check-stateless "${CMAKE_CURRENT_SOURCE_DIR}/tests/check-stateless.cpp")
add_executable(sort            "${CMAKE_CURRENT_SOURCE_DIR}/tests/sort.cpp")

target_link_libraries(test-bom-state  libcppp-reiconv.static)
target_link_libraries(test-discard  libcppp-reiconv.static)
target_link_libraries(check-encoding  libcppp-reiconv.static)
target_link_libraries(check-stateful  libcppp-reiconv.static)
target_link_libraries(check-stateless libcppp-reiconv.static)

set_target_properties(data-generator  PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}")
set_target_properties(test-bom-state  PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}")
set_target_properties(test-discard    PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}")
set_target_properties(check-encoding  PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}")
set_target_properties(check-stateful  PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}")
set_target_properties(check-stateless PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}")
set_target_properties(sort            PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${output_testsdir}")

macro(convert_to_crlf input_file output_file)
    file(READ ${input_file} file_content)
    file(WRITE ${output_file} "${file_content}")
endmacro()

# Test macro
macro(test state encoding)
    add_test( NAME "check-${state}-${encoding}"
              WORKING_DIRECTORY "${output_testsdir}"
              COMMAND ${EXECUTOR} "$<TARGET_FILE:check-${state}>" "${TEST_DATA_DIR}" "${encoding}"
              )
endmacro(test)

# Init test
set(TEST_DATA_DIR "${output_testsdir}/data")

# Copy data directory.
if (NOT EXISTS "${TEST_DATA_DIR}" OR TRUE)
    file(MAKE_DIRECTORY "${TEST_DATA_DIR}")
    file(GLOB_RECURSE TEST_DATA_FILES "${CMAKE_CURRENT_SOURCE_DIR}/tests/data/*")

    foreach(TEST_FILE ${TEST_DATA_FILES})
        if(NOT IS_DIRECTORY "${TEST_FILE}")
            get_filename_component(TEST_FILE_NAME "${TEST_FILE}" NAME)
            if ("${TEST_FILE_NAME}" MATCHES "\\.TXT$" AND (WIN32 OR WINCE OR WINDOWS_PHONE OR WINDOWS_STORE))
                # On Windows, copy the text-only file as CR LF.
                convert_to_crlf("${TEST_FILE}" "${TEST_DATA_DIR}/${TEST_FILE_NAME}")
            else()
                file(COPY_FILE "${TEST_FILE}" "${TEST_DATA_DIR}/${TEST_FILE_NAME}")
            endif()
        endif()
    endforeach()
    unset(TEST_DATA_FILES)
endif()

# Generate UTF-8 test data.
add_custom_command(TARGET data-generator POST_BUILD
    COMMAND ${EXECUTOR} "$<TARGET_FILE:data-generator>" "utf-8" > "${TEST_DATA_DIR}/UTF-8.TXT"
    WORKING_DIRECTORY "${output_testsdir}"
    COMMENT "Generating UTF-8 test data ... "
)

# Generate GB18030:2005 test data.
add_custom_command(TARGET data-generator POST_BUILD
    COMMAND "${CMAKE_COMMAND}" -E copy "${TEST_DATA_DIR}/GB18030-2005-BMP.TXT" "${TEST_DATA_DIR}/GB18030-2005.TXT"
    COMMAND ${EXECUTOR} "$<TARGET_FILE:data-generator>" gb18030z >> "${TEST_DATA_DIR}/GB18030-2005.TXT"
    WORKING_DIRECTORY "${output_testsdir}"
    COMMENT "Generating GB18030:2005 test data ... "
)
add_custom_command(TARGET data-generator POST_BUILD
    COMMAND ${EXECUTOR} "$<TARGET_FILE:sort>" "${TEST_DATA_DIR}/GB18030-2005.TXT" "${TEST_DATA_DIR}/GB18030-2005.TXT.tmp"
    COMMAND "${CMAKE_COMMAND}" -E copy "${TEST_DATA_DIR}/GB18030-2005.TXT.tmp" "${TEST_DATA_DIR}/GB18030-2005.TXT"
    COMMAND "${CMAKE_COMMAND}" -E remove "${TEST_DATA_DIR}/GB18030-2005.TXT.tmp"
    WORKING_DIRECTORY "${output_testsdir}"
    COMMENT "Sorting GB18030:2005 test data ... "
)

# Generate GB18030:2022 test data.
add_custom_command(TARGET data-generator POST_BUILD
    COMMAND "${CMAKE_COMMAND}" -E copy "${TEST_DATA_DIR}/GB18030-2022-BMP.TXT" "${TEST_DATA_DIR}/GB18030-2022.TXT"
    COMMAND ${EXECUTOR} "$<TARGET_FILE:data-generator>" gb18030z >> "${TEST_DATA_DIR}/GB18030-2022.TXT"
    WORKING_DIRECTORY "${output_testsdir}"
    COMMENT "Generating GB18030:2022 test data ... "
)
add_custom_command(TARGET data-generator POST_BUILD
    COMMAND ${EXECUTOR} "$<TARGET_FILE:sort>" "${TEST_DATA_DIR}/GB18030-2022.TXT" "${TEST_DATA_DIR}/GB18030-2022.TXT.tmp"
    COMMAND "${CMAKE_COMMAND}" -E copy "${TEST_DATA_DIR}/GB18030-2022.TXT.tmp" "${TEST_DATA_DIR}/GB18030-2022.TXT"
    COMMAND "${CMAKE_COMMAND}" -E remove "${TEST_DATA_DIR}/GB18030-2022.TXT.tmp"
    WORKING_DIRECTORY "${output_testsdir}"
    COMMENT "Sorting GB18030:2022 test data ... "
)

add_test(NAME check-encoding
         WORKING_DIRECTORY "${output_testsdir}"
         COMMAND ${EXECUTOR} "$<TARGET_FILE:check-encoding>"
         )

add_test(NAME test-bom-state
         WORKING_DIRECTORY "${output_testsdir}"
         COMMAND ${EXECUTOR} "$<TARGET_FILE:test-bom-state>"
         )

add_test(NAME test-discard
         WORKING_DIRECTORY "${output_testsdir}"
         COMMAND ${EXECUTOR} "$<TARGET_FILE:test-discard>"
         )

# General multi-byte encodings.
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

# 8-bit encodings.
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

# CJK character sets.
test("stateless" "ISO646-JP")
test("stateless" "JIS_X0201")
test("stateless" "ISO646-CN")
test("stateless" "ISO-IR-165")

# CJK encodings.
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

# AIX specific encodings.
test("stateless" "CP856")
test("stateless" "CP922")
test("stateless" "CP1046")
test("stateless" "CP1124")
test("stateless" "CP1129")
test("stateless" "CP1161")
test("stateless" "CP1162")
test("stateless" "CP1163")

# OSF/1 encodings.
test("stateless" "DEC-KANJI")
test("stateless" "DEC-HANYU")

# DOS specific encodings.
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

# Extra encodings.
test("stateless" "EUC-JISX0213")
test("stateless" "SHIFT_JISX0213")
test("stateful"  "ISO-2022-JP-3")
test("stateless" "BIG5-2003")
test("stateless" "TDS565")
test("stateless" "ATARIST")
test("stateless" "RISCOS-LATIN1")
