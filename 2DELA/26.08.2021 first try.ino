
int led3 = 6;
int led2 = 5;
int led1 = 3;

void setup() {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}
