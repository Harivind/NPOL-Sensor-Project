/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18323
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set ID_1 aliases
#define ID_1_TRIS                 TRISAbits.TRISA2
#define ID_1_LAT                  LATAbits.LATA2
#define ID_1_PORT                 PORTAbits.RA2
#define ID_1_WPU                  WPUAbits.WPUA2
#define ID_1_OD                   ODCONAbits.ODCA2
#define ID_1_ANS                  ANSELAbits.ANSA2
#define ID_1_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define ID_1_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define ID_1_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define ID_1_GetValue()           PORTAbits.RA2
#define ID_1_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define ID_1_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define ID_1_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define ID_1_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define ID_1_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define ID_1_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define ID_1_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define ID_1_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set Pressure_Sensor aliases
#define Pressure_Sensor_TRIS                 TRISAbits.TRISA4
#define Pressure_Sensor_LAT                  LATAbits.LATA4
#define Pressure_Sensor_PORT                 PORTAbits.RA4
#define Pressure_Sensor_WPU                  WPUAbits.WPUA4
#define Pressure_Sensor_OD                   ODCONAbits.ODCA4
#define Pressure_Sensor_ANS                  ANSELAbits.ANSA4
#define Pressure_Sensor_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define Pressure_Sensor_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define Pressure_Sensor_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define Pressure_Sensor_GetValue()           PORTAbits.RA4
#define Pressure_Sensor_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define Pressure_Sensor_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define Pressure_Sensor_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define Pressure_Sensor_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define Pressure_Sensor_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define Pressure_Sensor_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define Pressure_Sensor_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define Pressure_Sensor_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RS485_DE aliases
#define RS485_DE_TRIS                 TRISAbits.TRISA5
#define RS485_DE_LAT                  LATAbits.LATA5
#define RS485_DE_PORT                 PORTAbits.RA5
#define RS485_DE_WPU                  WPUAbits.WPUA5
#define RS485_DE_OD                   ODCONAbits.ODCA5
#define RS485_DE_ANS                  ANSELAbits.ANSA5
#define RS485_DE_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RS485_DE_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RS485_DE_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RS485_DE_GetValue()           PORTAbits.RA5
#define RS485_DE_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RS485_DE_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RS485_DE_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define RS485_DE_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define RS485_DE_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define RS485_DE_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define RS485_DE_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define RS485_DE_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set ID_2 aliases
#define ID_2_TRIS                 TRISCbits.TRISC0
#define ID_2_LAT                  LATCbits.LATC0
#define ID_2_PORT                 PORTCbits.RC0
#define ID_2_WPU                  WPUCbits.WPUC0
#define ID_2_OD                   ODCONCbits.ODCC0
#define ID_2_ANS                  ANSELCbits.ANSC0
#define ID_2_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define ID_2_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define ID_2_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define ID_2_GetValue()           PORTCbits.RC0
#define ID_2_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define ID_2_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define ID_2_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define ID_2_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define ID_2_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define ID_2_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define ID_2_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define ID_2_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set ID_3 aliases
#define ID_3_TRIS                 TRISCbits.TRISC1
#define ID_3_LAT                  LATCbits.LATC1
#define ID_3_PORT                 PORTCbits.RC1
#define ID_3_WPU                  WPUCbits.WPUC1
#define ID_3_OD                   ODCONCbits.ODCC1
#define ID_3_ANS                  ANSELCbits.ANSC1
#define ID_3_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define ID_3_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define ID_3_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define ID_3_GetValue()           PORTCbits.RC1
#define ID_3_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define ID_3_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define ID_3_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define ID_3_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define ID_3_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define ID_3_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define ID_3_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define ID_3_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set ID_4 aliases
#define ID_4_TRIS                 TRISCbits.TRISC2
#define ID_4_LAT                  LATCbits.LATC2
#define ID_4_PORT                 PORTCbits.RC2
#define ID_4_WPU                  WPUCbits.WPUC2
#define ID_4_OD                   ODCONCbits.ODCC2
#define ID_4_ANS                  ANSELCbits.ANSC2
#define ID_4_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define ID_4_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define ID_4_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define ID_4_GetValue()           PORTCbits.RC2
#define ID_4_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define ID_4_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define ID_4_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define ID_4_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define ID_4_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define ID_4_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define ID_4_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define ID_4_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set Temp_Sensor aliases
#define Temp_Sensor_TRIS                 TRISCbits.TRISC3
#define Temp_Sensor_LAT                  LATCbits.LATC3
#define Temp_Sensor_PORT                 PORTCbits.RC3
#define Temp_Sensor_WPU                  WPUCbits.WPUC3
#define Temp_Sensor_OD                   ODCONCbits.ODCC3
#define Temp_Sensor_ANS                  ANSELCbits.ANSC3
#define Temp_Sensor_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define Temp_Sensor_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define Temp_Sensor_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define Temp_Sensor_GetValue()           PORTCbits.RC3
#define Temp_Sensor_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define Temp_Sensor_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define Temp_Sensor_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define Temp_Sensor_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define Temp_Sensor_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define Temp_Sensor_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define Temp_Sensor_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define Temp_Sensor_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/