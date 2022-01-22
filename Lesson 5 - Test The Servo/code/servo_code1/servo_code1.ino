int servopin=10;   //Define digital interface 10 to connect servo servo signal line
int myangle;       //Define the Angle variable 0-180
int pulsewidth;    //Define the pulse width variable
int val;           //0-9

void servopulse(int servopin,int myangle)  //Define an impulse function
{
pulsewidth=(myangle*11)+500;               //Convert Angle to 500-2480 pulse width

digitalWrite(servopin,HIGH);               //Set the interface level of steering gear to high

delayMicroseconds(pulsewidth);             //Delay millisecond

digitalWrite(servopin,LOW);                //Lower the interface level of the steering gear

delay(20-pulsewidth/1000);
}

void setup()
{
pinMode(servopin,OUTPUT);        //Set servo interface as output interface set servo interface as output mode

Serial.begin(9600);             //The baud rate is 9,600

Serial.println("servo=o_seral_simple ready" ) ;
}

void loop()                      //Main loop function
{
val=Serial.read();              //Read the value of the serial port

if(val>'0'&&val<='9')
{
val=val-'0';                        
val=val*(180/9);                    //Convert Numbers into angles
Serial.print("moving servo to ");
                                   //DEC:Converts the number to an angular decimal representation that outputs the ASCII encoded value of b,
                                   //followed by a carriage return and a newline character
Serial.print(val,DEC);
Serial.println();
for(int i=0;i<=50;i++)             
{
servopulse(servopin,val);          //Call the impulse function
}
}
}
