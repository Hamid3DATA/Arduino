#include <Servo.h>

Servo minServo;
const int potentiometer = A0;
const int servo = 9;

void setup() {
  pinMode(potentiometer, INPUT);
  pinMode(servo, OUTPUT);
  minServo.attach(servo);

}

void loop() {
  int potVerdi = analogRead(potentiometer);
  int skalertVerdi = map(potVerdi, 0, 1023, 0, 180);
  minServo.write(skalertVerdi);
  delay(15);
}
