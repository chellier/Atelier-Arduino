// Croquis P4-Touche_Q1.ino

//----- CONSTANTES -----
#define Touche 7  // TOUCHE raccordée à la ligne d'E/S 7

//----- VARIABLES -----
int Etat = 0;    // Etat logique de la TOUCHE

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  Serial.begin(9600); // Vitesse de communication (port série)
  pinMode(Touche, INPUT); // Ligne de la TOUCHE en entrée
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  Etat = digitalRead(Touche);
  if (Etat == LOW) {
    Serial.println("Le bouton est appuyé");
  }
  else {
    Serial.println("Le bouton n'est pas appuyé");
  }
}
