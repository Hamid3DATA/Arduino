
int red = 10;
int green = 11;
int blue = 9;

void setup() {
  // put your setup code here, to run once:

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  RGB_color (255, 0, 0);
  delay(1000);
  RGB_color (0, 255, 0);
  delay(1000);
  RGB_color (0, 0, 255);
  delay(1000);
  RGB_color (255, 255, 0);
  delay(1000);
  RGB_color (0, 255, 255);
  delay(1000);
  RGB_color (255, 255, 255);
  delay(1000);

}

void RGB_color(int red_light, int green_light, int blue_light)
 {
  analogWrite(red, red_light);
  analogWrite(green, green_light);
  analogWrite(blue, blue_light);
}
