/*
 * m65_actionmap.c
 */

#include "m65.h"

#define _______ AC_TRNS

#define AC_MO_1 ACTION_LAYER_MOMENTARY(1)
#define AC_RGBT ACTION_FUNCTION(AF_RGB_TOG)
#define AC_RGBM ACTION_FUNCTION(AF_RGB_MOD)
#define AC_LCAPS ACTION_MODS_TAP_KEY(MOD_LCTL, KC_CAPS)
#define AC_ERST ACTION_FUNCTION(AF_EEPROM_RESET)
#define AC_LSPC ACTION_LAYER_TAP_KEY(1, KC_SPC)
#define AC_GESC ACTION_KEY(KC_GESC)

const action_t actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_default(
        AC_GESC,     AC_1,     AC_2, AC_3, AC_4, AC_5, AC_6, AC_7,    AC_8,   AC_9,    AC_0, AC_MINS,  AC_EQL, AC_BSPC, 
        AC_TAB,     AC_Q,     AC_W, AC_E, AC_R, AC_T, AC_Y, AC_U,    AC_I,   AC_O,    AC_P, AC_LBRC, AC_RBRC, AC_BSLS, AC_PGUP,
        AC_LCAPS,   AC_A,     AC_S, AC_D, AC_F, AC_G, AC_H, AC_J,    AC_K,   AC_L, AC_SCLN, AC_QUOT,           AC_ENT, AC_PGDN,
        AC_LSFT,    AC_Z,     AC_X, AC_C, AC_V, AC_B, AC_N, AC_M, AC_COMM, AC_DOT, AC_SLSH,          AC_RSFT,   AC_UP,  AC_END,
        AC_LCTL, AC_LGUI,  AC_LALT,                 AC_LSPC,                        AC_RALT, AC_MO_1, AC_LEFT, AC_DOWN, AC_RIGHT),
    [1] = LAYOUT_default(
        AC_GRV,   AC_F1,   AC_F2,    AC_F3,   AC_F4,   AC_F5,   AC_F6,   AC_F7,   AC_F8,   AC_F9,  AC_F10,  AC_F11,  AC_F12, _______,
        AC_BTLD, AC_RGBT, AC_RGBM,  AC_F24, AC_ERST, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, AC_LEFT, AC_DOWN,   AC_UP, AC_RGHT, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______),
    [2] = LAYOUT_default(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______),
    [3] = LAYOUT_default(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______),
};
