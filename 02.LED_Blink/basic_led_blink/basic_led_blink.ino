
void setup() {
  // initialize digital pin led_digital_pin as an output.
  int led_digital_pin_digital_pin = 7;
  pinMode(led_digital_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_digital_pin, HIGH);  // turn the led_digital_pin on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(led_digital_pin, LOW);   // turn the led_digital_pin off by making the voltage LOW
  delay(1000);                      // wait for a second
}
