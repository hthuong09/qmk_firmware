#include QMK_KEYBOARD_H
#include "rgb_matrix_types.h"
#include "rgb_matrix_helper.h"

void reset_led_settings() {
    rgb_matrix_set_flags(LED_FLAG_ALL);
    rgb_matrix_mode(RGB_MATRIX_CYCLE_LEFT_RIGHT);
    rgb_matrix_set_speed(127);
    rgb_matrix_sethsv(0, 255, 255);
}
