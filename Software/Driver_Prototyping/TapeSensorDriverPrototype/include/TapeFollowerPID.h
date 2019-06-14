#ifndef TAPEFOLLOWERPID_H_
#define TAPEFOLLOWERPID_H_

/**
 * Initialises PID follower module
 * Reads starting kp and kd values
 * Starts OLED screen
 */
void initPID();

/**
 * Gets PID value
 * Params: error - the error (deviating from 0)
 * Returns: PID value (proportional and derivative)
 */
float getPIDOutput(int error);

#endif //TAPEFOLLOWERPID_H_