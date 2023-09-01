int a = 0;

void setup()
{
  pinMode(11, INPUT);
  pinMode(4, OUTPUT);
  pinMode(10, INPUT);
  pinMode(3, OUTPUT);
  pinMode(9, INPUT);
  pinMode(2, OUTPUT);
  pinMode(8, INPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  // Rød dør åpen
  if (digitalRead(11) == HIGH) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }

  // Blå dør åpen dersom rød er open
  if (digitalRead(11) == HIGH) {
    if (digitalRead(10) == HIGH) {
      digitalWrite(3, HIGH);
    }
  } else {
    digitalWrite(3, LOW);
  }

  // for å fikse problemet med det at blå er alltid
  // åpen
  if (digitalRead(10) == LOW) {
    digitalWrite(3, LOW);
  }

  // grønn dør åpen dersom rød er åpen
  if (digitalRead(11) == HIGH) {
    if (digitalRead(9) == HIGH) {
      digitalWrite(2, HIGH);
    }
  } else {
    digitalWrite(2, LOW);
  }

  // for å fikse problemet med det at grønn er alltid
  // åpen
  if (digitalRead(9) == LOW) {
    digitalWrite(2, LOW);
  }

  // Gul dør åpen dersom rød er åpen
  if (digitalRead(11) == HIGH) {
    if (digitalRead(8) == HIGH) {
      digitalWrite(1, HIGH);
    }
  } else {
    digitalWrite(1, LOW);
  }

  // for å fikse problemet med det at gul er alltid
  // på
  if (digitalRead(8) == LOW) {
    digitalWrite(1, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
