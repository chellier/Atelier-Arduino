// Croquis P4-Touche_Q3.ino

//----- CONSTANTES -----
#define Touche1 7  // TOUCHE1 raccordée à la ligne d'E/S 7
#define Touche2 2  // TOUCHE2 raccordée à la ligne d'E/S 2
#define Led 5 // LED raccordée à la ligne d'E/S 5
//----- VARIABLES -----
int Etat1 = 0;    // Etat logique de la TOUCHE1
int Etat2 = 0;    // Etat logique de la TOUCHE2

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  pinMode(Touche1, INPUT); // Ligne de la TOUCHE1 en entrée
  pinMode(Touche2, INPUT); // Ligne de la TOUCHE2 en entrée
  pinMode(Led, OUTPUT);  // Ligne de la LED en sortie  
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  Etat1 = digitalRead(Touche1);  // Lecture de l'état de la TOUCHE1
  Etat2 = digitalRead(Touche2);  // Lecture de l'état de la TOUCHE2
  if (Etat1 == LOW && Etat2 == LOW) { // Si les 2 boutons sont appuyés
    digitalWrite(Led, HIGH); // on allume la LED
  }
  else { // sinon
    digitalWrite(Led, LOW); // on l'éteint
  }
}
