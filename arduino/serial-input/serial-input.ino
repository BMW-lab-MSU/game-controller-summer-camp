void setup() {
  // Initialize the seiral port at 9600 baud
  Serial.begin(9600);

  // Wait until the serial port is ready
  while (!Serial) {

  }
}

void loop() {
  Serial.println("Enter your name: ");

  while (Serial.available() == 0) {
    // Do nothing. We need to wait until there is data in serial receive buffer.
  }

  // Read our input string from the serial port
  String input = Serial.readString();

  // Remove special characters (e.g., \r, \n) and whitespace from the string
  input.trim();

  // Print out the name you entered.
  Serial.print("Your name is ");
  Serial.println(input);

  // Optionally, make the code stop after entering your name; to do this, we loop forever.
  // while (true) {
    // The code will stay here forever.
  // }
}