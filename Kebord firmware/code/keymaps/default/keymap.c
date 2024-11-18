#include QMK_KEYBOARD_H

// Define layer names
enum layers {
    _BASE,
    _LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 
    [_BASE] = LAYOUT(
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,   
        KC_LBRC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC, 
        KC_MINS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, 
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_LGUI, KC_RSFT, 
        _______,  _______, MO(_LOWER), KC_LCTL, KC_SPC, KC_TAB, KC_ENT, KC_SPC, KC_BSPC, KC_LALT, _______, _______
    ),
    
    [_LOWER] = LAYOUT(
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_CAPS, 
        _______,  _______, _______, _______, _______, _______, KC_SLSH, _______, KC_UP,   _______, KC_BSLS, _______,
        _______,  _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
