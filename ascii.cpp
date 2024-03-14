#include <Adafruit_LiquidCrystal.h>

char asc = 65;
int count = 65;
const int pot = A0;
Adafruit_LiquidCrystal lcd(0);

void setup() {
  lcd.begin(16, 2);
  lcd.setBacklight(0);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("ASCII");
  lcd.setCursor(0, 1);
  lcd.print(count);
  lcd.print(": ");
  lcd.print(asc);
  delay(10);
  asc++;
  count++;
  if (asc >= 256) {
    asc = 65;
  }

  if (count >= 256) {
    count = 65;
  }

  lcd.setBacklight(1);
}