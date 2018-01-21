// Croquis P10-LCD-TEMP36.ino

//----- LIBRAIRIE ADDITIONNELLE -----
#include <LiquidCrystal.h>  // Librairie pour l'utilisation de l'afficheur LCD

//----- CONSTANTES -----
// création de l'objet lcd (notre afficheur LCD)
LiquidCrystal lcd(8, 9, 10, 11, 12, 13); // RS=8, RW=GND, EN=9, D4=10, D5=11, D6=12, D7=13

#define TMP 5  // Broche de sortie du tmp36 sur la ligne analogique 5 (A5)

//----- VARIABLES -----
int tensionLue; // valeur lue sur la broche de sortie du tmp36

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  lcd.begin(16, 2); // déclaration du LCD à 16 caractères sur 2 lignes
  lcd.clear();      // Effacement du LCD
  // Message de présentation sur 2 lignes durant 3 secondes
  lcd.setCursor(0, 0); // placement : 1ere colonne, 1ere ligne
  lcd.print(" CLG ST GILBERT "); // on écrit...
  lcd.setCursor(0, 1); // placement : 1ere colonne, 2eme ligne
  lcd.print(" LCD - ARDUINO  ");
  delay (3000);
  lcd.clear();      // Effacement du LCD
  // Caractères qui ne seront pas effacés
  lcd.setCursor(1, 0);
  lcd.print("Temperature :");
  lcd.setCursor(5, 1);
  lcd.print(" degres C");
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  tensionLue = analogRead(TMP); // Lecture du TMP36, nombre compris entre 0 et 1023
  // conversion en une valeur comprise entre 0.0V et 5.0V (tension réelle)
  float tensionSortie = (tensionLue * 5.0) / 1024.0;
  // Conversion en une température en degrés C
  float temperature = ((tensionSortie * 1000) - 500) / 10;
  // Ecriture de la température pendant 3 secondes
  lcd.setCursor(0, 1); // placement : 1ere colonne, 2eme ligne
  lcd.print(temperature);
  delay(3000);
  lcd.setCursor(0, 1); // placement : 1ere colonne, 2eme ligne
  lcd.print("     "); // Effacement de la température  
}
