void setup() {
  // put your setup code here, to run once:
  pinMode(A2, OUTPUT);  // green
  pinMode(A5, OUTPUT);  // yellow
  pinMode(A9, OUTPUT);  // red

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(A2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(A5, LOW);
  digitalWrite(A9, LOW);
  delay(1000);                       // wait for a second
  digitalWrite(A2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(A5, HIGH);
  digitalWrite(A9, LOW);
  delay(500);
  digitalWrite(A2, LOW);
  digitalWrite(A5, LOW);
  digitalWrite(A9, HIGH);
  delay(1000);

}
