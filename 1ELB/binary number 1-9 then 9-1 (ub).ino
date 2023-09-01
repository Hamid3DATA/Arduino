void setup() {
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
//12 = red        (left)
//9 = yellow      (middle left)
//7 = green       (middle right)
//2 = blue/cyan   (right)
}

void loop() {
  //1
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(2000);
  //2
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(2, LOW);
  delay(2000);
  //3
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  //4
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(2000);
  //5
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(2000);
  //6
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, LOW);
  delay(2000);
  //7
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  //8
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(2000);
  //9
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(2000);


  //pause to start counting 9-1
  //off all of for 1 sek
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(1000);
  //9
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(2000);
  //8
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(2000);
  //7
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  //6
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, LOW);
  delay(2000);
  //5
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(2000);
  //4
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(2000);
  //3
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  //2
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(2, LOW);
  delay(2000);
  //1
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(2000);
  //pause to start counting 1-9
  //off all for 1sek
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(1000);
}
