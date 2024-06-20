#include "Adafruit_FreeTouch.h"
#include "Keyboard.h"


Adafruit_FreeTouch leftButton = Adafruit_FreeTouch(A0, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch rightButton = Adafruit_FreeTouch(A1, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch upButton = Adafruit_FreeTouch(A2, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch downButton = Adafruit_FreeTouch(A3, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch aButton = Adafruit_FreeTouch(A4, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch bButton = Adafruit_FreeTouch(A5, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch spaceButton = Adafruit_FreeTouch(A6, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);

void setup() {
  Serial.begin(9600);

  // Keyboard setup
  Keyboard.begin();
}

int threshold = 1000;

void loop() {
  int leftValue = 0;
  int rightValue = 0;
  int upValue = 0;
  int downValue = 0;
  int aValue = 0;
  int bValue = 0;
  int spaceValue = 0;

  leftValue = leftButton.measure();
  Serial.print(leftValue);
  Serial.print(",");

  rightValue = rightButton.measure();
  Serial.print(rightValue);
  Serial.print(",");

  upValue = upButton.measure();
  Serial.print(upValue);
  Serial.print(",");

  downValue = downButton.measure();
  Serial.print(downValue);
  Serial.print(",");

  aValue = aButton.measure();
  Serial.print(aValue);
  Serial.print(",");

  bValue = bButton.measure();
  Serial.print(bValue);
  Serial.print(",");

  spaceValue = spaceButton.measure();
  Serial.print(spaceValue);
  Serial.println();

  if (leftValue >= threshold) {
    Keyboard.press(KEY_LEFT_ARROW);
  }else{
    Keyboard.release(KEY_LEFT_ARROW);
  }
  if (rightValue >= threshold) {
    Keyboard.press(KEY_RIGHT_ARROW);
  }else{
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  if (upValue >= threshold) {
    Keyboard.press(KEY_UP_ARROW);
  }else{
    Keyboard.release(KEY_UP_ARROW);
  }
  if (downValue >= threshold) {
    Keyboard.press(KEY_DOWN_ARROW);
  }else{
    Keyboard.release(KEY_DOWN_ARROW);
  }
  if (aValue >= threshold) {
    Keyboard.press('A');
  }else{
    Keyboard.release('A');
  }
  if (bValue >= threshold) {
    Keyboard.press('B');
  }else{
    Keyboard.release('B');
  }
  if (spaceValue >= threshold) {
    Keyboard.print(' ');
  }else{
    Keyboard.release(' ');
  }
  delay(10);
  
}
