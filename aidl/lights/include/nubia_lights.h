/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef NUBIA_LIGHTS_H
#define NUBIA_LIGHTS_H

/* LCD Backlight */
#define LCD_NODE              "/sys/class/backlight/panel0-backlight/brightness"
#define MAX_LCD_BRIGHTNESS    4095

/* LED Root Node */
#define LED_NODE              "/sys/class/leds/"

/* nubia leds for old devices */
#define NUBIA_LED             "nubia_led/"

#define LED_BLINK_MODE        "blink_mode"
#define LED_BRIGHTNESS        "brightness"
#define LED_COLOR             "outn"
#define LED_GRADE             "grade_parameter"
#define LED_FADE              "fade_parameter"

#define BLINK_ON              3
#define BLINK_CONST           1
#define BLINK_OFF             0

#define COLOR_DISABLE         16
#define COLOR_RED             48
#define COLOR_GREEN           64

/* rgb leds */
#define RGB_LED_RED           "red/"
#define RGB_LED_GREEN         "green/"
#define RGB_LED_BLUE          "blue/"

#define LED_BREATH            "breath"
#define LED_BRIGHTNESS        "brightness"
#define LED_DELAY_ON          "delay_on"
#define LED_DELAY_OFF         "delay_off"
#define LED_MAX_BRIGHTNESS    "max_brightness"

/* light strip for red magic devices*/
#define AW22XX_LED            "aw22xxx_led/"
#define LED_EFFECT            "effect"

#define LED_OFF               0
#define LED_NOTIFICATION      2
#define LED_BATTERY_CHARGING  8
#define LED_BATTERY_FULL      11

/* logo led for red magic devices*/
#define LED_BREATH_FEATURE    "breath_feature"

#define LOGO_LED_OFF          0
#define LOGO_LED_ON           "1 1000 0 700 0 255 3"
#define LOGO_LED_BREATH       "3 1000 0 700 0 255 3"

#endif // NUBIA_LIGHTS_H
