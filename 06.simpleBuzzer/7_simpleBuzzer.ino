int Buzzer=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(Buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(Buzzer,50);
  delay(20);
  analogWrite(Buzzer,0);
  delay(10);
}
