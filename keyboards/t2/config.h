/* Copyright 2021 Danny Nguyen <danny@keeb.io>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7433
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0000
#define MANUFACTURER    Ryker Frohock
#define PRODUCT         Take 2 rev 1

/* key matrix size */
#define MATRIX_ROWS 20
#define MATRIX_COLS 8

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000


#define DIODE_DIRECTION COL2ROW

// Weird layout with continuous rows from right to left
#define MATRIX_ROW_PINS 	   { F5, F6, F1, B1, B3, B2, D7, D3, B6, C6 }
#define MATRIX_COL_PINS 	   { F7, C7, F0, B7, D2, D4, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT  { NO_PIN, B1, B3, F6, F1, NO_PIN, NO_PIN, NO_PIN, NO_PIN, C7 }
#define MATRIX_COL_PINS_RIGHT  { F7, F5, F4, F0, D3, NO_PIN, NO_PIN, NO_PIN }
#define SPLIT_HAND_PIN D5
#define ENCODERS_PAD_A 		   { F4 }
#define ENCODERS_PAD_B 		   { B0 }
#define ENCODERS_PAD_A_RIGHT   { B2 }
#define ENCODERS_PAD_B_RIGHT   { B0 }


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define USE_I2C

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS
#define NO_MUSIC_MODE
