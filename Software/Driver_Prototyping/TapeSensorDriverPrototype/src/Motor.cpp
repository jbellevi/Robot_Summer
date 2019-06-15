/**
 * Motor basic driver prototype (without function to get torque from current) 
 */
#include <Arduino.h>
#include "Motor.h"

#define LEFT_MOTOR_PWM_FWD PA_7
#define LEFT_MOTOR_PWM_BACK PA_6
#define RIGHT_MOTOR_PWM_FWD PA_5
#define RIGHT_MOTOR_PWM_BACK PA_4

#define ANALOG_MAX 1023
#define INITIALISE_PWM 1
#define PWM_ALREADY_INTIALISED 0

#define CLOCK_FREQUENCY 100000 //Hz
#define PERIOD 500 //T(pwm) = PERIOD/CLOCK_FREQUENCY

uint32_t PWM_initialised = 0;

/**
 * Runs motor when provided with a power ratio
 * TODO: change input power ratio for desired torque output
 * Params: motor - LEFT_MOTOR or RIGHT_MOTOR
 *         direction - intended direction of rotation: FORWARD or BACKWARD
 *         duty_cycle - duty cycle as fraction, between 0 and 1
 */
void runMotor(uint8_t motor, uint8_t direction, float duty_cycle)
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
        pwm_start(fwd, CLOCK_FREQUENCY, PERIOD, duty_cycle * PERIOD, !PWM_initialised);
    } else {
        pwm_stop(fwd);
        pwm_start(back, CLOCK_FREQUENCY, PERIOD, duty_cycle * PERIOD, !PWM_initialised);
    }

    if (!PWM_initialised) {
        PWM_initialised = 1;
    }

}