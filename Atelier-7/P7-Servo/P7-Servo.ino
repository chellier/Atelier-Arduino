// Croquis P7-Servo.ino

//----- LIBRAIRIE ADDITIONNELLE -----
#include <Servo.h>  // Librairie pour l'utilisation de servomoteurs

//----- CONSTANTES -----
Servo Servo1;  // création de l'objet Servo1 (notre SERVOMOTEUR)
#define Pot 0  // POTENTIOMETRE sur la ligne analogique 0 (A0)
#define Led 5  // LED sur la ligne E/S 5

//----- VARIABLES -----
int valPot; // Variable du POTENTIOMETRE
int angle; // valPot converti en angle (entre 0° et 180°)

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  Servo1.attach(6);  // Servo1 rattaché à la broche 6 
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  valPot = analogRead(Pot); // Lecture du POTENTIOMETRE
  angle = map(valPot, 0, 1023, 0, 180); // conversion
  Servo1.write(angle); // Activation du SERVOMOTEUR
  delay(20); // Temps nécessaire au mouvement du palonnier
}
