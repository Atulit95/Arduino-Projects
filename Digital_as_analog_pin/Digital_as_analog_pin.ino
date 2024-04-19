int red=9;
int green=10;
int blue=11;
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
//Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(red,255-51);
analogWrite(green,255-254);
analogWrite(blue,255-255);

//Serial.println(analogRead(red));
}
