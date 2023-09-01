#include <LiquidCrystal.h>
LiquidCrystal LCD(12, 11, 5, 4, 3, 2);

void setup() {
LCD.begin(16,2);


}

void loop() {
  LCD.clear();
  LCD.print("Eg");
  delay(1000);
  LCD.clear();
  LCD.print("liker");
  delay(1000);
  LCD.clear();
  LCD.print("Oyvind");
  delay(1000);
  LCD.clear();
  LCD.print("som");
  delay(1000);
  LCD.clear();
  LCD.print("learar!");
  delay(1000);

}
