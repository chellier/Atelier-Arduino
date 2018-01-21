// Croquis P5-Pot_Q3c.ino

//----- CONSTANTES -----
#define Pot 0  // POTENTIOMETRE sur la ligne analogique 0 (A0)
#define Led 5  // LED sur la ligne E/S 5
#define Bouton 7 // BOUTON sur la ligne E/S 7

//----- VARIABLE -----
int valPot;  // Variable du POTENTIOMETRE
int valTemp; // Durée de temporisation
int Etat = 0; // Etat du BOUTON

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  Serial.begin(9600);  // Vitesse communication
  pinMode(Led, OUTPUT); // Ligne de la LED en sortie
  pinMode(Bouton, INPUT); // Ligne du BOUTON en entrée
  digitalWrite(Led, HIGH); // LED allumée
}
//----- BOUCLE PRINCIPALE -----
// APPUYER SUR LE BOUTON RESET POUR REINITIALISER
void loop(){
  valPot = analogRead(Pot); // Lecture du POT.
  valTemp = map(valPot, 0, 1023, 0, 3000); // durée de temporisation
  // Affichage sur le moniteur série
//  Serial.print("Valeur du potentiomètre : ");
//  Serial.println(valPot);
  Serial.print("Temps de temporisation : ");
  Serial.print(valTemp);
  Serial.println(" millisecondes");
  Etat = digitalRead(Bouton);
  if (Etat == LOW) { // Si le bouton est appuyé
    delay(valTemp); // On attend...
    digitalWrite(Led, LOW); // LED éteinte au bout de la durée voulue
  }
 }
