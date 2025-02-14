/* Copyright 2021 Jon Higgs
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
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base Layer
     *
     *        X X         X X
     *
     *         U          X X X X
     *       L   R
     *         D          X X X X
     */

/* SATURN
          F1  F2,       SELECT,  START,

            UP,          1,  X,  L,  R,
        LEFT, RGHT,
           DOWN,         5,  Y,  B,  A
    )
 */

/* CUSTOM
          F1  F2,       SELECT,  START,

            UP,          A,  B,  X,  Y,
        LEFT, RGHT,
           DOWN,         LS, RS, LTr,RTr
    )
 */

    [0] = LAYOUT(
        KC_F1,    KC_F2,      KC_RSFT, KC_ENT,
             KC_UP,           KC_X,    KC_Z,    KC_S,    KC_R,
        KC_LEFT, KC_RGHT,
            KC_DOWN,          KC_A,    KC_Q,    KC_W,    KC_E
    )
};
