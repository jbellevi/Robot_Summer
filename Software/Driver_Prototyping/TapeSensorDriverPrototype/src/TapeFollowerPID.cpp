/**
 * TapeFollowerPID function with tuning
 * Outputs (roughly) values to OLED screen
 */
#include <Arduino.h>
#include "TapeFollowerPID.h"

// Setting up OLED display
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <FreeMono12pt7b.h>
#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif
#define DELTA_TO_PRINT 10
#define OLED_RESET -1
Adafruit_SSD1306 display(OLED_RESET);

// PID related values
#define NUM_PAST_ERRORS 10 // number of errors to save
#define MAX_ANALOG 1023
#define PIN_PROP PB_0
#define PIN_DERIV PB_1

// declare values necessary for calculations
int pastErrors[NUM_PAST_ERRORS];
int lastErrorIndex;
int kp, kd, display_kp, display_kd;

float getP(int error);
float getD(int error);
void updateError(int error);
void updateCoefficients();

/**
 * Initialises PID follower module
 * Reads starting kp and kd values
 * Starts OLED screen
 */
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

/**
 * Gets PID value
 * Params: error - the error (deviating from 0)
 * Returns: PID value (proportional and derivative)
 */
float getPIDOutput(int error)
{
    float out = getP(error) + getD(error);

    if (out > 0.5) {
        out = 0.5;
    }

    updateError(error);
    updateCoefficients();

    return out; 
}

/**
 * Returns: correction due to proportional error
 */
float getP(int error)
{
    return error * 0.5 * kp / MAX_ANALOG;
}

/**
 * Returns: correction due to derivative error
 */
float getD(int error)
{
    int errorIndex = lastErrorIndex + 1;
    if (errorIndex == NUM_PAST_ERRORS) {
        errorIndex = 0;
    }
    return (error - pastErrors[errorIndex]) * 0.5 * kd / MAX_ANALOG;
}

/**
 * Updates record of 10 previous errors
 * This is so that we can get better derivative estimates for D
 */
void updateError(int error)
{
    lastErrorIndex++;
    if (lastErrorIndex == NUM_PAST_ERRORS) {
        lastErrorIndex = 0;
    }
    pastErrors[lastErrorIndex] = error;
}

/**
 * Updates coefficients kp and kd from potentiometer values
 * Prints to OLED screen if value has significantly changed
 */
void updateCoefficients() 
{
    kp = analogRead(PIN_PROP);
    kd = analogRead(PIN_DERIV);

    if (abs(kp - display_kp) > DELTA_TO_PRINT || abs(kd - display_kd) > DELTA_TO_PRINT) {
        display_kp = kp;
        display_kd = kd;
        display.clearDisplay();
        display.setCursor(4, 20);
        display.print("kp: ");
        display.println(kp);
        display.print("kd: ");
        display.println(kd);
        display.display();
    }
}