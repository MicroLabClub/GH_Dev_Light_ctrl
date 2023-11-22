#include <Arduino.h>
#include "dd_rgb/dd_rgb.h"
#include "dd_photoresistor/dd_photoresistor.h"

#define SYS_TICK 1000

void setup() {
  setup_RGB();
  setup_photoresistor();
  Serial.begin(9600);
}

void loop() { 

  // Logic to be implemented

  turn_off_RGB();

  delay(SYS_TICK);
}
