/*
 * Copyright (C) 1999-2009, 2023 Free Software Foundation, Inc.
 * This file is part of the cppp-reiconv library.
 *
 * The cppp-reiconv library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * The cppp-reiconv library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the cppp-reiconv library; see the file COPYING.
 * If not, see <https://www.gnu.org/licenses/>.
 */

/* Part 2 of iconv_open.
   Input:
     struct conv_struct * cd;
     unsigned int from_index;
     unsigned int from_surface;
     unsigned int to_index;
     unsigned int to_surface;
     int discard_ilseq;
   Output: none.
   Side effects: Fills cd.
 */

cd->iindex = from_index;
cd->ifuncs = all_encodings[from_index].ifuncs;
cd->oindex = to_index;
cd->ofuncs = all_encodings[to_index].ofuncs;
cd->oflags = all_encodings[to_index].oflags;
/* Initialize the loop functions. */
cd->lfuncs.loop_convert = unicode_loop_convert;
cd->lfuncs.loop_reset = unicode_loop_reset;
/* Initialize the surfaces. */
cd->isurface = from_surface;
cd->osurface = to_surface;
/* Initialize the states. */
memset(&cd->istate, '\0', sizeof(state_t));
memset(&cd->ostate, '\0', sizeof(state_t));
/* Initialize the operation flags. */
cd->discard_ilseq = discard_ilseq;
cd->fallbacks.mb_to_uc_fallback = NULL;
cd->fallbacks.uc_to_mb_fallback = NULL;
cd->fallbacks.data = NULL;
cd->hooks.uc_hook = NULL;
cd->hooks.data = NULL;
/* Done. */
