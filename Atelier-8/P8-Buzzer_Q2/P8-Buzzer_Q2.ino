// Croquis P8-Buzzer_Q2.ino

//----- CONSTANTES --------------------------------------------
#define Buzzer 3    // BUZZER raccordé à la ligne d'E/S 3
#define Pot 0 // Potentiomètre sur ligne analogique 0 (A0)

//----- VARIABLES ---------------------------------------------
int valPot;
int duree = 100;    // durée des notes

//--------------- PROCEDURE D'INITIALISATION ------------------
void setup() {
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);   // Ligne Buzzer en sortie     
}

//--------------- BOUCLE PRINCIPALE ---------------------------
void loop(){
  valPot = analogRead(Pot); // Lecture du potentiomètre
  Serial.print("Valeur du potentiomètre : ");
  Serial.println(valPot);
  Serial.println();
  tone(Buzzer, valPot, duree);
}


