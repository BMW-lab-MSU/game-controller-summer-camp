void setup() {
  // set the LEDs as outputs
  pinMode(A2, OUTPUT);  // green
  pinMode(A5, OUTPUT);  // yellow
  pinMode(A9, OUTPUT);  // red

}

void loop() {
  // Turn on the green light for 1 second
  // Make sure all the other lights are off.
  digitalWrite(A2, HIGH);
  digitalWrite(A5, LOW);
  digitalWrite(A9, LOW);
  delay(1000);

  // Turn on the yellow light for 0.5 seconds
  digitalWrite(A2, LOW);
  digitalWrite(A5, HIGH);
  digitalWrite(A9, LOW);
  delay(500);

  // Turn on the red light for 1 second	
  digitalWrite(A2, LOW);
  digitalWrite(A5, LOW);
  digitalWrite(A9, HIGH);
  delay(1000);

}
