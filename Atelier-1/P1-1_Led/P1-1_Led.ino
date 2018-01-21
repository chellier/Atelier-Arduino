// Croquis P1−1_Led.ino

//----- CONSTANTE -----
#define Led 5     // LED raccordée à la ligne d'E/S 5

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  pinMode(Led, OUTPUT);   // Ligne de la LED en sortie     
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  digitalWrite(Led, HIGH); // LED allumée
  delay(1000);             // Attente d'une seconde
  digitalWrite(Led, LOW);  // LED éteinte
  delay(1000);             // Attente d'une seconde
}
