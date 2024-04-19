int red=A5;
float cal;
void setup() {
  // put your setup code here, to run once:
pinMode(red,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
cal=(5.0/1023.0)*(analogRead(red));
Serial.println(cal);
}
