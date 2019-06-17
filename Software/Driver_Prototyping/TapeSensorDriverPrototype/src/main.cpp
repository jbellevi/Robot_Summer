/**
 * Test run for driving with 
 */
#include <Arduino.h>
#include "TapeFollower.h"

void setup() {
  // put your setup code here, to run once:
  initTapeFollower();
}

void loop() {
  // put your main code here, to run repeatedly:
  followTape(0.5);
}