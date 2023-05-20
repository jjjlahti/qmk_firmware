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

#define MOUSEKEY_INTERVAL 6         // default: 20. Recommended to set as 1000/screen refresh rate; 1000/165 -> 6
#define MOUSEKEY_MAX_SPEED 3        // default: 10
#define MOUSEKEY_TIME_TO_MAX 60     // default: 30