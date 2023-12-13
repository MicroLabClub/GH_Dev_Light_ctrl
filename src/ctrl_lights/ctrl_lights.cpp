#include "ctrl_lights.h"
#include "dd_lights/dd_lights.h" 
#include "ed_light_sensor/ed_light_sensor.h"

void ctrl_lights_setup()
{
}

float lights_setpoint = 10.0;

void ctrl_lights_loop()
{
    float lights_current = get_light_level();
    Serial.print("Light: ");
    Serial.print(lights_current);
    Serial.println();

    int lights_off = lights_setpoint + LIGHTS_HISTERESIS;
    int lights_on = lights_setpoint - LIGHTS_HISTERESIS;

    // ON OFF Control cu Histereza
    if (lights_current > lights_off)
    {
      dd_lights_off();
    }
    else if (lights_current < lights_on)
    {
      dd_lights_set_state(3);
      delay(3000);
    }
    else
    {
      // do nothing
    }
}