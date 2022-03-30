#pragma once

#ifdef RGB_MATRIX_ENABLE
    #define RGB_DISABLE_TIMEOUT 900000     // 15 minutes in miliseconds
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
    #define RGB_MATRIX_KEYPRESSES // REACTIVE, SPLASH modes
#endif
