#include "dd_photoresistor.h"
#include <Arduino.h>

void setup_photoresistor(){
    pinMode(DD_PHOTORESISTOR_PIN, INPUT);
}

int get_photoresistor_value(){
    return analogRead(DD_PHOTORESISTOR_PIN);
}