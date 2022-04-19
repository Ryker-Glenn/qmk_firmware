#pragma once

#include "quantum.h"

#define XXX    KC_NO
#define _____  KC_TRNS

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06,          KA0, KA1, KA2, KA3, KA4, \
    K10, K11, K12, K13, K14, K15, K16, K17,     KB0, KB1, KB2, KB3, KB4, \
    K20, K21, K22, K23, K24, K25, K26,          KC0, KC1, KC2,      KC4, \
    K30, K31, K32, K33, K34, K35, K36, K37,     KD0, KD1, KD2, KD3, KD4, \
    K40, K41, K42, K43, K44, K45, K46,               KE1, KE2,      KE4, \
         K51, K52, K53, K54, K55, K56, K57,                              \
    K60, K61, K62, K63, K64, K65, K66,                                   \
         K71, K72, K73, K74, K75, K76, K77,                              \
    K80, K81,           K84, K85, K86,                                   \
    K90,           K93,      K95, K96, K97                               \
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
	{ KA0, KA1, KA2, KA3, KA4, XXX, XXX, XXX }, \
    { KB0, KB1, KB2, KB3, KB4, XXX, XXX, XXX }, \
    { KC0, KC1, KC2, XXX, KC4, XXX, XXX, XXX }, \
    { KD0, KD1, KD2, KD3, KD4, XXX, XXX, XXX }, \
	{ XXX, KE1, KE2, XXX, KE4, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
	{ XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
	{ XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
	{ XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
	{ XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }  \
}
