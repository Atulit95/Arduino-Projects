int red=9;
int green=10;
int blue=11;
String input;
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);


input =Serial.readString();
Serial.println(input);

if(input=="cyan"){
  
analogWrite(red,255);
analogWrite(green,255);
analogWrite(blue,255);
delay(2000);}
else{
 analogWrite(red,0);
analogWrite(green,255);
analogWrite(blue,255); 
}

}