void setup() {
  pinMode (12, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (2, OUTPUT);
  //12 = red        (left)
  //9 = yellow      (middle left)
  //7 = green       (middle right)
  //2 = blue/cyan   (right)
  
  //o stands for output
  
  //1 - o2
  //2 - o7
  //3 - 02 + o7
  //4 - o9
  //5 - o9 + o2
  //6 - o9 + o7
  //7 - 09 + 07 + 02
  //8 - o12
  //9 - o12 + o2
  
}

void loop() {
  
  //oddetall
  //1
  digitalWrite (12,LOW);
  digitalWrite (9,LOW);
  digitalWrite (7,LOW);
  digitalWrite (2,HIGH);
  delay(2000);
  //3
  digitalWrite (12,LOW);
  digitalWrite (9,LOW);
  digitalWrite (7,HIGH);
  digitalWrite (2,HIGH);
  delay (2000);
  //5
  digitalWrite (12,LOW);
  digitalWrite (9,HIGH);
  digitalWrite (7,LOW);
  digitalWrite (2,HIGH);
  delay (2000);
  //7
  digitalWrite (12,LOW);
  digitalWrite (9,HIGH);
  digitalWrite (7,HIGH);
  digitalWrite (2,HIGH);
  delay (2000);
  //9
  digitalWrite (12,HIGH);
  digitalWrite (9,LOW);
  digitalWrite (7,LOW);
  digitalWrite (2,HIGH);
  delay (2000);
  
  //all off to show that program started to count partall
  digitalWrite (12,LOW);
  digitalWrite (9,LOW);
  digitalWrite (7,LOW);
  digitalWrite (2,LOW);
  delay (1000);

  
  //partall
  //2
  digitalWrite (12,LOW);
  digitalWrite (9,LOW);
  digitalWrite (7,HIGH);
  digitalWrite (2,LOW);
  delay(2000);
  //4
  digitalWrite (12,LOW);
  digitalWrite (9,HIGH);
  digitalWrite (7,LOW);
  digitalWrite (2,LOW);
  delay (2000);
  //6
  digitalWrite (12,LOW);
  digitalWrite (9,HIGH);
  digitalWrite (7,HIGH);
  digitalWrite (2,LOW);
  delay (2000);
  //8
  digitalWrite (12,HIGH);
  digitalWrite (9,LOW);
  digitalWrite (7,LOW);
  digitalWrite (2,LOW);
  delay (2000);
  
  //all off to show that program started to count oddetall
  digitalWrite (12,LOW);
  digitalWrite (9,LOW);
  digitalWrite (7,LOW);
  digitalWrite (2,LOW);
  delay (1000);

}
