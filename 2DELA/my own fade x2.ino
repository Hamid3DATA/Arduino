
int red = 9;
int green = 10;
int blue = 11;

int red1 = 3;
int green1 = 5;
int blue1 = 6;



int redlight = 254;
int greenlight = 1;
int bluelight = 127;

int redlight1 = 254;
int greenlight1 = 1;
int bluelight1 = 127;



int reddim = -1;
int greendim = 1;
int bluedim = -1;

int reddim1 = -1;
int greendim1 = 1;
int bluedim1 = -1;


void setup() {
  
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

  pinMode(red1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(blue1, OUTPUT);
  
}

void loop() {
  
  analogWrite(red, redlight);
  analogWrite(green, greenlight);
  analogWrite(blue, bluelight);

  analogWrite(red1, redlight1);
  analogWrite(green1, greenlight1);
  analogWrite(blue1, bluelight1);

  redlight = redlight + reddim;
  greenlight = greenlight + greendim;
  bluelight = bluelight + bluedim;

  redlight1 = redlight1 + reddim1;
  greenlight1 = greenlight1 + greendim1;
  bluelight1 = bluelight1 + bluedim1;
  

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



  if (redlight1 >= 255 || redlight1 <=0){
    reddim1 = reddim1 * -1;
  }
  
  if (greenlight1 >= 255 || greenlight1 <=0){
    greendim1 = greendim1 * -1;
  }
  
  if (bluelight1 >= 255 || bluelight1 <=0){
    bluedim1 = bluedim1 * -1;
  }

  delay (10);
}
