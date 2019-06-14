/**
 * Basic temp sensor driver prototype
 */

#include <Arduino.h>
#include "TapeSensor.h"

#define LEFT_SENSOR PA_4
#define RIGHT_SENSOR PA_5
#define TUNING_POTENTIOMETER PA_6

PinName lastSensor = LEFT_SENSOR; // arbitrarily set

uint8_t leftSensor();
uint8_t rightSensor();

int getTapeFollowingError() {
    uint8_t left = leftSensor();
    uint8_t right = rightSensor();
    if (left && right) {
        return ON_TAPE;
    } else if (right) {
        lastSensor = RIGHT_SENSOR;
        return LEFT_OFF_RIGHT_ON;
    } else if (left) {
        lastSensor = LEFT_SENSOR;
        return RIGHT_OFF_LEFT_ON;
    } else if (lastSensor == RIGHT_SENSOR) {
        return BOTH_OFF_LAST_RIGHT;
    } else {
        return BOTH_OFF_LAST_LEFT;
    }
}

uint8_t leftSensor() {
    return analogRead(LEFT_SENSOR) > analogRead(TUNING_POTENTIOMETER);
}

uint8_t rightSensor() {
    return analogRead(RIGHT_SENSOR) > analogRead(TUNING_POTENTIOMETER);
}