#include <BH1750.h>
#include <Wire.h>
#include "ed_light_sensor.h"


BH1750 lightMeter(0x23);

void setup_light_sensor() {

    Wire.begin(32, 33);
    lightMeter.begin();
    Wire.setClock(10000);
}

void loop_lights() {
  uint16_t lux = lightMeter.readLightLevel();

  Serial.print("Light intensity: ");
  Serial.print(lux);
  Serial.println(" lx");

}

int get_light_level(){
    return lightMeter.readLightLevel();
}