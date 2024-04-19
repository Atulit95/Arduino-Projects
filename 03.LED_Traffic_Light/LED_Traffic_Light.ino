// Define the pins for the traffic light LEDs
const int redPin = 10;
const int yellowPin = 9;
const int greenPin = 8;

void setup() {
  // Set the LED pins as output
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Red light (Stop)
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(5000); // Stay red for 5 seconds

  // Red and Yellow light (Prepare to go)
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(2000); // Stay red and yellow for 2 seconds

  // Green light (Go)
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(5000); // Stay green for 5 seconds

  // Yellow light (Prepare to stop)
 
