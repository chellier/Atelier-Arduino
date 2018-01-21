// Croquis P6-Fondu.ino

//----- CONSTANTES -----
#define Pot 0  // POT. sur la ligne analogique 0 (A0)
#define Led 5  // LED sur la ligne E/S 5 (PWM)

//----- VARIABLE -----
int valPot; // Variable du POTENTIOMETRE
int largImp; // Variable de largeur d'impulsion (0 à 255)

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  Serial.begin(9600);  // Vitesse communication
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  valPot = analogRead(Pot); // Lecture du POT.
  largImp = map(valPot, 0, 1023, 0, 255); 
  analogWrite(Led, largImp); // Réglage de la largeur d'impulsion
  // Affichage sur le moniteur série
  Serial.print("Valeur de la largeur d'impulsion : ");
  Serial.println(largImp);
}
