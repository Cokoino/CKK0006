int Buzzer_pin = 9;
void setup() {
pinMode(Buzzer_pin, OUTPUT);
}
void loop() {
analogWrite(Buzzer_pin,150);
delay(1000);
analogWrite(Buzzer_pin,200);
delay(1000);
analogWrite(Buzzer_pin,250);
delay(1000);
}
