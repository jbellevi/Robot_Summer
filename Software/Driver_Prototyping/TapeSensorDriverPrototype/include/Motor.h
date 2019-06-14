#ifndef MOTOR_H_
#define MOTOR_H_
#define BACKWARD 0
#define FORWARD 1
#define LEFT_MOTOR 0
#define RIGHT_MOTOR 1

void runMotor(uint8_t motor, uint8_t direction, float power_ratio);

#endif //MOTOR_H_

