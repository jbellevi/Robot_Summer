/**
 * https://learnbuildshare.wordpress.com/about/stm32/using-spi-as-master/
 * https://circuitdigest.com/microcontroller-projects/stm32-spi-communication-tutorial
 */
#include <SPI.h>

#define MOSI PB15
#define MISO PB14
#define SCK PB13
#define SSelect PB12
// #define SSELECT NSS2 // not sure we need this?

/**
 * Sets the proper pin to be used as SPI
 * Starts SPI
 */
void initSPI()
{
    // set wanted pins to be used for SPI
    SPI.setMISO(MISO);
    SPI.setMOSI(MOSI);
    SPI.setSCLK(SCK);
    // set SPI stuff
    SPI.begin();
    SPI.setClockDivider(SPI_CLOCK_DIV8);
    digitalWrite(SSelect, HIGH); // start high bc no communication

    //set up serial communication 
    Serial.begin(115200);
}

int masterTestSend(int bin)
{
    //warn SPI that hey, things going to Start
    digitalWrite(SSelect, LOW);
    byte masterSend = (byte)bin;
    return (int) SPI.transfer(masterSend);
}