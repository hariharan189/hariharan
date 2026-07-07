#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9);  // Connect servo signal wire to pin 9
}

void loop() {
  // Move from 0° to 180°
  for (int pos = 0; pos <= 180; pos++) {
    myServo.write(pos);
    delay(15);
  }

  // Move from 180° back to 0°
  for (int pos = 180; pos >= 0; pos--) {
    myServo.write(pos);
    delay(15);
  }
}
