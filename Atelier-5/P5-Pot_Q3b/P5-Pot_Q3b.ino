// Croquis P5-Pot_Q3b.ino

//----- CONSTANTES -----
#define Pot 0  // POTENTIOMETRE sur la ligne analogique 0 (A0)
#define Led 5  // LED sur la ligne E/S 5

//----- VARIABLE -----
int valPot;  // Variable du POTENTIOMETRE
int valCalc; // Valeur calculée
int valMap;  // Valeur donnée par map

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  Serial.begin(9600);  // Vitesse communication
  pinMode(Led, OUTPUT); // Ligne en sortie
}
//----- BOUCLE PRINCIPALE -----
void loop(){
  valPot = analogRead(Pot); // Lecture du POT.
  valCalc = float(valPot) * 3000 / 1023; //conversion
  valMap = map(valPot, 0, 1023, 0, 3000);
  // Affichage sur le moniteur série
  Serial.print("Valeur du potentiomètre : ");
  Serial.println(valPot);
  Serial.print("calcul et map : ");
  Serial.print(valCalc);
  Serial.print("\t\t"); // 2 tabulations
  Serial.println(valMap);
  delay(1000);
 }
