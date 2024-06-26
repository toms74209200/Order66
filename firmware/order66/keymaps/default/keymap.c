/* Copyright 2021 toms74209200
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
// Layer can't be changed after program.
// Layer that you want be default is to be set 0.
enum layer_names {
    _MAC,
    _MAC_CTRL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *  Base layer, pretty standard ANSI layout.
     * ,-----------------------------------------------------------.
     * |ESC| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0| - | = |  BS    |
     * |-----------------------------------------------------------|
     * | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |   \ |
     * |-----------------------------------------------------------|
     * |Caps/Fn| A | S | D | F | G | H | J | K | L | ; | ' |Return |
     * |-----------------------------------------------------------|
     * |Shift   | Z | X | C | V | B | N | M | , | . | /   | ↑ | `  |
     * |-----------------------------------------------------------|
     * | Fn|Alt |Gui|ei| Space |Space| Space |kana|Ctrl| ← | ↓ | → |
     * `-----------------------------------------------------------'
     */
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   KC_GRV, \
        MO(_MAC_CTRL), KC_LALT, KC_LGUI, KC_LNG2,KC_SPC,  KC_SPC,  KC_SPC,  KC_LNG1,KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT ),

    [1] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS,  KC_PSCR, \
        KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END ),
};
