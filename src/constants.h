#pragma once
#include "pins_arduino.h"

// Motor Constants
// fullforward = 2000, fullback = 1000
#define MOTOR_FULLFORWARD    2000
#define MOTOR_FULLBACK       1000
#define MOTOR_STOP           1500.0

#define RF_MAX_DIST           200

// Pins
#define LED_PIN                12
#define ENCODER_PIN1           18
#define ENCODER_PIN2           19
     
#define TRIGGER_PIN_FRONT      21
#define ECHO_PIN_FRONT         20
#define TRIGGER_PIN_BACK        3
#define ECHO_PIN_BACK           2

#define ESC1_PIN                8 
#define ESC2_PIN                9

// V These pins probably need to be changed

#define BATTERY_SCL             16
#define BATTERY_SDA             17

// RADIO CONSTANTS

#define RADIO_OVERRIDE_VOLTAGE  4.0
#define RADIO_OVERRIDE_PIN      PIN_A4
#define RADIO_OVERRIDE_THROTTLE PIN_A5
#define RADIO_OVERRIDE_LIGHTS   PIN_A3
#define RADIO_OVERRIDE_SOUND    PIN_A2
#define RADIO_OVERRIDE_DETECT   PIN_A6

// SONAR CONSTANTS

#define USPin1                 PIN_A0
#define USPin2                 PIN_A1

// DISTANCE CONSTANCE

#define APPROACH_DISTANCE       40.0 // inches
#define STOP_DISTANCE           20.0 // inches
#define DISTANCE_CONSTANT       100 / 30 // multiplying number

// the number of times loop() runs in a second
// might change if more things are added to loop()
#define LOOP_CONSTANT           17