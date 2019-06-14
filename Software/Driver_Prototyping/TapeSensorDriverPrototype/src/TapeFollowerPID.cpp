/**
 * TapeFollowerPID function with tuning
 * Outputs (roughly) values to OLED screen
 */
#include <Wire.h>
#include <Arduino.h>
#include "TapeFollowerPID.h"
#include <Adafruit_SSD1306.h>
#include <FreeMono12pt7b.h>

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

#define NUM_PAST_ERRORS 10
#define MAX_ANALOG 1023

#define PIN_PROP PB_0
#define PIN_DERIV PB_1
// #define PIN_INT PA_7
#define OLED_RESET -1

Adafruit_SSD1306 display(OLED_RESET);
int pastErrors[NUM_PAST_ERRORS];
int lastErrorIndex;
int kp, kd, display_kp, display_kd;

float getP(int error);
float getD(int error);
void updateError(int error);
void updateCoefficients();

void initPID() 
{
    int i = 0;
    for (i = 0; i < NUM_PAST_ERRORS; i++) {
        pastErrors[i] = 0;
    }
    lastErrorIndex = NUM_PAST_ERRORS - 1;
    kp = analogRead(PIN_PROP);
    kd = analogRead(PIN_DERIV);
    display_kp = kp;
    display_kd = kd;

    // setup screen stuff
    Serial.begin(115200);
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    display.clearDisplay();
}

float getPIDOutput(int error)
{
    float out = getP(error) + getD(error);

    if (out > 0.5) {
        out = 0.5;
    }
    // int i = error * getKi();

    updateError(error);
    updateCoefficients();

    return out; // + i;
}

float getP(int error)
{
    return error * 0.5 * analogRead(PIN_PROP) / MAX_ANALOG;
}

float getD(int error)
{
    int errorIndex = lastErrorIndex + 1;
    if (errorIndex == NUM_PAST_ERRORS) {
        errorIndex = 0;
    }
    return (error - pastErrors[errorIndex]) * 0.5 * analogRead(PIN_DERIV)/MAX_ANALOG;
}

void updateError(int error)
{
    lastErrorIndex++;
    if (lastErrorIndex == NUM_PAST_ERRORS) {
        lastErrorIndex = 0;
    }
    pastErrors[lastErrorIndex] = error;
}

void updateCoefficients() 
{
    kp = analogRead(PIN_PROP);
    kd = analogRead(PIN_DERIV);

    if (abs(kp - kd) > 5) {
        display.clearDisplay();
        display.setCursor(4, 20);
        display.print("kp: ");
        display.println(kp);
        display.print("kd: ");
        display.println(kd);
        display.display();
    }
}