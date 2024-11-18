# Custom Hand-Wired Ergonomic Keyboard

This repository contains the complete guide, firmware, and resources for my custom hand-wired ergonomic keyboard. The keyboard is powered by an RP2040 Zero microcontroller and features a fully customizable keymap using [QMK Firmware](https://qmk.fm). It is designed for enhanced productivity and ergonomic comfort.

![Keyboard Image](/Photos/full%20Keyboard%201.jpg)

---

## Features
- **Microcontroller**: RP2040 Zero
- **Firmware**: [QMK Firmware](https://qmk.fm)
- **Keymap Layers**:
  - **Lower Layer**: Arrow keys, navigation, and additional symbols

---

## Folder Structure
- **`Kebord firmware`**:-
    - **`code\keyboard.json`**:  Pin Configuration and Configuration file for matrix size.
    - **`code\keymaps\default\keymap.c`**: Contains the keymap Layout
    - **`Kebord firmware\uf2 file`**: Contains file for booting RP2040 Zero
- **`cad file`**:-
  - **`cad file\frame`**: Contains AutoCAD frame file
  - **`cad file\key cap 3d model`**: Contains 3d model of key cap 
- **`Photos`**: Contains sum Photos snd video of keyboard 
- **`readme.md`**: This file!

---

### Keymap Layout
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,   
        KC_LBRC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC, 
        KC_MINS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, 
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_LGUI, KC_RSFT, 
        _______,  _______, MO(_LOWER), KC_LCTL, KC_SPC, KC_TAB, KC_ENT, KC_SPC, KC_BSPC, KC_LALT, _______, _______
### Base Layer
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_CAPS, 
        _______,  _______, _______, _______, _______, _______, KC_SLSH, _______, KC_UP,   _______, KC_BSLS, _______,
        _______,  _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______

---

### References

  - **How to Build a Handwired Keyboard**: https://youtu.be/hjml-K-pV4E?si=V6a1lCvNd93fQ8Kw 
