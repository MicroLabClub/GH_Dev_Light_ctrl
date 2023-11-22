#include "dd_rgb.h"
#include <Arduino.h>

void setup_RGB(){
    pinMode(RED_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
}

void loop_RGB(int interval){
    digitalWrite (RED_PIN, HIGH); 
    digitalWrite (GREEN_PIN, LOW); 
    digitalWrite (BLUE_PIN, LOW); 
    delay (interval); 
    
    digitalWrite (RED_PIN, LOW); 
    digitalWrite (GREEN_PIN, HIGH); 
    digitalWrite (BLUE_PIN, LOW); 
    delay (interval); 
    
    digitalWrite (RED_PIN, LOW); 
    digitalWrite (GREEN_PIN, LOW); 
    digitalWrite (BLUE_PIN, HIGH); 
    delay (interval);
}

void set_RGB_red(){
    digitalWrite (RED_PIN, HIGH); 
    digitalWrite (GREEN_PIN, LOW); 
    digitalWrite (BLUE_PIN, LOW); 
}

void set_RGB_green(){
    digitalWrite (RED_PIN, LOW); 
    digitalWrite (GREEN_PIN, HIGH); 
    digitalWrite (BLUE_PIN, LOW); 
}

void set_RGB_blue(){
    digitalWrite (RED_PIN, LOW); 
    digitalWrite (GREEN_PIN, LOW); 
    digitalWrite (BLUE_PIN, HIGH); 
}

void turn_off_RGB(){
    digitalWrite (RED_PIN, LOW); 
    digitalWrite (GREEN_PIN, LOW); 
    digitalWrite (BLUE_PIN, LOW); 
}

void set_RGB_white(){
    digitalWrite (RED_PIN, HIGH); 
    digitalWrite (GREEN_PIN, HIGH); 
    digitalWrite (BLUE_PIN, HIGH); 
}