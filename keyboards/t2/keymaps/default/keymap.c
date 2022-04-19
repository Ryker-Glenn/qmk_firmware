#include QMK_KEYBOARD_H
#include "print.h"

enum custom_keycodes {
	EMAIL = SAFE_RANGE,
	PASS,
	PIN,
	TESTA,
	TESTB,
	TESTC,
	TESTD,
};

enum layer_names {
	_BASE,
	_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	 [_BASE] = LAYOUT(
	    KC_ESC,  KC_GRV,  KC_1,     KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, 	KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_MUTE,
	    KC_TAB,  KC_Q, 	  KC_W,     KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, EMAIL, 	KC_P7, 	 KC_P8,   KC_P9,   KC_PPLS, TESTA,
			     KC_CAPS, KC_A,     KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  PASS, 		KC_P4,   KC_P5,   KC_P6,            TESTB,
			     KC_LSFT, KC_Z,     KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT, KC_UP,   PIN, 		KC_P1,   KC_P2,   KC_P3,   KC_PENT, TESTC,
	    KC_LCTL, KC_LGUI, KC_LALT, 		              KC_SPC,           KC_RALT, KC_UNDO, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, 	         KC_P0,   KC_PDOT, 		    TESTD
	 ),

	 [_FN] = LAYOUT(
	_____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,    _____, _____, _____, _____, _____,
	_____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,    _____, _____, _____, _____, _____,
		   _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,    _____, _____, _____,	       _____,
		   _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,    _____, _____, _____, _____, _____,
	_____, _____, _____,                      _____,        _____, _____, _____, _____, _____, _____,		    	  _____, _____, 	   _____
	 )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
	    case EMAIL: if (record->event.pressed) {      SEND_STRING("email"); } break;
	    case  PASS: if (record->event.pressed) {       SEND_STRING("pass"); } break;
	    case   PIN: if (record->event.pressed) {        SEND_STRING("pin"); } break;
	    case TESTA: if (record->event.pressed) {      SEND_STRING("testa"); } break;
	    case TESTB: if (record->event.pressed) {      SEND_STRING("testb"); } break;
	    case TESTC: if (record->event.pressed) {      SEND_STRING("testc"); } break;
	    case TESTD: if (record->event.pressed) { SEND_STRING("lol testie"); } break;
	}
	return true;
}
