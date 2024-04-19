
void setup()  
{ 
  pinMode(4, OUTPUT); 
  pinMode(2, INPUT);   
  Serial.begin(9600); 
} 
 
void loop()  
{ 
  //If object movement is detected then the sensor value will be 1 else the value will be 0 
  int sensorValue = digitalRead(2); 
  Serial.println(sensorValue); 
  if (sensorValue == 1) 
  { 
    digitalWrite(4, LOW);  //Relay is low level triggered relay so we need to write LOW to switch on the light 
  } 
  else 
  { 
    digitalWrite(4, HIGH);     
  } 
}