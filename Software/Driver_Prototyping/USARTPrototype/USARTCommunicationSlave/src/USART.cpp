#include <Arduino.h>

#define TX PB10
#define RX PB11
#define BAUD_RATE 115200

#define REQUEST_ARM_MOTION 000
#define REQUEST_POSITION 001

void initUSART()
{
    Serial3.begin(BAUD_RATE);
    while (!Serial3);
}

void sendArmPosition() 
{

}
