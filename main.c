/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18323
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"

#define LED LATCbits.LATC5

uint8_t device_ID;

void Configure_Device_Id();
uint8_t readTemperatureFromSensor();
uint8_t readPressureFromSensor();
uint8_t calculateTemperatureFromVolatage(uint16_t vol);
uint8_t calculatePressureFromVolatage(uint16_t vol);
 
/*
                         Main application
 */
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    ADC_Initialize();
    
    Configure_Device_Id();
    
    EUSART_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();
    
    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1) {
        __delay_ms(3000);
        uint8_t temp = readTemperatureFromSensor();
        float pressure = readPressureFromSensor();
        
    }
    return 1;
}

void Configure_Device_Id(){ 
//    unsigned short A2 = (PORTAbits.RA2 + 0.5);
    uint8_t C0 = ADC_GetConversion(ID_2)/200;
    uint8_t C1 = ADC_GetConversion(ID_3)/200;
    uint8_t C2 = ADC_GetConversion(ID_4)/200;
   
    device_ID = ( C0<<6 | C1<<3 | C2);
}

uint8_t readTemperatureFromSensor(){
    uint16_t voltage = ADC_GetConversion(ID_1);
//    return 8;
    return calculateTemperatureFromVolatage(voltage);
}

uint8_t calculateTemperatureFromVolatage(uint16_t vol){
//    return -2E-07*vol*vol*vol + 0.0003*vol*vol - 0.2506*vol + 100.58;
//    return -0.0991*vol + 76.782;
    return 0.00004*vol*vol - 0.1392*vol + 85.264;
}

uint8_t readPressureFromSensor(){
    uint16_t voltage = ADC_GetConversion(Pressure_Sensor);
    return calculatePressureFromVolatage(voltage);
}

uint8_t calculatePressureFromVolatage(uint16_t vol){
    if(vol < 115){
        return 0;
    }
    float sol = 0.0401 * vol;
    sol/=0.2048;
    sol+=0.5471;
    return sol;
}
/**
 End of File
*/