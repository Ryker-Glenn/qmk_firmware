#include QMK_KEYBOARD_H

enum custom_keycodes {
	SELALL = SAFE_RANGE,
	COPY,
	PASTE,
	REDO,
};

enum layer_names {
	_BASE,
	_FN,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
	case SELALL:
		if (record->event.pressed) { SEND_STRING(SS_DOWN(X_LCTL) SS_TAP(X_A) SS_UP(X_LCTL)); } 
		break;
	case COPY:
		if (record->event.pressed) { SEND_STRING(SS_DOWN(X_LCTL) SS_TAP(X_C) SS_UP(X_LCTL)); } 
		break;
	case PASTE:
		if (record->event.pressed) { SEND_STRING(SS_DOWN(X_LCTL) SS_TAP(X_V) SS_UP(X_LCTL)); } 
		break;
	case REDO:
		if (record->event.pressed) { SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LSFT) SS_TAP(X_Z) SS_UP(X_LCTL) SS_UP(X_LSFT)); } 
		break;
	}
	return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
		KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_MUTE,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS, SELALL, 
        KC_P4,   KC_P5,   KC_P6, 			COPY, 
        KC_P1,   KC_P2,   KC_P3,   KC_PENT, PASTE, 
			   	 KC_P0,   KC_PDOT, 		    REDO 
	),

	[_FN] = LAYOUT(
	    _____, _____, _____, _____, _____, 
		_____, _____, _____, _____, _____,
        _____, _____, _____,	    _____, 
        _____, _____, _____, _____, _____, 
			   _____, _____, 		_____ 
	)
};

bool encoder_update_kb(uint8_t index, bool clockwise) {
	if (clockwise) {
		tap_code(KC_VOLU);
	} else {
		tap_code(KC_VOLD);
	}
	return false;
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}