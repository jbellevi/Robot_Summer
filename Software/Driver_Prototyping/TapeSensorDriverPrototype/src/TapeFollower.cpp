#include "TapeFollower.h"

#include <Arduino.h>
#include "Motor.h"
#include "TapeSensor.h"
#include "TapeFollowerPID.h"

float avg_duty_cycle = 0.5;
float PID_output = 0;

/**
 * Initialise tape follower
 */
void initTapeFollower() 
{
    initPID();
}

/**
 * Follows tape! Exciting stuff
 */
void followTape() 
{
    runMotor(LEFT_MOTOR, FORWARD, avg_duty_cycle + PID_output);
    runMotor(RIGHT_MOTOR, FORWARD, avg_duty_cycle + PID_output);
    int error = getTapeFollowingError();
    PID_output = getPIDOutput(error);
}