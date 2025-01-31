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

#pragma once

#include "quantum.h"

#define LAYOUT(                                                                                                  \
      k00,   k01,   k02,   k03,   k04,   k05,   k06,   k07,          k09,   k0a,   k0b,   k0c,   k0d,   k0e,     \
      k10,   k11,   k12,   k13,   k14,   k15,   k16,   k17,   k18,   k19,   k1a,   k1b,   k1c,   k1d,   k1e,     \
      k20,   k21,   k22,   k23,   k24,   k25,   k26,   k27,   k28,   k29,   k2a,   k2b,   k2c,          k2e,     \
      k30,   k31,   k32,   k33,   k34,   k35,   k36,   k37,   k38,   k39,   k3a,   k3b,          k3d,            \
      k40,   k41,   k42,   k43,   k44,   k45,   k46,   k47,   k48,   k49,   k4a,                 k4d,            \
      k50,          k52,   k53,          k55,          k57,   k58,          k5a,   k5b,          k5d,   k5e      \
) {                                                                                                              \
    { k00,   k01,   k02,   k03,   k04,   k05,   k06,   k07,   KC_NO, k09,   k0a,   k0b,   k0c,   k0d,   k0e },   \
    { k10,   k11,   k12,   k13,   k14,   k15,   k16,   k17,   k18,   k19,   k1a,   k1b,   k1c,   k1d,   k1e },   \
    { k20,   k21,   k22,   k23,   k24,   k25,   k26,   k27,   k28,   k29,   k2a,   k2b,   k2c,   KC_NO, k2e },   \
    { k30,   k31,   k32,   k33,   k34,   k35,   k36,   k37,   k38,   k39,   k3a,   k3b,   KC_NO, k3d,   KC_NO }, \
    { k40,   k41,   k42,   k43,   k44,   k45,   k46,   k47,   k48,   k49,   k4a,   KC_NO, KC_NO, k4d,   KC_NO }, \
    { k50,   KC_NO, k52,   k53,   KC_NO, k55,   KC_NO, k57,   k58,   KC_NO, k5a,   k5b,   KC_NO, k5d,   k5e   }  \
}
