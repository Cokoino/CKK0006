/*
 * This code applies to cokoino mechanical arm
 * Through this link you can download the source code:
 * https://github.com/Cokoino/CKK0006
 * Company web site:
 * http://cokoino.com/
 */
#ifndef COKOINOARM_H_
#define COKOINOARM_H_ 
#include"CokoinoServo.h"
#include"CokoinoJoyStick.h"
#include <Arduino.h>

class CokoinoArm
{
 public:
     CokoinoArm();
	 void JoyStickAttach(uint8_t xpin1,uint8_t ypin1,uint8_t xpin2,uint8_t ypin2);
     void ServoAttach(uint8_t servo1_pin,uint8_t servo2_pin,uint8_t servo3_pin,uint8_t servo4_pin);
     void up(int speed);
     void down(int speed);
     void left(int speed);
     void right(int speed);
     void open(int speed);
     void close(int speed);
	 int *captureAction(void);
	 void do_action(int *angle,int speed);
 //private:
     int angle[4];
     CokoinoServo servo1;
     CokoinoServo servo2;
     CokoinoServo servo3;
     CokoinoServo servo4; 
     CokoinoJoyStick JoyStickL;
     CokoinoJoyStick JoyStickR; 	 
};
#endif
