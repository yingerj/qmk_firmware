/*
Copyright 2020 Jack Yinger

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

#pragma once

#ifdef KEYBOARD_rev1
#    include "rev1.h"
#endif

#include "quantum.h"

// clang-format off
#define LAYOUT( \
        L00, L01, L02, L03, L04,         R00, R01, R02, R03, R04, \
        L10, L11, L12, L13, L14,         R10, R11, R12, R13, R14, \
        L20, L21, L22, L23, L24,         R20, R21, R22, R23, R24, \
                       L33, l34,         R30, R31,                \
                       L43, l44,         R40, R41                 \
    ) \
    { \
        { L00, L01, L02, L03, L04 }, \
        { L10, L11, L12, L13, L14 }, \
        { L20, L21, L22, L23, L24 }, \
        { KC_NO, KC_NO, KC_NO, L33, l34 }, \
        { KC_NO, KC_NO, KC_NO, L43, l44 }, \
        { R00, R01, R02, R03, R04 }, \
        { R10, R11, R12, R13, R14 }, \
        { R20, R21, R22, R23, R24 }, \
        { R30, R31, KC_NO, KC_NO, KC_NO }, \
        { R40, R41, KC_NO, KC_NO, KC_NO }  \
    }
// clang-format on

