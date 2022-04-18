#pragma once

#include "quantum.h"

#define XXX    KC_NO
#define _____  KC_TRNS

#define LAYOUT( \
	R00, R01, R02, R03, R04, \
	R10, R11, R12, R13, R14, \
	R20, R21, R22, 		R24, \
	R30, R31, R32, R33, R34, \
	     R41, R42,      R44  \
) { \
	{ R00, R01, R02, R03, R04 }, \
	{ R10, R11, R12, R13, R14 }, \
	{ R20, R21, R22, XXX, R24 }, \
	{ R30, R31, R32, R33, R34 }, \
	{ XXX, R41, R42, XXX, R44 }  \
}
