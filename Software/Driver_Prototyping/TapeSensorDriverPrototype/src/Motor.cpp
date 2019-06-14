/**
 * Motor basic driver prototype (without function to get torque from current) 
 */
#include <Arduino.h>
#include "Motor.h"

#define LEFT_MOTOR_PWM_FWD PA_0
#define LEFT_MOTOR_PWM_BACK PA_1
#define RIGHT_MOTOR_PWM_FWD PA_2
#define RIGHT_MOTOR_PWM_BACK PA_3

#define ANALOG_MAX 1023
#define INITIALISE_PWM 1
#define PWM_ALREADY_INTIALISED 0

#define CLOCK_FREQUENCY 100000 //Hz
#define PERIOD 500 //T(pwm) = PERIOD/CLOCK_FREQUENCY

uint32_t PWM_initialised = 0;

/**
 * 
 */
void runMotor(uint8_t motor, uint8_t direction, float power_ratio)
{
    PinName fwd;
    PinName back;
    if (motor == LEFT_MOTOR) {
        fwd = LEFT_MOTOR_PWM_FWD;
        back = LEFT_MOTOR_PWM_BACK;
    } else {
        fwd = RIGHT_MOTOR_PWM_FWD;
        back = RIGHT_MOTOR_PWM_BACK;
    }

    if (direction == FORWARD) {
        pwm_stop(back);
        pwm_start(fwd, CLOCK_FREQUENCY, PERIOD, power_ratio * PERIOD, PWM_initialised);
    } else {
        pwm_stop(fwd);
        pwm_start(back, CLOCK_FREQUENCY, PERIOD, power_ratio*PERIOD, PWM_initialised);
    }

    if (!PWM_initialised) {
        PWM_initialised = 1;
    }

}