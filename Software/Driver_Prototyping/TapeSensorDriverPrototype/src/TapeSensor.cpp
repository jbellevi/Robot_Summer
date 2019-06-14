/**
 * Basic temp sensor driver prototype
 */

#include <Arduino.h>
#include "TapeSensor.h"

#define LEFT_SENSOR PA_4
#define RIGHT_SENSOR PA_5
#define TUNING_POTENTIOMETER PA_6

PinName lastSensor = LEFT_SENSOR; // arbitrarily set
uint32_t tape_sensor_threshold = 400;  

uint8_t leftSensor();
uint8_t rightSensor();

/**
 * Returns estimated error in tape following from two front sensors
 * Returns: estimated error, + value if robot too far right, - value if too far left
 * Exact values in use defined in header
 */
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

/**
 * Returns: 0 if left sensor is over threshold (over white)
 *          1 if left sensor is below threshold (over tape)
 */
uint8_t leftSensor() {
    return analogRead(LEFT_SENSOR) < tape_sensor_threshold;
    //return analogRead(LEFT_SENSOR) < analogRead(TUNING_POTENTIOMETER);
}

/**
 * Returns: 0 if right sensor is over threshold (over white)
 *          1 if right sensor is below threshold (over tape)
 */
uint8_t rightSensor() {
    return analogRead(RIGHT_SENSOR) < tape_sensor_threshold;
    //return analogRead(RIGHT_SENSOR) < analogRead(TUNING_POTENTIOMETER);
}