/*
 * This code applies to cokoino mechanical arm
 * Through this link you can download the source code:
 * https://github.com/Cokoino/
 * Company web site:
 * http://cokoino.com/
 */
#ifndef COKOINOJOYSTICK_H_
#define COKOINOJOYSTICK_H_ 
#include <Arduino.h>

class CokoinoJoyStick
{
 public:
     CokoinoJoyStick();
     void attach(uint8_t x_pin,uint8_t y_pin);
     void attach(uint8_t x_pin,uint8_t y_pin,uint8_t z_pin);
     int read_x(void);
     int read_y(void);
     bool read_z(void);
     int Eliminate_jitter(void);
 private:
     uint8_t _pinX;
     uint8_t _pinY;
     uint8_t _pinZ;
     int x;
     int y;
     bool z;
     int buf[20]={};
};
#endif
