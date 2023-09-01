void setup() {
  
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(A0, OUTPUT);

}

void loop() {
  

  if (analogRead(A0) == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(12, HIGH);
  }

}
