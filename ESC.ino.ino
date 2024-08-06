#include <Servo.h>

Servo ESC;

void setup() {
  // put your setup code here, to run once:
  ESC.attach(8);
  ESC.writeMicroseconds(1000);
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  ESC.write(50);
  delay(20);
}
