#pragma once

#include "quantum.h"

#define XXX    KC_NO
#define _____  KC_TRNS

#define LAYOUT( \
	K10, K00, K11, K01, K12, K02, K13, K03, K14, K04, K15, K05, K16, K06, K17, KB0, KB1, KB2, KB3, KB4, \
	K30, K20, K31, K21, K32, K22, K33, K23, K34, K24, K35, K25, K36, K26, K37, KC0, KC1, KC2, KC3, KC4, \
		 K40, K51, K41, K52, K42, K53, K43, K54, K44, K55, K45, K56, K46, K57, KD0, KD1, KD2,      KD4, \
	     K60, K71, K61, K72, K62, K73, K63, K74, K64, K75, K65, K76, K66, K77, KE0, KE1, KE2, KE3, KE4, \
	K80, K90, K81,                K93,           K84, K95, K85, K96, K86, K97, 		KJ1, KJ2,      KJ4  \
) { \
	{ K00, K01, K02, K03, K04, K05, K06, XXX }, \
	{ K10, K11, K12, K13, K14, K15, K16, K17 }, \
	{ K20, K21, K22, K23, K24, K25, K26, XXX }, \
	{ K30, K31, K32, K33, K34, K35, K36, K37 }, \
	{ K40, K41, K42, K43, K44, K45, K46, XXX }, \
	{ XXX, K51, K52, K53, K54, K55, K56, K57 }, \
	{ K60, K61, K62, K63, K64, K65, K66, XXX }, \
	{ XXX, K71, K72, K73, K74, K75, K76, K77 }, \
	{ K80, K81, XXX, XXX, K84, K85, K86, XXX }, \
	{ K90, XXX, XXX, K93, XXX, K95, K96, K97 }, \
	{ XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
	{ KB0, KB1, KB2, KB3, KB4, XXX, XXX, XXX }, \
    { KC0, KC1, KC2, KC3, KC4, XXX, XXX, XXX }, \
    { KD0, KD1, KD2, XXX, KD4, XXX, XXX, XXX }, \
    { KE0, KE1, KE2, KE3, KE4, XXX, XXX, XXX }, \
	{ XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
	{ XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
	{ XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
	{ XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
	{ XXX, KJ1, KJ2, XXX, KJ4, XXX, XXX, XXX }  \
}
