// To make the code easier to read, we can name the pin with a more descriptive
// name, such as blue_led if we are using a blue LED. This helps us keep track of
// what each input or output pin is used for.
int blueLed = A0;

void setup() {
  // Wire up the LED's anode (long leg, positive) to pin A0.
  // Pin A0 needs to be an output so we can turn the LED on.
  pinMode(blue_led, OUTPUT);

}

void loop() {
  // Turn on the LED.
  digitalWrite(blueLed, HIGH);
}
