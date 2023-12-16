#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE

#ifdef TAPPING_TERM
    #undef TAPPING_TERM
#endif
#define TAPPING_TERM 200
