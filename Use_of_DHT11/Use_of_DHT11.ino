  #include <DHT.h>
#include <DHT_U.h>

// Define the pin for the DHT sensor
#define DHT11_PIN 7
int sensePin = 7;

// Create a DHT sensor object
DHT HT(sensePin, DHT11); // Change DHT11 to your sensor type (DHT22, etc.)

// Variables to store sensor data
float humidity;
float tempC;
float tempF;
float tempK;

void setup() {
  // Start serial communication
  Serial.begin(9600);

  // Initialize the DHT sensor
  HT.begin();
}

void loop() {
  // Read sensor data
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = ((9.0 / 5.0) * tempC) + 32;
  tempK = tempC + 273.15; // Convert Celsius to Kelvin

  // Print sensor data to the serial monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%\t");

  Serial.print("Temperature (C): ");
  Serial.print(tempC);
  Serial.print("C\t");

  Serial.print("Temperature (F): ");
  Serial.print(tempF);
  Serial.print("F\t");

  Serial.print("Temperature (K): ");
  Serial.print(tempK);
  Serial.println("K");

  // Wait for 2 seconds before reading again
  delay(2000);
}
