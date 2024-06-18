int blueLed = A0;

void setup() {
  pinMode(blueLed, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(blueLed, HIGH);

  // Delay for 1000 milliseconds
  delay(1000);

  // Turn the LED off
  digitalWrite(blueLED, LOW);

  // Delay for 1000 milliseconds
  delay(1000);
}
