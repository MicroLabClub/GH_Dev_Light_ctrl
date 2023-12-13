#include "dd_lights.h"
#include "Arduino.h"


void dd_lights_setup(){
    pinMode(RED_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
}

void dd_lights_off(){
    digitalWrite (RED_PIN, LOW); 
    digitalWrite (GREEN_PIN, LOW); 
    digitalWrite (BLUE_PIN, LOW); 
}

void dd_lights_set_state(int state){
    switch (state)
    {
    case 1:
        digitalWrite (RED_PIN, HIGH); 
        digitalWrite (GREEN_PIN, LOW); 
        digitalWrite (BLUE_PIN, LOW); 
        break;
    case 2:
        digitalWrite (RED_PIN, LOW); 
        digitalWrite (GREEN_PIN, HIGH); 
        digitalWrite (BLUE_PIN, LOW);
        break;
    case 3:
        digitalWrite (RED_PIN, LOW); 
        digitalWrite (GREEN_PIN, LOW); 
        digitalWrite (BLUE_PIN, HIGH);  
        break;

    default:
        dd_lights_off();
        break;
    }
}