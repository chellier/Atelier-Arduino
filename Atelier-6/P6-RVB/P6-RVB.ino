// Croquis P6-RVB.ino
//----- CONSTANTES -----
#define Rouge 11 // Couleur ROUGE sur la ligne d'E/S 11
#define Vert 10  // Couleur VERTE sur la ligne d'E/S 10
#define Bleu 9   // Couleur BLEUE sur la ligne d'E/S 9

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  pinMode(Rouge, OUTPUT); // Ligne de la LED ROUGE en sortie
  pinMode(Vert, OUTPUT);  // Ligne de la LED VERTE en sortie
  pinMode(Bleu, OUTPUT);  // Ligne de la LED BLEUE en sortie
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  couleursPrincipales();
}
//----- PROCEDURE SUPPLEMENTAIRE -----
void couleursPrincipales(){
  // Eteint
  digitalWrite(Rouge, LOW);
  digitalWrite(Vert, LOW);
  digitalWrite(Bleu, LOW);
  delay(1000);
  // Rouge
  digitalWrite(Rouge, HIGH);
  digitalWrite(Vert, LOW);
  digitalWrite(Bleu, LOW);
  delay(1000);
  // Vert
  digitalWrite(Rouge, LOW);
  digitalWrite(Vert, HIGH);
  digitalWrite(Bleu, LOW);
  delay(1000);
  // Bleu
  digitalWrite(Rouge, LOW);
  digitalWrite(Vert, LOW);
  digitalWrite(Bleu, HIGH);
  delay(1000);
  // Jaune
  digitalWrite(Rouge, HIGH);
  digitalWrite(Vert, HIGH);
  digitalWrite(Bleu, LOW);
  delay(1000);
  // Cyan
  digitalWrite(Rouge, LOW);
  digitalWrite(Vert, HIGH);
  digitalWrite(Bleu, HIGH);
  delay(1000);
  // Magenta
  digitalWrite(Rouge, HIGH);
  digitalWrite(Vert, LOW);
  digitalWrite(Bleu, HIGH);
  delay(1000);
  // Blanc
  digitalWrite(Rouge, HIGH);
  digitalWrite(Vert, HIGH);
  digitalWrite(Bleu, HIGH);
  delay(1000);
}

