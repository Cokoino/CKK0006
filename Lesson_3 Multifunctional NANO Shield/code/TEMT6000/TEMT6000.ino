int TEMT6000_pin = A6;
int TEMT6000_data;
void setup() {
Serial.begin(9600);
pinMode(TEMT6000_pin, INPUT);
}
void loop() {
TEMT6000_data=analogRead(TEMT6000_pin);
Serial.print("TEMT600_data=");
Serial.println(TEMT6000_data);
delay(300);
}
