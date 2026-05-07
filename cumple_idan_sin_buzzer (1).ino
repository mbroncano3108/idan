// Cumpleaños de Idan Alessio Strat Briceño - 7 de Mayo
// Version: Solo pantalla LCD 16x2

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void mostrarMensaje(String linea1, String linea2) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(linea1);
  lcd.setCursor(0, 1);
  lcd.print(linea2);
  delay(2000);
}

void setup() {
  lcd.begin(16, 2);

  mostrarMensaje("Hey, oye tu...", "Si, tu mismo!");
  mostrarMensaje("Hoy es tu", "cumpleanos!!");
  mostrarMensaje("Feliz cumple", "Idan Alessio!");
  mostrarMensaje("Ojala el proximo", "año sigas");
  mostrarMensaje("con vida jaja", ":D");
  mostrarMensaje("6767676767", "6767676767");
  mostrarMensaje("Dewey sal", "de ahi!!");
  mostrarMensaje("Esa no es", "tu familia XD");
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Feliz cumple");
  lcd.setCursor(0, 1);
  lcd.print("Idan!! 07/05 :)");
  delay(3000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("67676767676767");
  lcd.setCursor(0, 1);
  lcd.print("Dewey sal XD");
  delay(3000);
}
