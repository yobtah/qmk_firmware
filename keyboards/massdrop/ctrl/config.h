/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID           0x04D8
#define PRODUCT_ID          0xEED2
#define DEVICE_VER          0x0101

#define MANUFACTURER        "Massdrop Inc."
#define PRODUCT             "CTRL Keyboard"
#define SERIAL_NUM          "Unavailable"

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 8

/* MCU Port name definitions */
#define PA 0
#define PB 1

/* Port and Pin definition of key row hardware configuration */
#define MATRIX_ROW_PORTS PB, PB, PB, PB, PB, PB, PA, PA, PB, PB, PB
#define MATRIX_ROW_PINS   4,  5,  6,  7,  8,  9, 10, 11, 10, 11, 12

/* Port and Pin definition of key column hardware configuration */
#define MATRIX_COL_PORTS PA, PA, PA, PA, PA, PA, PA, PA
#define MATRIX_COL_PINS   0,  1,  2,  3,  4,  5,  6,  7

/* This Shift Register expands available hardware output lines to control additional peripherals */
/* It uses four lines from the MCU to provide 16 output lines */
/* Shift Register Clock configuration (MCU to ShiftRegister.RCLK) */
#define SR_EXP_RCLK_PORT            PB
#define SR_EXP_RCLK_PIN             14
/* Shift Register Output Enable configuration (MCU to ShiftRegister.OE_N) */
#define SR_EXP_OE_N_PORT            PB
#define SR_EXP_OE_N_PIN             15
/* SERCOM port to use for Shift Register SPI */
/* DATAOUT and SCLK must be configured to use hardware pins of this port */
#define SR_EXP_SERCOM_NUM           2
/* Shift Register SPI Data Out configuration (MCU.SERCOMx.PAD[0] to ShiftRegister.SER) */
#define SR_EXP_DATAOUT_PORT         PA
#define SR_EXP_DATAOUT_PIN          12
#define SR_EXP_DATAOUT_MUX          2
/* Shift Register SPI Serial Clock configuration (MCU.SERCOMx.PAD[1] to ShiftRegister.SRCLK) */
#define SR_EXP_SCLK_PORT            PA
#define SR_EXP_SCLK_PIN             13
#define SR_EXP_SCLK_MUX             2

/* Debug LED (Small LED Located near MCU) */
#define DEBUG_LED_ENABLE            1
#define DEBUG_LED_PORT              PA
#define DEBUG_LED_PIN               27

/* Additional debugging ports */
/* PCB M21 */
#define DEBUG_PORT1_ENABLE          1
#define DEBUG_PORT1_PORT            PB
#define DEBUG_PORT1_PIN             3
/* PCB M23 */
#define DEBUG_PORT2_ENABLE          1
#define DEBUG_PORT2_PORT            PB
#define DEBUG_PORT2_PIN             17
/* PCB M25 */
#define DEBUG_PORT3_ENABLE          1
#define DEBUG_PORT3_PORT            PA
#define DEBUG_PORT3_PIN             20

/* Debug Boot Tracing - During boot sequence, ground this pin to halt and display debug code using Debug LED */
/* This is useful in determining which hardware device may have malfunctioned or is improperly configured */
/* Feature is automatically disabled after successful boot */
/* PCB M27 */
#define DEBUG_BOOT_TRACING_ENABLE   1
#define DEBUG_BOOT_TRACING_PORT     PB
#define DEBUG_BOOT_TRACING_PIN      23

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

// Required BOOT key hold time (in ms) for restarting to bootloader -PS081419
#define BOOTKEY_HOLD_MS		2000

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* Force boot in NKRO mode */
//#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_LED_PROCESS_LIMIT 15
#define RGB_MATRIX_LED_FLUSH_LIMIT 10

#include "config_led.h"

// set initial color to white with half brightness
// explicitly set max brightness to the max possible
// not sure it's needed, but not confident how it's set otherwise
// jriekenberg/2020-12-01
// didn't seem to have any effect, so trying function call in keymap.c instead
//#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255
//#define RGB_MATRIX_STARTUP_HUE 0
//#define RGB_MATRIX_STARTUP_SAT 0
//#define RGB_MATRIX_STARTUP_VAL 127

// disable all RGB matrix effects - jriekenberg/2020-12-01
#define DISABLE_RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define DISABLE_RGB_MATRIX_BREATHING
#define DISABLE_RGB_MATRIX_BAND_SAT
#define DISABLE_RGB_MATRIX_BAND_VAL
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define DISABLE_RGB_MATRIX_CYCLE_ALL
#define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define DISABLE_RGB_MATRIX_DUAL_BEACON
#define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define DISABLE_RGB_MATRIX_RAINDROPS
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define DISABLE_RGB_MATRIX_TYPING_HEATMAP
#define DISABLE_RGB_MATRIX_DIGITAL_RAIN
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define DISABLE_RGB_MATRIX_SPLASH
#define DISABLE_RGB_MATRIX_MULTISPLASH
#define DISABLE_RGB_MATRIX_SOLID_SPLASH
#define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
