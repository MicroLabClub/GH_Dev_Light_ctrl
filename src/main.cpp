#include <Arduino.h>
#include "dd_rgb/dd_rgb.h"
#include "dd_photoresistor/dd_photoresistor.h"

#define SYS_TICK 1000
int light;

void setup() {
  setup_RGB();
  setup_photoresistor();
  Serial.begin(9600);
}

void loop() { 

  light = get_photoresistor_value();
  
  if(light < 2048){
    Serial.print("Theres enough light: ");
    Serial.println(light);
    turn_off_RGB();
  }else{
    Serial.print("Not enough light: ");
    Serial.println(light);
    set_RGB_green();
  }

  // turn_off_RGB();

  delay(SYS_TICK);
}
