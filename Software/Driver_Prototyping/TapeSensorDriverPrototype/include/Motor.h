#ifndef MOTOR_H_
#define MOTOR_H_
#define BACKWARD 0
#define FORWARD 1
#define LEFT_MOTOR 0
#define RIGHT_MOTOR 1

/**
 * Runs motor when provided with a power ratio
 * TODO: change input power ratio for desired torque output
 * Params: motor - LEFT_MOTOR or RIGHT_MOTOR
 *         direction - intended direction of rotation: FORWARD or BACKWARD
 *         duty_cycle - duty cycle as fraction, between 0 and 1
 */
void runMotor(uint8_t motor, uint8_t direction, float power_ratio);

#endif //MOTOR_H_

