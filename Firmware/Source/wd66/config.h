// Copyright 2024 11customa (@gan11a)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// #include config.h

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER "11customs"
#define PRODUCT "wd66"
#define MATRIX_ROWS 5
#define MATRIX_COLS 15
#define MATRIX_ROW_PINS {D1, D2, D3, D5, D0}
#define MATRIX_COL_PINS {D4, D6, D7, B4, B5, B6, C7, C6, F7, F6, F5, F4, F1, F0, E6}
#define UNUSED_PINS { B0, B1, B2, B3, B7 }
#define DIODE_DIRECTION COL2ROW
// #define DEBOUNCE 5
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
