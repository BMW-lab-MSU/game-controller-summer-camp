#include "Adafruit_FreeTouch.h"

Adafruit_FreeTouch qt = Adafruit_FreeTouch(A1, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, OUTPUT);
  qt.begin();
}

int thres = 900;

void loop() {
  // put your main code here, to run repeatedly:
  int qtt = 0;
  qtt = qt.measure();
  Serial.println(qtt);

  if (qtt >= thres) {
    digitalWrite(A0, HIGH);
  }
  else {
    digitalWrite(A0, LOW);
  }

}
