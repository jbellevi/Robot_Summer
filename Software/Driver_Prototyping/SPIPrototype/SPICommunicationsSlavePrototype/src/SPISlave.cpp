/**
 * https://learnbuildshare.wordpress.com/about/stm32/using-spi-as-slave/
 */
#include <SPI.h>
#include "stm32f10x.h"
#include "stm32f10x_conf.h"

#define MOSI PB15
#define MISO PB14
#define SCK PB13
#define SSelect PB12

#define SPI_CTL_REG 0x0
//SPI_MODE_SLAVE
//SPI_CR1_MSTR

void initSPI()
{
    pinMode(MISO, OUTPUT);
    SPI2->CR1 &= SPI_MODE_SLAVE;
    SPI.attachInterrupt();
    /* 
    SPI.beginTransaction();
    //pinMode(SSelect, INPUT);
    //SPCR |= _BV(SPE);
     */
}