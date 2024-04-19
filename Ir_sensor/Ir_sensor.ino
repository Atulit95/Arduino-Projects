int ir=7;
 int led=8;

void setup() {
 pinMode(ir,INPUT);
 pinMode(led,OUTPUT);
 Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(ir)==1){
    digitalWrite(led,LOW);
    delay(100);
    Serial.println(digitalRead(ir));
  }
  else{
    digitalWrite(led,HIGH);
    delay(100);
  }
  delay(100);
  
}
