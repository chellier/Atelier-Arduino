// Croquis P5-Pot.ino

//----- CONSTANTES -----
#define Pot 0  // POTENTIOMETRE sur la ligne analogique 0 (A0)
#define Led 5  // LED sur la ligne E/S 5

//----- VARIABLE -----
int valPot;  // Variable du POTENTIOMETRE

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  Serial.begin(9600);  // Vitesse communication
  pinMode(Led, OUTPUT); // Ligne en sortie
}
//----- BOUCLE PRINCIPALE -----
void loop(){
  valPot = analogRead(Pot); // Lecture du POT.
  // Affichage sur le moniteur série
  Serial.print("Valeur du potentiomètre : ");
  Serial.println(valPot);
 }
