#include"CokoinoJoyStick.h"

CokoinoJoyStick::CokoinoJoyStick()
{ }
///////////////////////////////////////////////////////////
void CokoinoJoyStick::attach(uint8_t x_pin,uint8_t y_pin)
{
  _pinX=x_pin;
  _pinY=y_pin;
}
///////////////////////////////////////////////////////////
void CokoinoJoyStick::attach(uint8_t x_pin,uint8_t y_pin,uint8_t z_pin)
{
  _pinX=x_pin;
  _pinY=y_pin; 
  _pinZ=z_pin;
  pinMode(_pinZ,INPUT); 
}
///////////////////////////////////////////////////////////
int CokoinoJoyStick::read_x(void)
{
  for(char i=0;i<20;i++){
    buf[i]=analogRead(_pinX);
    }
  x=Eliminate_jitter();
  return x;
}
///////////////////////////////////////////////////////////
int CokoinoJoyStick::read_y(void)
{
  for(char i=0;i<20;i++){
    buf[i]=analogRead(_pinY);
    }
  y=Eliminate_jitter();
  return y;
}
///////////////////////////////////////////////////////////
bool CokoinoJoyStick::read_z(void)
{
  for(char i=0;i<20;i++){
    buf[i]=digitalRead(_pinZ);
    }
  z=Eliminate_jitter();
  return z;
}
///////////////////////////////////////////////////////////
int CokoinoJoyStick::Eliminate_jitter(void)
{
  int sum=0;
  for(char i=5;i<15;i++){
    sum+=buf[i];
  }
  sum=sum/10;
  return sum;
}



