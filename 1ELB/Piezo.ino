void setup() {
  // put your setup code here, to run once:
  pinMode (1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(1, 1000);
  delay (500);
  tone (1, 2);
  delay (500);

}
