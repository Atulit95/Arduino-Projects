int redPin = A4;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // use value between 0-255 to adjust brightness for LED.
  // 0 represents off whereas 255 represents HIGH(max voltage supply via arduino
  )
  analogWrite(redPin,255);
  delay(1000);
  analogWrite(redPin,0);
  delay(1000);
}
