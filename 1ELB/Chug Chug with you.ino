#include <LiquidCrystal.h>
LiquidCrystal LCD(12, 11, 5, 4, 3, 2);

void setup() {
LCD.begin(16,2);


}

void loop() {
  LCD.clear();
  LCD.print("We got our");
  delay(1000);
  LCD.clear();
  LCD.print("number 1");
  delay(800);
  LCD.clear();
  LCD.print("victory royale!");
  delay(1000);
  LCD.clear();
  LCD.print("yeah fortnite");
  delay(900);
  LCD.clear();
  LCD.print("we are about to");
  delay(600);
  LCD.clear();
  LCD.print("get down!");
  delay(600);
  LCD.clear();
  LCD.print("(get down)!");
  delay(500);
  LCD.clear();
  LCD.print("10 kills");
  delay(600);
  LCD.clear();
  LCD.print("on the board");
  delay(500);
  LCD.clear();
  LCD.print("right now");
  delay(700);
  LCD.clear();
  LCD.print("just wiped out");
  delay(750);
  LCD.clear();
  LCD.print("tomato town");
  delay(1100);

}
