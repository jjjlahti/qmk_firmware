/* jjjlahti <jjjlahti@outlook.com> 2023
*/

#pragma once

#ifdef RGB_MATRIX_ENABLE
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
    #define RGB_MATRIX_TIMEOUT 900000 // 900 seconds / 15 min
    // #define RGB_DISABLE_WITH_FADE_OUT
    //#define RGB_IDLE_TIMEOUT 3000
    //#define RGB_IDLE_MINIMUM_BRIGHTNESS RGB_MATRIX_MAXIMUM_BRIGHTNESS*0.15
    //#define RGB_IDLE_MAXIMUM_BRIGHTNESS RGB_MATRIX_MAXIMUM_BRIGHTNESS*0.5
    //#define RGB_FADE_IN
#endif