
int red = 9;
int green = 10;
int blue = 11;

int redlight = 254;
int greenlight = 1;
int bluelight = 127;

int reddim = -1;
int greendim = 1;
int bluedim = -1;


void setup() {
  
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
}

void loop() {
  
  analogWrite(red, redlight);
  analogWrite(green, greenlight);
  analogWrite(blue, bluelight);

  redlight = redlight + reddim;
  greenlight = greenlight + greendim;
  bluelight = bluelight + bluedim;

  if (redlight >= 255 || redlight <=0){
    reddim = reddim * -1;
  }
  
  if (greenlight >= 255 || greenlight <=0){
    greendim = greendim * -1;
  }
  
  if (bluelight >= 255 || bluelight <=0){
    bluedim = bluedim * -1;
  }

  delay (10);
}
