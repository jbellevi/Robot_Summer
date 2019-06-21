/**
 * SPI test. 
 * 1. Sending only (send bits over, get other STM to print them to console)
 * 2. Receiving as well
 */

#include <Arduino.h>
#include "MasterSPI.h"

void setup() {
  // put your setup code here, to run once:
  initSPI();
  //set up computer com
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
  int output = (int) masterTestSend(128);
  Serial.print("Returned from slave: ");
  Serial.println(output);
}