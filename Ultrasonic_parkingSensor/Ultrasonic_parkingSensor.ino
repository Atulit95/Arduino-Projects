#define trig 12

#define echo 11

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);


  pinMode(trig, OUTPUT);

  pinMode(echo, INPUT);

  pinMode(5, OUTPUT);

  pinMode(13, OUTPUT);

  Serial.begin(9600);
}

void loop()
{

  digitalWrite(trig, LOW);

  delayMicroseconds(2);

  digitalWrite(trig, HIGH);

  delayMicroseconds(10);

  digitalWrite(trig, LOW);

  long t = pulseIn(echo, HIGH);

  long cm = t / 29 / 2;

  Serial.println(cm);

  delay(200);

  digitalWrite(13, HIGH);

  delay(500);

  digitalWrite(13, LOW);

  delay(500);

  if (cm <= 100 && cm >= 60)
  {
    digitalWrite(2,HIGH);

    digitalWrite(3, HIGH);
    analogWrite(9,80);
    delay(100);

    



    delay(1000);
  }

  else if (cm <= 50 && cm >= 30)
  {
    digitalWrite(4,HIGH);

    digitalWrite(5, HIGH);
    analogWrite(9,160);

    delay(100);

    digitalWrite(5, LOW);

    delay(500);
  }

  else if (cm <= 30 && cm >= 10)
  {

    digitalWrite(6,HIGH);

    digitalWrite(7, HIGH);
    analogWrite(9,240);

    delay(80);

    digitalWrite(5, LOW);

    delay(1);
  }

  else if (cm <= 10 && cm >= 0)
  {

    

    delay(50);

    // digitalWrite (6, LOW);

    //  delay (50);
  }

  else
  {
    analogWrite(9,0);

    digitalWrite(5, LOW);

    // delay (50);
  }
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(100);

}