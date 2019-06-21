#include <Arduino.h>
#include "USART.h"

#define TX3 PB10
#define RX3 PB11

HardwareSerial Serial3 = HardwareSerial(RX3, TX3);

void setup() {
  // put your setup code here, to run once:
  //initUSART();
  Serial.begin(9600);
  Serial3.begin(9600);
  Serial.println("Setup done, SLAVE");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
  Serial.println("Sending to other BP...");
  Serial3.print("Hello world <3");
  delay(3000);
  Serial.print("My friend said: " + Serial3.readString());
}