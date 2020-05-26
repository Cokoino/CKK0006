#include"CokoinoArm.h"

/////////////////////////////////////////////////////////
void CokoinoArm::JoyStickAttach(uint8_t xpin1,uint8_t ypin1,uint8_t xpin2,uint8_t ypin2)
{
  JoyStickL.attach(xpin1,ypin1);
  JoyStickR.attach(xpin2,ypin2);
} 
CokoinoArm::CokoinoArm(){}
/////////////////////////////////////////////////////////
void CokoinoArm::ServoAttach(uint8_t servo1_pin,uint8_t servo2_pin,uint8_t servo3_pin,uint8_t servo4_pin)
{
  servo1.attach(servo1_pin);
  servo2.attach(servo2_pin);
  servo3.attach(servo3_pin);
  servo4.attach(servo4_pin);
  angle[0]=servo1.read();
  angle[1]=servo2.read();
  angle[2]=servo3.read();
  angle[3]=servo4.read();
}
/////////////////////////////////////////////////////////
void CokoinoArm::up(int speed)
{
  angle[1]=servo2.read();
  angle[2]=servo3.read();
  angle[1]=angle[1]+1;
  angle[2]=angle[2]-1;
  if(angle[1]>=180)
    {angle[1]= 180;}
  if(angle[2]<=0)
    {angle[2]= 0;}
  servo2.write(angle[1]);
  servo3.write(angle[2]);
  delay(speed);      
}
/////////////////////////////////////////////////////////
void CokoinoArm::down(int speed)
{
  angle[1]=servo2.read();
  angle[2]=servo3.read();
  angle[1]=angle[1]-1;
  angle[2]=angle[2]+1;
  if(angle[1]<=0)
    {angle[1] = 0;}
  if(angle[2]>=180)
    {angle[2] =180;}
  servo2.write(angle[1]);
  servo3.write(angle[2]);
  delay(speed);    
}
/////////////////////////////////////////////////////////
void CokoinoArm::left(int speed)
{
  angle[0]=servo1.read();
  angle[0]=angle[0]+1;
  if(angle[0]>=180)
    {angle[0] = 180;}
  servo1.write(angle[0]);
  delay(speed);       
}
/////////////////////////////////////////////////////////
void CokoinoArm::right(int speed)
{
  angle[0]=servo1.read();
  angle[0]=angle[0]-1;
  if(angle[0]<=0)
    {angle[0] =0;}
  servo1.write(angle[0]);
  delay(speed);    
}
/////////////////////////////////////////////////////////
void CokoinoArm::open(int speed)
{
  angle[3]=servo4.read();
  angle[3]=angle[3]+1;
  if(angle[3]>=180)
    {angle[3] =180;}
  servo4.write(angle[3]);
  delay(speed);     
}
/////////////////////////////////////////////////////////
void CokoinoArm::close(int speed)
{
  angle[3]=servo4.read();
  angle[3]=angle[3]-1;
  if(angle[3]<=0)
    {angle[3] =0;}
  servo4.write(angle[3]);
  delay(speed);     
}
/////////////////////////////////////////////////////////
int *CokoinoArm::captureAction(void)
{
  return angle;	
}
/////////////////////////////////////////////////////////
void CokoinoArm::do_action(int *angle,int speed)
{
  int count=0;
  int T_angle[4];
  int S_angle[4];
  for(int i=0;i<4;i++){
	T_angle[i]= *angle;
	angle++;
    }
  S_angle[0]=servo1.read();
  S_angle[1]=servo2.read();
  S_angle[2]=servo3.read();
  S_angle[3]=servo4.read();
  do{
	S_angle[0] = (T_angle[0]>S_angle[0])?S_angle[0]+1:S_angle[0]-1;
	servo1.write(S_angle[0]);
    S_angle[1] = (T_angle[1]>S_angle[1])?S_angle[1]+1:S_angle[1]-1;
    servo2.write(S_angle[1]);
	S_angle[2] = (T_angle[2]>S_angle[2])?S_angle[2]+1:S_angle[2]-1;
	servo3.write(S_angle[2]);
	S_angle[3] = (T_angle[3]>S_angle[3])?S_angle[3]+1:S_angle[3]-1;
	servo4.write(S_angle[3]);
	count++;
	delay(speed);
  }while(count<180);
  delay(speed*20);
}




