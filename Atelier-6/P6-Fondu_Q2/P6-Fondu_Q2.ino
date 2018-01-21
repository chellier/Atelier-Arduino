// Croquis P6-Fondu_Q2.ino

//----- CONSTANTES -----
#define Pot 0  // POT. sur la ligne analogique 0 (A0)
#define Led 5  // LED sur la ligne E/S 5 (PWM)

//----- VARIABLE -----

//----- PROCEDURE D'INITIALISATION -----
void setup() {

}

//----- BOUCLE PRINCIPALE -----
void loop(){
  for (int laImp = 0 ; laImp <= 255 ; laImp = laImp + 5) {
    analogWrite(Led, laImp); // Réglage de la largeur d'impulsion
    delay(30); // Pour avoir le temps de voir quelquechose...
    // changez la valeur donnée à delay pour essayer
  }
  for (int laImp = 255 ; laImp >= 0 ; laImp = laImp - 5) {
    analogWrite(Led, laImp); // Réglage de la largeur d'impulsion
    delay(30); // Pour avoir le temps de voir quelquechose...
  }
}
