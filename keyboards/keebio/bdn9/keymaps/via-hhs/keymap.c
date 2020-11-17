#include QMK_KEYBOARD_H

enum layer_names {
  _ZERO,
  _ONE,
  _TWO,
  _THREE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_ZERO] = LAYOUT(
    LGUI(KC_0), MO(1),  KC_MUTE,
    KC_F19,     KC_F20, KC_F21,
    KC_F22,     KC_F23, KC_F24
),

[_ONE] = LAYOUT(
    _______, RGB_MOD, KC_MPLY,
    KC_F13,  KC_F14,  KC_F15,
    KC_F16,  KC_F17,  KC_F18
),

[_TWO] = LAYOUT(
    _______, _______, _______,
    _______, _______, _______,
    _______, _______, _______
),

[_THREE] = LAYOUT(
    _______, _______, _______,
    _______, _______, _______,
    _______, _______, _______
)

};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code16(LGUI(KC_MINUS));
        } else {
            tap_code16(LGUI(KC_EQUAL));
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
}
