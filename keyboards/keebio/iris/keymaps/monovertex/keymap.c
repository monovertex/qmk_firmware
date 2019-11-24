#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(LCTL(KC_X), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_INS, LCTL(KC_C), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_HOME, LCTL(KC_Z), LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), LT(3,KC_G), LT(3,KC_H), RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_SCLN), KC_END, KC_LCTL, LT(1,KC_Z), KC_X, KC_C, KC_V, KC_B, KC_ESC, KC_ESC, KC_N, KC_M, KC_COMM, KC_DOT, LT(1,KC_SLSH), TG(4), LCTL(KC_V), KC_SPC, LT(2,KC_TAB), LT(2,KC_ENT), KC_BSPC, KC_DEL),
	[1] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_EXLM, KC_PLUS, KC_UNDS, KC_MINS, KC_TILD, KC_QUES, KC_LCBR, KC_RCBR, KC_LT, KC_GT, KC_F12, KC_TRNS, KC_NO, KC_EQL, KC_DQUO, KC_QUOT, KC_GRV, KC_PIPE, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_TRNS, KC_TRNS, KC_CIRC, KC_AMPR, KC_ASTR, KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN2, KC_BTN3, KC_BTN1, KC_NO, KC_NO, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, KC_NO, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_ACL2, KC_ACL1, KC_ACL0, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_NO, RGB_SPD, RGB_SPI, RGB_MODE_REVERSE, RGB_MODE_FORWARD, RGB_TOG, KC_PSCR, KC_NO, KC_PSLS, KC_PAST, KC_PMNS, RESET, KC_NO, KC_NO, KC_MRWD, KC_MFFD, KC_MPLY, RGB_VAI, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_CAPS, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, RGB_VAD, KC_NO, KC_P4, KC_P5, KC_P6, KC_PENT, KC_NO, KC_NO, KC_NO, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_PDOT),
	[4] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_ESC, KC_ESC, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS, KC_HOME, KC_SPC, KC_LALT, KC_ENT, KC_BSPC, KC_END)
};
