void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(9,25);
delay(200);
analogWrite(9,5);
delay(100);
}
