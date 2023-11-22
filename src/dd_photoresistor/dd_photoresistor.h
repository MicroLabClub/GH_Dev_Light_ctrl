#include <Arduino.h>

#ifndef DD_PHOTORESISTOR_H
#define DD_PHOTORESISTOR_H

const int DD_PHOTORESISTOR_PIN = ADC;

void setup_photoresistor();
int get_photoresistor_value();



#endif