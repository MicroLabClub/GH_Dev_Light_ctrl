#ifndef DD_RGB_H
#define DD_RGB_H

#define RED_PIN GPIO5
#define GREEN_PIN GPIO0
#define BLUE_PIN GPIO4

void setup_RGB();
void loop_RGB(int SYSTICK);
void set_RGB_red();
void set_RGB_green();
void set_RGB_blue();
void turn_off_RGB();
void set_RGB_white();

#endif