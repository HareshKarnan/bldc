/*
    Copyright 2019, 2022 Joel Svensson        svenssonjoel@yahoo.se

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "tokpar.h"

char prelude[] = {
#ifdef _PRELUDE
#include "prelude.xxd"
#endif
  ,0
};


void prelude_load(lbm_tokenizer_string_state_t *state,
                  lbm_tokenizer_char_stream_t *stream) {
  
  lbm_create_char_stream_from_string(state,
                                        stream,
                                        prelude);
}
