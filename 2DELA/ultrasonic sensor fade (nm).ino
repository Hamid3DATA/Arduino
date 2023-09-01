
//Green, Red Blue

const int trigpin = 6;
const int echopin = 5;
const int red = 10;
const int green = 11;
const int blue = 9;

long duration;
int distance;



int redlight = 254;
int greenlight = 1;
int bluelight = 127;

int reddim = -1;
int greendim = 1;
int bluedim = -1;



void setup(){

  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop(){

  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(echopin, HIGH);
  distance = 0.017 * duration;


  analogWrite(red, redlight);
  analogWrite(green, greenlight);
  analogWrite(blue, bluelight);

    redlight = redlight + reddim;
  greenlight = greenlight + greendim;
  bluelight = bluelight + bluedim;

  
  if (distance == 5) {
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
}
else if (distance == 10) {
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
}
else { 
  if (redlight >= 255 || redlight <=0){
    reddim = reddim * -1;
  }
  
  if (greenlight >= 255 || greenlight <=0){
    greendim = greendim * -1;
  }
  
  if (bluelight >= 255 || bluelight <=0){
    bluedim = bluedim * -1;
  }
}


Serial.println("distance: ");
Serial.println(distance);
Serial.println(" cm");

delay(50);

}
