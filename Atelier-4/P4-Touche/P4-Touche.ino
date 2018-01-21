// Croquis P4-Touche.ino

//----- CONSTANTES -----
#define Touche 7  // TOUCHE raccordée à la ligne d'E/S 7

//----- VARIABLES -----
int Etat = 0;    // Etat logique de la TOUCHE

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  Serial.begin(9600);  // Vitesse de communication (port série)
  pinMode(Touche, INPUT); // Ligne de la TOUCHE en entrée     
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  Etat = digitalRead(Touche);  // Lecture de l'état de la TOUCHE
  Serial.print("Etat de la touche : "); // Affichage sur le moniteur série
  Serial.println(Etat);
}
