// Croquis P4-Touche_Q2.ino

//----- CONSTANTES -----
#define Touche 7  // TOUCHE raccordée à la ligne d'E/S 7
#define Led 5 // LED raccordée à la ligne d'E/S 5
//----- VARIABLES -----
int Etat = 0;    // Etat logique de la TOUCHE

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  pinMode(Touche, INPUT); // Ligne de la TOUCHE en entrée
  pinMode(Led, OUTPUT);  // Ligne de la LED en sortie  
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  Etat = digitalRead(Touche);  // Lecture de l'état de la TOUCHE
  if (Etat == LOW) {
    digitalWrite(Led, HIGH);
  }
  else {
    digitalWrite(Led, LOW);
  }
}
