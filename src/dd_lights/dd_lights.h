#ifndef DD_LIGHTS_H
#define DD_LIGHTS_H

#include "Arduino.h"
// #include "ed_relay/ed_relay.h"

#define RED_PIN 0 
#define GREEN_PIN 4
#define BLUE_PIN 16

void dd_lights_setup();
// void dd_lights_loop();

// void dd_lights_on();
void dd_lights_off();
// void dd_lights_get_state();
void dd_lights_set_state (int state);

#endif

