#ifndef CONFIG_USER_H
#define CONFIG_USER_H

// #include "../../config.h"

#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS

// "D3", "D2", "D1", "D0"
#define MATRIX_ROW_PINS { D0, D1, D2, D3 }
// "D4", "D7", "E6", "B4", "B5", "B6", "B2", "B3", "B1", "F7", "F6", "F5", "F4"
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6, B5, B4, E6, D7, D4 }

#endif
