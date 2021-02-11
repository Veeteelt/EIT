/**
  Section: Included Files
 */

#include <xc.h>
#include "mcc_generated_files/mcc.h"
#include "PI.h"

/**
  Section: PI Module APIs
 */

static int sensorHeight = 0;
static int setpoint = 200; //240 = top, 0 = bottom
static int error = 0;
static float integral = 0;
static float ki = 0.005;
static float kp = 1;
static int dutycycle;

int PI_GetSensorHeight(void){
    return sensorHeight;
}

void PI_SetSetpoint(int value){
    setpoint = value;
}

void PI_SetKp(float value){
    kp = value;
}

void PI_SetKi(float value){
    ki = value;
}
float I = 0;
void PI(void) {
    sensorHeight = (int) ADC_GetResult(); //resultaat van ADC
    error = setpoint - sensorHeight;
    
    
    float P = kp * error;
    I = I + ki * error;
    
    
    int dutycycle1 = (int)(P + I);
    if (dutycycle1 < 255 && dutycycle1 > 0){
        dutycycle = dutycycle1;
    }
    
   
    PWM5_LoadDutyValue(dutycycle);
    
}

/**
 End of File
 */