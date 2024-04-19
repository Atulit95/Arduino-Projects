#include <Servo.h>

Servo myservo;  // Create a servo object

void setup() {
  myservo.attach(9);  // Attach the servo to pin 9
}

void loop() {
  // Sweep the servo from 0 to 180 degrees
  for (int pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);          // Set servo position
    delay(15);                   // Wait for the servo to reach the position
  }

  // Sweep the servo from 180 to 0 degrees
  for (int pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);          // Set servo position
    delay(15);                   // Wait for the servo to reach the position
  }
}
