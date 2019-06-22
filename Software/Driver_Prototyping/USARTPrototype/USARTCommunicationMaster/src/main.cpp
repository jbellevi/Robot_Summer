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
  Serial.println("Setup done, MASTER");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Ready to speak!");
  int available = Serial3.available();
  while (!available) {
    //Serial.println("No messages available");
    available = Serial3.available();
  }
  String message = Serial3.readString();
  Serial.print("My friend said: ");
  Serial.println(message);
  Serial3.print("Hi moon");
  delay(5000);
}