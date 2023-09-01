int tid = 0;
int sek = 0;
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

  tid = 2000;
  sek = 5000;
  //1
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(tid);
  //2
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(2, LOW);
  delay(tid);
  //3
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(tid);
  //4
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(tid);
  //5
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(tid);
  //6
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, LOW);
  delay(tid);
  //7
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(tid);
  //8
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(tid);
  //9
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(sek);
}
