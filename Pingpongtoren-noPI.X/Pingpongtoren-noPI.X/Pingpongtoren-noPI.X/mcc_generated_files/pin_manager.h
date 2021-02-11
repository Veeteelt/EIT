/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC16F18345
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB5 procedures
#define RB5_SetHigh()    do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()   do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()   do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()         PORTBbits.RB5
#define RB5_SetDigitalInput()   do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()  do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()     do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()   do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode() do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set Output aliases
#define Output_TRIS               TRISBbits.TRISB6
#define Output_LAT                LATBbits.LATB6
#define Output_PORT               PORTBbits.RB6
#define Output_WPU                WPUBbits.WPUB6
#define Output_OD                ODCONBbits.ODCB6
#define Output_ANS                ANSELBbits.ANSB6
#define Output_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define Output_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define Output_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define Output_GetValue()           PORTBbits.RB6
#define Output_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define Output_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define Output_SetPullup()      do { WPUBbits.WPUB6 = 1; } while(0)
#define Output_ResetPullup()    do { WPUBbits.WPUB6 = 0; } while(0)
#define Output_SetPushPull()    do { ODCONBbits.ODCB6 = 1; } while(0)
#define Output_SetOpenDrain()   do { ODCONBbits.ODCB6 = 0; } while(0)
#define Output_SetAnalogMode()  do { ANSELBbits.ANSB6 = 1; } while(0)
#define Output_SetDigitalMode() do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()    do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()   do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()   do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()         PORTBbits.RB7
#define RB7_SetDigitalInput()   do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()  do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()     do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()   do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode() do { ANSELBbits.ANSB7 = 1; } while(0)
#define RB7_SetDigitalMode()do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set Potentiometer aliases
#define Potentiometer_TRIS               TRISCbits.TRISC0
#define Potentiometer_LAT                LATCbits.LATC0
#define Potentiometer_PORT               PORTCbits.RC0
#define Potentiometer_WPU                WPUCbits.WPUC0
#define Potentiometer_OD                ODCONCbits.ODCC0
#define Potentiometer_ANS                ANSELCbits.ANSC0
#define Potentiometer_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define Potentiometer_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define Potentiometer_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define Potentiometer_GetValue()           PORTCbits.RC0
#define Potentiometer_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define Potentiometer_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define Potentiometer_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define Potentiometer_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define Potentiometer_SetPushPull()    do { ODCONCbits.ODCC0 = 1; } while(0)
#define Potentiometer_SetOpenDrain()   do { ODCONCbits.ODCC0 = 0; } while(0)
#define Potentiometer_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define Potentiometer_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()    do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()   do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()   do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()         PORTCbits.RC1
#define RC1_SetDigitalInput()   do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()  do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()     do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()   do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode() do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set Receiver aliases
#define Receiver_TRIS               TRISCbits.TRISC2
#define Receiver_LAT                LATCbits.LATC2
#define Receiver_PORT               PORTCbits.RC2
#define Receiver_WPU                WPUCbits.WPUC2
#define Receiver_OD                ODCONCbits.ODCC2
#define Receiver_ANS                ANSELCbits.ANSC2
#define Receiver_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define Receiver_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define Receiver_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define Receiver_GetValue()           PORTCbits.RC2
#define Receiver_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define Receiver_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define Receiver_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define Receiver_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define Receiver_SetPushPull()    do { ODCONCbits.ODCC2 = 1; } while(0)
#define Receiver_SetOpenDrain()   do { ODCONCbits.ODCC2 = 0; } while(0)
#define Receiver_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define Receiver_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set Transmitter aliases
#define Transmitter_TRIS               TRISCbits.TRISC7
#define Transmitter_LAT                LATCbits.LATC7
#define Transmitter_PORT               PORTCbits.RC7
#define Transmitter_WPU                WPUCbits.WPUC7
#define Transmitter_OD                ODCONCbits.ODCC7
#define Transmitter_ANS                ANSELCbits.ANSC7
#define Transmitter_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define Transmitter_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define Transmitter_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define Transmitter_GetValue()           PORTCbits.RC7
#define Transmitter_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define Transmitter_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define Transmitter_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define Transmitter_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define Transmitter_SetPushPull()    do { ODCONCbits.ODCC7 = 1; } while(0)
#define Transmitter_SetOpenDrain()   do { ODCONCbits.ODCC7 = 0; } while(0)
#define Transmitter_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define Transmitter_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

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