void setup() {
  // Wire up the LED's anode (long leg, positive) to pin A0.
  // Pin A0 needs to be an output so we can turn the LED on.
  pinMode(A0, OUTPUT);

}

void loop() {
  // Turn on the LED.
  digitalWrite(A0, HIGH);
}
