#ifndef constants_h
#define constants_h

#include "Arduino.h"

/*
TVC OFFSETS
*/

//Channel 1
#define TVC_X_CH1_OFFSET 0.0
#define TVC_Y_CH1_OFFSET 0.0
//Channel 2
#define TVC_X_CH2_OFFSET 0.0
#define TVC_Y_CH2_OFFSET 0.0

/*
PID VALUES
*/

const float PID_Z_P = 2;
const float PID_Z_I = 2;
const float PID_Z_D = 0.07;

const float PID_Y_P = 2;
const float PID_Y_I = 2;
const float PID_Y_D = 0.07;

//WORKING
// const float PID_Z_P = 1.5;
// const float PID_Z_I = 0.00;
// const float PID_Z_D = 0.2;

// const float PID_Y_P = 1.5;
// const float PID_Y_I = 0.00;
// const float PID_Y_D = 0.2;

#define GYRO_MULT 2.917

#define ORI_CALC_FREQ 2000
#define SERVO_WRITE_FREQ 250

const double SERVO_WRITE_DELTA = 1.0/(double)SERVO_WRITE_FREQ;
const double ORI_CALC_DELTA = 1.0/(double)ORI_CALC_FREQ;
/*
SERVO CONSTANTS
*/
#define SERVO_MULT 4
#define SERVO_RANGE_X 10
#define SERVO_RANGE_Y 10

#define SERVO_MIN_US 900 //us`
#define SERVO_MAX_US 2100 //us

/*
RADIO CONSTANTS
*/
#define RADIO_DELAY 75 //ms

/*
BAROMETER CONSTANTS
*/
#define BARO_CALC_FREQ 100

const double BARO_CALC_DELTA = 1.0/(double)BARO_CALC_FREQ;

/*
ADC RESISTOR DIVIDER CALCUALTIONS
*/
const short ADC_VBUS_DIVD_RES1 = 1000; //VBUS = main input voltage, 12.6V max
const short ADC_VBUS_DIVD_RES2 = 330;
const double ADC_RES_DIV_FACTOR_VBUS = (double)ADC_VBUS_DIVD_RES2/((double)ADC_VBUS_DIVD_RES1+(double)ADC_VBUS_DIVD_RES2);

const short ADC_VSERVO_DIVD_RES1 = 1000; //VSERVO = servo voltage rail
const short ADC_VSERVO_DIVD_RES2 = 620;
const double ADC_RES_DIV_FACTOR_VSERVO = (double)ADC_VSERVO_DIVD_RES2/((double)ADC_VSERVO_DIVD_RES1+(double)ADC_VSERVO_DIVD_RES2);

const short ADC_VMOTOR_DIVD_RES1 = 560; //VMOTOR = roll motor voltage rail
const short ADC_VMOTOR_DIVD_RES2 = 680;
const double ADC_RES_DIV_FACTOR_VMOTOR = (double)ADC_VMOTOR_DIVD_RES2/((double)ADC_VMOTOR_DIVD_RES1+(double)ADC_VMOTOR_DIVD_RES2);

const short ADC_PYRO_DIVD_RES1 = 1000; //PYRO = Pyro voltage, same as VBUS in this version of the flight controller
const short ADC_PYRO_DIVD_RES2 = 330;
const double ADC_RES_DIV_FACTOR_PYRO = (double)ADC_PYRO_DIVD_RES2/((double)ADC_PYRO_DIVD_RES1+(double)ADC_PYRO_DIVD_RES2);

const double ADC_MAX_V = 4.096;
const double ADC_DIV_FACTOR_V = ADC_MAX_V/2047; //11 bit mantissa

const float ADC_PYRO_THRESH_CONT = 11.5; //voltage drop in v for cont

/*
MISC CONSTANT SETTINGS
*/

const bool buzzerEnabled = false;
const bool indicatorEnabled = true;

/*
FLIGHT TRANSITION CONSTANTS
*/

//Parachute deployment stuff
#define flight_minTimeBeforeApogee 5500
#define flight_altSlopeApogeeCutoff 2

#define flight_timeBeforeForceChutesDeploy 7000

#define flight_minTimeBeforeAbort 4000
#define flight_abortDegrees 30

#define flight_timeBeforeForceSDCopy 45000
#define flight_altSlopeLandedCutoff 1.5
#define flight_minLandedTime 1250


/*
DATALOGGING CONSTANTS
*/


#endif