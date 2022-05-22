#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_ESC, LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), ALL_T(KC_G), KC_LSFT, KC_Z, KC_X, KC_C, KC_V, MEH_T(KC_B), KC_GRV, KC_INS, KC_LEFT, KC_RGHT, KC_LGUI, KC_LALT, LT(5,KC_END), LT(3,KC_BSPC), LT(4,KC_DEL), LT(2,KC_HOME), KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, TG(1), RESET, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, ALL_T(KC_H), RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_SCLN), KC_QUOT, MEH_T(KC_N), KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DOWN, KC_LBRC, KC_RBRC, KC_RALT, KC_RGUI, KC_PGUP, KC_PGDN, LT(5,KC_ENT), LT(3,KC_SPC)),
	[1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_TRNS, LSFT_T(KC_A), LCTL_T(KC_R), LALT_T(KC_S), LGUI_T(KC_T), ALL_T(KC_D), KC_TRNS, KC_Z, KC_X, KC_C, KC_V, MEH_T(KC_B), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_TRNS, ALL_T(KC_H), RGUI_T(KC_N), RALT_T(KC_E), RCTL_T(KC_I), RSFT_T(KC_O), KC_TRNS, MEH_T(KC_K), KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_EJCT, KC_SLEP, KC_PWR, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_MPLY, KC_MFFD, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_MUTE, KC_VOLU, KC_NO, KC_NO, RSG(KC_3), RSG(KC_4), KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_MINS, KC_PLUS, KC_EXLM, KC_EQL, KC_NO, KC_CAPS, KC_LBRC, KC_LT, KC_GT, KC_RBRC, KC_GRV, KC_TRNS, KC_PERC, KC_ASTR, KC_HASH, KC_AT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CIRC, KC_QUES, KC_DLR, KC_UNDS, KC_NO, KC_TILD, KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_NO, KC_NO, KC_PIPE, KC_AMPR, KC_BSLS, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_GRV), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, ALL_T(KC_NO), KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), MEH_T(KC_NO), KC_NO, KC_NO, KC_ENT, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_UP, KC_END, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, RGUI(KC_LBRC), KC_PGDN, RGUI(KC_RBRC), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_TRNS, LSFT_T(KC_F5), LCTL_T(KC_F6), LALT_T(KC_F7), LGUI_T(KC_F8), ALL_T(KC_NO), KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, MEH_T(KC_NO), KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_NO, ALL_T(KC_ASTR), RGUI_T(KC_P4), RALT_T(KC_P5), RCTL_T(KC_P6), RSFT_T(KC_PLUS), KC_NO, MEH_T(KC_PEQL), KC_P1, KC_P2, KC_P3, KC_ENT, KC_TRNS, KC_P0, KC_NO, KC_PDOT, KC_ENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

