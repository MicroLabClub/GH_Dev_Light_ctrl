#ifndef ED_RELAY_H
#define ED_RELAY_H

#include "Arduino.h"

#ifndef ED_RELAY_1_PIN
#define ED_RELAY_1_PIN 2
#endif
// #ifndef ED_RELAY_2_PIN
// #define ED_RELAY_2_PIN 2 //GPIO2
// #endif
// #ifndef ED_RELAY_3_PIN
// #define ED_RELAY_3_PIN 0 // GPIO3
// #endif
// #ifndef ED_RELAY_4_PIN
// #define ED_RELAY_4_PIN 0 // GPIO4
// #endif
// #ifndef ED_RELAY_5_PIN
// #define ED_RELAY_5_PIN 0 // GPIO5
// #endif

#define ED_RELAY_ON HIGH
#define ED_RELAY_OFF LOW

enum ed_relay_t{
    ED_RELAY_ID_1,
    ED_RELAY_NR_OF
};

void ed_relay_setup();
void ed_relay_loop();

void ed_relay_on();
void ed_relay_off();
void ed_relay_getState();
void ed_relay_setState();

#endif

