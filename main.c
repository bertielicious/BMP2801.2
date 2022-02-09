/*
 * File:   main.c
 * Author: User
 *
 * Created on 06 December 2021, 14:11
 */


#include "config.h"
#include "main.h"
#include "configOsc.h"
#include "configPorts.h"
#include "configEUSART.h"
#include "configBaud.h"
#include "configI2C.h"
#include "i2cStart.h"
#include "i2cWrite.h"
#include "i2cRead.h"
#include "i2cReStart.h"
#include "i2cStop.h"
#include "oLedWrite.h"
#include "configSH1106.h"
#include "setPageAddress.h"
#include "setColumnAddress.h"
#include "clearSH1106.h"
#include "selectDigit.h"
#include "split0To99.h"
#include "write8x8ToOled.h"
#include "configBMP280.h"
#include "i2cCheckBusIdle.h"
#include "readRegDispOled.h"
#include "readTrimParam.h"
#include "geTadc_T.h"
#include "calcTemp.h"
#include "readPCF8583.h"
#include "bcdToDecimal.h"
void main(void) 
{
    uint8_t decimal = 0;
    uint8_t seconds = 0;
    uint8_t minutes = 0;
    uint8_t hours = 0;
    uint8_t i;
    splitData woofer;
    int temp = 0;
    caliTemp result;
    int rawTemp;
    int accurateTemp;
    splitData bertie;
    configOsc();
    configPorts();
    configEUSART();
    configBaud();
    configI2C();
    __delay_ms(100);
    configSH1106();
    __delay_ms(100);
    clearSH1106();          // writes 0x00 to each column from 0 to 131, of each page 0 to 7 of the oled display, to clear random data held in display RAM
    configBMP280();
    printf("Hola\n");
    
   // result = readTrimParam();
   // printf("T1 %d   T2 %d     T3 %d   \n", result.digT1, result.digT2, result.digT3);
   // rawTemp = geTadc_T();
   // printf("rawTemp = %d\n", rawTemp);
  //  accurateTemp = calcTemp(rawTemp, result);
   
   // printf("accurateTemp %d\n", accurateTemp);
   // bertie = split0To99(accurateTemp);
    //printf("%d%d%d%d%d\n", bertie.tensThousands, bertie.thousands, bertie.hundreds, bertie.tens, bertie.units);
   /* setColumnAddress(16);
    setPageAddress(7);
    write8x8ToOled(bertie.tensThousands);
    write8x8ToOled(bertie.thousands);
    write8x8ToOled('d');
    write8x8ToOled(bertie.hundreds);
    write8x8ToOled(bertie.tens);
    write8x8ToOled(bertie.units);*/
    
    while(1)
    {
        
        
        /*seconds = readPCF8583(0xa0, 0x02);
        decimal = bcdToDecimal(seconds);
        woofer = split0To99(decimal);
        setColumnAddress(2);
        setPageAddress(3);
        write8x8ToOled(woofer.tens);
        write8x8ToOled(woofer.units);*/
        
        
        
        //while(temp!= accurateTemp)
        //{
      //  seconds = readPCF8583(0xa0, 0x02);
      //  decimal = bcdToDecimal(seconds);
      //  woofer = split0To99(decimal);
        
     //   setPageAddress(0);
       // setColumnAddress(50);
       // write8x8ToOled(woofer.tens);
     //   setColumnAddress(60);
     //   write8x8ToOled(woofer.units);
        
       /* minutes = readPCF8583(0xa0, 0x03);
        decimal = bcdToDecimal(minutes);
        woofer = split0To99(decimal);
        setColumnAddress(25);
        setPageAddress(0);
        write8x8ToOled(woofer.tens);
        write8x8ToOled(woofer.units);*/
        
       /* hours = readPCF8583(0xa0, 0x04);
        decimal = bcdToDecimal(hours);
        woofer = split0To99(decimal);
        setColumnAddress(1);
        setPageAddress(0);
        write8x8ToOled(woofer.tens);
        write8x8ToOled(woofer.units);*/
        
        
        /*   result = readTrimParam();
           rawTemp = geTadc_T();
           accurateTemp = calcTemp(rawTemp, result);
   
           // printf("accurateTemp %d\n", accurateTemp);
            bertie = split0To99(accurateTemp);
           // printf("%d%d%d%d%d\n", bertie.tensThousands, bertie.thousands, bertie.hundreds, bertie.tens, bertie.units);
            setColumnAddress(1);
            setPageAddress(7);
            write8x8ToOled(bertie.tensThousands);
            write8x8ToOled(bertie.thousands);
            write8x8ToOled('d');
            write8x8ToOled(bertie.hundreds);
            write8x8ToOled(bertie.tens);
            write8x8ToOled(bertie.units);
        
        
        //DIAGNOSTIC_LED = HI;
       // __delay_ms(100);
       // DIAGNOSTIC_LED = LO;
       // __delay_ms(100);
        
        temp = accurateTemp;
        accurateTemp++;*/
    //}
    }
}