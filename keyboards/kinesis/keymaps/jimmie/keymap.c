#include QMK_KEYBOARD_H

#define QWERTY 0 // Base qwerty


/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   | INS  | Left | Right|                                         | Up   | Down |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Ctrl | Alt  |         | Gui  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Home |         | PgUp |      |      |
*                                 | BkSp | Del  |------|         |------|Return| Space|
*                                 |      |      | End  |         | PgDn |      |      |
*                                 `--------------------'         `--------------------'
*/

enum layer_codes {
    QUERTY,
    COLEMAK,
    MEDIA,
    NAVIGATION,
    SYMBOLS,
    NUMBERS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [QWERTY] = LAYOUT_pretty(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SLCK,  KC_PAUS,  TG(1),    KC_NO,
    KC_EQL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                                                      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS,
    KC_ESC,  MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LSFT, KC_D),MT(MOD_LGUI, KC_F),ALL_T(KC_G),                            ALL_T(KC_H),    MT(MOD_RGUI, KC_J),MT(MOD_RSFT, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCOLON),KC_QUOTE,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                                      KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
              KC_GRV,   LT(MEDIA,KC_INS),   KC_LEFT,  KC_RGHT,                                                                                       KC_UP,    KC_DOWN,  KC_LBRC,  KC_RBRC,
                                         KC_LGUI, KC_LALT,                                                             KC_RALT, KC_RGUI,
                                                    LT(NUMBERS,KC_HOME),                                               LT(NUMBERS,KC_PGUP),
                  LT(SYMBOLS,KC_BSPC),  LT(NAVIGATION,KC_DEL),   ALL_T(KC_END),                                               ALL_T(KC_PGDN),  LT(NUMBERS,KC_ENTER), LT(SYMBOLS,KC_SPC)
  ),

  [COLEMAK] = LAYOUT_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
                    KC_TRANSPARENT,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                                                          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,
                    KC_TRANSPARENT,  KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,                                                                                                          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
                    KC_TRANSPARENT,  KC_A,     KC_R,     KC_S,     KC_T,     KC_D,                                                                                                          KC_N,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOT,
                    KC_TRANSPARENT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                                                                          KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_RSFT,
              KC_GRV,   KC_INS,   KC_LEFT,  KC_RGHT,                                                                                       KC_UP,    KC_DOWN,  KC_LBRC,  KC_RBRC,
                                                      KC_TRANSPARENT,  KC_TRANSPARENT,                                               KC_TRANSPARENT,  KC_TRANSPARENT,
                                                                KC_TRANSPARENT,                                               KC_TRANSPARENT,
                                            KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT,                                                KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [MEDIA] = LAYOUT_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT,    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,    RESET,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                        KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                        KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT,
              KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                       LGUI(LCTL(LSFT(KC_3))),RGUI(RSFT(KC_3)),LGUI(LCTL(LSFT(KC_4))),RGUI(RSFT(KC_4)),
                                                      KC_TRANSPARENT,  KC_TRANSPARENT,                                               KC_TRANSPARENT,  KC_TRANSPARENT,
                                                                KC_TRANSPARENT,                                               KC_TRANSPARENT,
                                            KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT,                                                KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [NAVIGATION] = LAYOUT_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT,    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,    RESET,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                               KC_NO,            KC_NO,         KC_PGUP,        KC_NO,         KC_NO,         KC_NO,
    KC_TRANSPARENT, KC_NO,          KC_NO,         KC_NO,           KC_NO,          KC_NO,                                                                          KC_TRANSPARENT, LGUI(KC_LBRACKET),KC_UP,          RGUI(KC_RBRACKET),KC_TRANSPARENT, KC_NO,
    KC_TRANSPARENT, KC_LCTL,    KC_LALT,    KC_LSFT,    KC_LGUI,    KC_HYPR,                                                                             KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LGUI(KC_Z),     LGUI(KC_X),     LGUI(KC_C),     LGUI(KC_V),     KC_MEH,                                                                              KC_TRANSPARENT, KC_HOME,        KC_PGDOWN,      KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
              KC_NO,   KC_NO,   KC_ENTER,  KC_SPC,                                                                                       KC_NO,    KC_NO,  KC_NO,  KC_NO,
                                                      KC_TRANSPARENT,  KC_TRANSPARENT,                                               KC_TRANSPARENT,  KC_TRANSPARENT,
                                                                KC_TRANSPARENT,                                               KC_TRANSPARENT,
                                            KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT,                                                KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [SYMBOLS] = LAYOUT_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT,    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,    RESET,
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
    KC_TRANSPARENT, KC_MINUS,       KC_PLUS,        KC_EXLM,        KC_EQUAL,       KC_TRANSPARENT,                                                                      KC_TRANSPARENT, KC_CIRC,        KC_QUES,        KC_DLR,         KC_UNDS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LBRACKET,    KC_LABK,        KC_RABK,        KC_RBRACKET,    KC_GRAVE,                                                                      KC_TILD,        KC_LCBR,        KC_LPRN,        KC_RPRN,        KC_RCBR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_ASTR,        KC_HASH,        KC_AT,          KC_TRANSPARENT,                                                                      KC_TRANSPARENT, KC_PIPE,        KC_AMPR,        KC_BSLASH,      KC_SLASH,       KC_TRANSPARENT,
                    KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                                                KC_NO,   KC_NO,   KC_NO,  KC_NO,
                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,                                               KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT,                                               KC_TRANSPARENT,
                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                               KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [NUMBERS] = LAYOUT_pretty(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_NO,    RESET,
    KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,                                                                  KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
    KC_TAB,   KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,                                    KC_SLASH,       KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_NO,
    KC_CAPS,  MT(MOD_LCTL, KC_F5),MT(MOD_LALT, KC_F6),MT(MOD_LSFT, KC_F7),MT(MOD_LGUI, KC_F8),KC_HYPR,                           ALL_T(KC_KP_ASTERISK),MT(MOD_RGUI, KC_4),MT(MOD_RSFT, KC_5),MT(MOD_RALT, KC_6),MT(MOD_RSFT, KC_KP_PLUS),    KC_NO,
    KC_LSFT,  KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_MEH,                                            MEH_T(KC_EQUAL),KC_1,           KC_2,           KC_3,           KC_ENTER,       KC_NO,
              KC_NO,   KC_NO,   KC_NO,  KC_NO,                                                                                       KC_0,           KC_NO,          KC_DOT,         KC_ENTER,
                                                      KC_TRANSPARENT,  KC_TRANSPARENT,                                               KC_TRANSPARENT,  KC_TRANSPARENT,
                                                                KC_TRANSPARENT,                                               KC_TRANSPARENT,
                                            KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT,                                                KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT
  ),

};
