// Croquis P5-Pot_Q2.ino

//----- CONSTANTES -----
#define Pot 0  // POTENTIOMETRE sur la ligne analogique 0 (A0)
#define Led 5  // LED sur la ligne E/S 5

//----- VARIABLE -----
int valPot;  // Variable du POTENTIOMETRE

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  Serial.begin(9600);  // Vitesse communication
  pinMode(Led, OUTPUT); // Ligne de la LED en sortie
}
//----- BOUCLE PRINCIPALE -----
void loop(){
  valPot = analogRead(Pot); // Lecture du POT.
  // Affichage sur le moniteur série
  Serial.print("Valeur du potentiomètre : ");
  Serial.println(valPot);
  if (valPot >= 767) { // Si la valeur est supérieure ou égale à 767 (3/4 de 1023) 
  digitalWrite(Led, HIGH); // LED allumée
  }
  else { // Sinon
  digitalWrite(Led, LOW); // LED éteinte
  }
 }
