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
     * ┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐ ┌───┬───┐
     * │ F1│ F2│ F3│ F4││ F5│ F6│ F7│ F8││ F9│F10│F11│F12│ │ V-│ V+│
     * ╞═══╪═══╪═══╪═══╪╧══╤╧══╤╧══╤╧══╤╧╧═╤═╧═╤═╧═╤═╧═╤═╧═╪═══╪═══╡
     * │Esc│  1│  2│  3│  4│  5│  6│  7│  8│  9│  0│  -│  =│  \│  `│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
     * │ Tab │  Q│  W│  E│  R│  T│  Y│  U│  I│  O│  P│  [│  ]│ Bksp│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Ctrl │  A│  S│  D│  F│  G│  H│  J│  K│  L│  ;│  '│  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     * │  Shift │  Z│  X│  C│  V│  B│  N│  M│  ,│  .│  /│  Shift   │
     * └────┬───┴┬──┼───┼───┴─┬─┴───┴───┼───┴┬──┴┬─┬┴──┬┴──┬───┬───┤
     *      │Tmux│  │ Fn│ Cmd │  Space  │ Alt│ Fn│ │ ← │ ↓ │ ↑ │ → │
     *      └────┘  └───┴─────┴─────────┴────┴───┘ └───┴───┴───┴───┘
     */

    [_BASE] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,     KC_F5,   KC_F6,   KC_F7,   KC_F8,     KC_F9,   KC_F10,   KC_F11,   KC_F12,        KC_VOLD,   KC_VOLU,
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSLS,   KC_GRV,
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC,  KC_BSPC,
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,            KC_ENTER,
        KC_LSHIFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,                  KC_RSHIFT,
             KC_F4,          MO(_FN),    KC_LCMD,   KC_SPACE,   KC_RALT, MO(_FN),                     KC_LEFT,     KC_DOWN,     KC_UP,     KC_RGHT
    ),

    /* Function Layer
     * ┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐ ┌───┬───┐
     * │   │   │   │   ││   │   │   │   ││   │   │   │F13│ │F14│F15│
     * ╞═══╪═══╪═══╪═══╪╧══╤╧══╤╧══╤╧══╤╧╧═╤═╧═╤═╧═╤═╧═╤═╧═╪═══╪═══╡
     * │Esc│   │   │   │   │   │   │   │   │   │   │   │   │   │   │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
     * │ Tab │   │   │End│   │   │   │PgU│   │   │   │   │   │ Del │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Ctrl │Hom│   │PgD│   │   │ ← │ ↓ │ ↑ │ → │   │   │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     * │  Shift │   │   │   │   │   │   │   │   │   │   │  Shift   │
     * └────┬───┴┬──┼───┼───┴─┬─┴───┴───┼───┴┬──┴┬─┬┴──┬┴──┬───┬───┤
     *      │Tmux│  │ Fn│ Cmd │  Space  │ Alt│ Fn│ │ ← │ ↓ │ ↑ │ → │
     *      └────┘  └───┴─────┴─────────┴────┴───┘ └───┴───┴───┴───┘
     */
    [_FN] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_F13,         KC_F14,   KC_F15,
        _______, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        _______,   KC_NO,   KC_NO,   KC_END,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PGUP, KC_NO,    KC_NO,    KC_DEL,
        _______,    KC_HOME, KC_NO,   KC_PGDN, KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_NO,              _______,
        _______,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,                    _______,
             _______,        _______,    _______,   _______,    _______, _______,                     KC_NO,       KC_NO,       KC_NO,     KC_NO
    )
};
