/**
 * @file codepage_to_ei.h
 * @brief A mapping of codepages to encoding indexes.
 * @copyright Copyright (C) 2024 The C++ Plus Project.
 */

#ifndef _CODEPAGE_TO_EI_H_
#define _CODEPAGE_TO_EI_H_

#include "encoding_indexes.h" // IWYU pragma: keep

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2)
#define DEFCODEPAGE(codepage, xxx) [codepage] = ei_##xxx + 1,
#define DEFINDEX(alias, name)

static const int codepage_to_eindex[] = {
#include "encodings.h.snippet"
};

#undef DEFINDEX
#undef DEFENCODING
#undef DEFCODEPAGE

#endif /* _CODEPAGE_TO_EI_H_ */
