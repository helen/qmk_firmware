/*
Copyright 2021 Bryan Ong

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define PW LALT(LGUI(KC_BSLS)) // 1Password dialog
#define ALF LCTL(KC_SPC) // Alfred
#define ZOOM LGUI(KC_0) // Reset zoom level

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _L3,
    _L4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_MUTE,
        KC_MPLY,   KC_GRV,  KC_1,    KC_2,    KC_3,          KC_4,    KC_5,    KC_DEL,        KC_HOME, KC_PGUP, KC_6,     KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_NO,     KC_TAB,  KC_Q,    KC_W,    KC_E,          KC_R,    KC_T,    KC_BSLS,       KC_END,  KC_PGDN, KC_Y,     KC_U,       KC_I,       KC_O,       KC_P,       KC_QUOT,
        KC_F13,    KC_ESC,  KC_A,    KC_S,    KC_D,          KC_F,    KC_G,    KC_MINS,       PW,      KC_EQL,  KC_H,     KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
	    KC_NO,     KC_LSFT, KC_Z,    KC_X,    KC_C,          KC_V,    KC_B,    KC_LBRC,       KC_UP,   KC_RBRC, KC_N,     KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
        KC_F14,    ALF,     KC_LCTL, KC_LALT, KC_LGUI,       KC_NO,   MO(_FN), KC_LEFT,       KC_DOWN, KC_RGHT, KC_SPC,   KC_NO,      KC_RGUI,    KC_RALT,    KC_RCTL,    KC_INS
    ),
    [_FN] = LAYOUT(
        ZOOM,
        KC_TRNS,   KC_TRNS, KC_F1,   KC_F2,   KC_F3,         KC_F4,   KC_F5,   KC_TRNS,       RESET,   KC_TRNS, KC_F6,    KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F12,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_P7,      KC_P8,      KC_P9,      KC_TRNS,    KC_TRNS,
        KC_MPRV,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_P4,      KC_P5,      KC_P6,      KC_TRNS,    KC_TRNS,   
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_VOLU, KC_TRNS, KC_TRNS,  KC_P1,      KC_P2,      KC_P3,      KC_TRNS,    KC_TRNS,
        KC_MNXT,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_MPRV,       KC_VOLD, KC_MNXT, KC_TRNS,  KC_TRNS,    KC_P0,      KC_TRNS,    KC_TRNS,    KC_TRNS
    ),   
    [_L3] = LAYOUT(
        KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_HOME, KC_END,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_MNXT, KC_VOLD, KC_VOLU,  KC_MPLY,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    ), 
    [_L4] = LAYOUT(
        KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if(IS_LAYER_ON(_FN)) {
        if(clockwise){
            tap_code16(LGUI(KC_EQUAL));
        } else{
            tap_code16(LGUI(KC_MINUS));
        }
    } else {
        if(clockwise){
            tap_code16(LSA(KC_F12));
        } else{
            tap_code16(LSA(KC_F11));
        }
    }
    return;
}
