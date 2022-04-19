#include QMK_KEYBOARD_H

enum custom_keycodes {
	EMAIL = SAFE_RANGE,
	PASS,
	PIN,
	TESTA,
	TESTB,
	TESTC,
	TESTD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	 [0] = LAYOUT(
	    KC_GRV, KC_1, KC_3, KC_5, KC_7, KC_9, KC_MINS, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_MUTE,
	    KC_ESC, KC_2, KC_4, KC_6, KC_8, KC_0, KC_EQL, KC_BSPC, KC_P7, KC_P8, KC_P9, KC_PPLS, TESTA,
        KC_Q, KC_E, KC_T, KC_U, KC_O, KC_LBRC, KC_BSLS, KC_P4, KC_P5, KC_P6, TESTB,
        KC_TAB, KC_W, KC_R, KC_Y, KC_I, KC_P, KC_RBRC, EMAIL, KC_P1, KC_P2, KC_P3, KC_PENT, TESTC,
    	KC_CAPS, KC_S, KC_F, KC_H, KC_K, KC_SCLN, KC_ENT, KC_P0, KC_PDOT, TESTD,
        KC_A, KC_D, KC_G, KC_J, KC_L, KC_QUOT, PASS,
        KC_LSFT, KC_X, KC_V, KC_N, KC_COMM, KC_SLSH, KC_UP,
	    KC_Z, KC_C, KC_B, KC_M, KC_DOT, KC_LSFT, PIN,
        KC_LCTL, KC_LALT, KC_RALT, KC_RCTL, KC_DOWN,
        KC_LGUI, KC_SPC, KC_UNDO, KC_LEFT, KC_RGHT
	 ),
	 [1] = LAYOUT(
	    _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
	    _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
	    _____, _____, _____, _____, _____, _____, _____, _____,	_____, _____,
	    _____, _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____, _____,
	    _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____
	 )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) tap_code(KC_PGDN);
        else           tap_code(KC_PGUP);
    }
    else if (index == 1) {
        if (clockwise) tap_code(KC_VOLU);
        else           tap_code(KC_VOLD);
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
