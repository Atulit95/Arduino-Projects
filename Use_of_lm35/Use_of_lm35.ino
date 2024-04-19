int red=A1;
float clac;

void setup() {
  // put your setup code here, to run once:
  pinMode(red,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  clac=(analogRead(red)*(5.0/1023.0))/0.01;
  Serial.println(clac);
  delay(1000);
}
