#ifndef GAS_H
#define GAS_H
#include <Arduino.h>


float resistance(int samples, int interval,int adc_value);
float SensorCalibration(int adc_value);  
#endif
