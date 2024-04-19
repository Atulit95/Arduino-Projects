// Define the pin numbers for the RGB LED
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  // Set the pin modes for the RGB LED
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Initial white color (all colors at maximum intensity)
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);

  // Read serial input
    String input = Serial.readString();

    // Change color to Cyan if input is "Cyan"
    if (input == "Cyan") {
      analogWrite(redPin, 0);     // Turn off red
      analogWrite(greenPin, 255); // Set green to full intensity
      analogWrite(bluePin, 255);  // Set blue to full intensity
      delay(2000);
      Serial.println("Hello");
    }
  
}
