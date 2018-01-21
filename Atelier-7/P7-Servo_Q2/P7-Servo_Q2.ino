// Croquis P7-Servo.ino

//----- LIBRAIRIE ADDITIONNELLE -----
#include <Servo.h>  // Librairie pour l'utilisation de servomoteurs

//----- CONSTANTES -----
Servo Servo1;  // création de l'objet Servo1 (notre SERVOMOTEUR)
#define Led 5  // LED sur la ligne E/S 5

//----- VARIABLE -----
int angle; // valPot converti en angle (entre 0° et 180°)

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  Servo1.attach(6);  // Servo1 rattaché à la broche 6 
  pinMode(Led, OUTPUT);
  }

//----- BOUCLE PRINCIPALE -----
void loop(){
  for (angle = 0; angle <= 180; angle += 2){
    if (angle > 90){
      digitalWrite(Led, HIGH);
    }
    else {
      digitalWrite(Led, LOW);
    }
    Servo1.write(angle); // Activation du SERVOMOTEUR
    delay(20); // Temps nécessaire au mouvement du palonnier
  }

  for (angle = 180; angle >= 0; angle -= 2){
    if (angle > 90){
      digitalWrite(Led, HIGH);
    }
    else {
      digitalWrite(Led, LOW);
    }
    Servo1.write(angle); // Activation du SERVOMOTEUR
    delay(20); // Temps nécessaire au mouvement du palonnier
  }

}
