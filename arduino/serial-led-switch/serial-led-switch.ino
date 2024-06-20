int blueLed = A0;
int yellowLed = A1;

void setup() {
  // Set the LED pins as outputs
  pinMode(blueLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);

  // Initialize the seiral port at 9600 baud
  Serial.begin(9600);

  // Wait until the serial port is ready
  while (!Serial) {

  }
}

void loop() {
  Serial.println("Enter the color to turn on: ");

  while (Serial.available() == 0) {
    // Do nothing. We need to wait until there is data in serial receive buffer.
  }

  // Read our input string from the serial port
  String color = Serial.readString();

  // Remove special characters (e.g., \r, \n) and whitespace from the string
  color.trim();

  Serial.println(color);

  if (color == "blue") {
    digitalWrite(blueLed, HIGH);
    digitalWrite(yellowLed, LOW);
  }
  else if (color == "yellow") {
    digitalWrite(blueLed, LOW);
    digitalWrite(yellowLed, HIGH);
  }
  else {
    Serial.println("Sorry, you entered an invalid color");
  }

}