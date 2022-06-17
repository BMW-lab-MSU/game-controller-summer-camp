#include "Adafruit_FreeTouch.h"
#include "Keyboard.h"


Adafruit_FreeTouch qt_1 = Adafruit_FreeTouch(A0, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch qt_2 = Adafruit_FreeTouch(A1, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch qt_3 = Adafruit_FreeTouch(A6, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch qt_4 = Adafruit_FreeTouch(A7, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch qt_5 = Adafruit_FreeTouch(A8, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch qt_6 = Adafruit_FreeTouch(A9, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch qt_7 = Adafruit_FreeTouch(A10, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("FreeTouch test");

  if (! qt_1.begin())
    Serial.println("Failed to begin qt");
  if (! qt_2.begin())
    Serial.println("Failed to begin qt");
  if (! qt_3.begin())
    Serial.println("Failed to begin qt");
  if (! qt_4.begin())
    Serial.println("Failed to begin qt");
  if (! qt_5.begin())
    Serial.println("Failed to begin qt");
  if (! qt_6.begin())
    Serial.println("Failed to begin qt");
  if (! qt_7.begin())
    Serial.println("Failed to begin qt");


//  Keyboard setup
  Keyboard.begin();
}

int qt_Threshold = 900;

void loop() {
  int qt1 = 0;
  int qt2 = 0;
  int qt3 = 0;
  int qt4 = 0;
  int qt5 = 0;
  int qt6 = 0;
  int qt7 = 0;

  qt1 = qt_1.measure();
  Serial.print(qt1);
  Serial.print(",");

  qt2 = qt_2.measure();
  Serial.print(qt2);
  Serial.print(",");

  qt3 = qt_3.measure();
  Serial.print(qt3);
  Serial.print(",");

  qt4 = qt_4.measure();
  Serial.print(qt4);
  Serial.print(",");

  qt5 = qt_5.measure();
  Serial.print(qt5);
  Serial.print(",");

  qt6 = qt_6.measure();
  Serial.print(qt6);
  Serial.print(",");

  qt7 = qt_7.measure();
  Serial.print(qt7);
  Serial.println();

  if (qt1 >= qt_Threshold) {
    Keyboard.press(KEY_LEFT_ARROW);
  }else{
    Keyboard.release(KEY_LEFT_ARROW);
  }
  if (qt2 >= qt_Threshold) {
    Keyboard.press(KEY_RIGHT_ARROW);
  }else{
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  if (qt3 >= qt_Threshold) {
    Keyboard.press(KEY_UP_ARROW);
  }else{
    Keyboard.release(KEY_UP_ARROW);
  }
  if (qt4 >= qt_Threshold) {
    Keyboard.press(KEY_DOWN_ARROW);
  }else{
    Keyboard.release(KEY_DOWN_ARROW);
  }
  if (qt5 >= qt_Threshold) {
    Keyboard.press('A');
  }else{
    Keyboard.release('A');
  }
  if (qt6 >= qt_Threshold) {
    Keyboard.press('B');
  }else{
    Keyboard.release('B');
  }
  if (qt7 >= qt_Threshold) {
    Keyboard.print(' ');
  }else{
    Keyboard.release(' ');
  }
  delay(10);
  
}
