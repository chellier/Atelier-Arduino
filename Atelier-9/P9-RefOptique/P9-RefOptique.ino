// Croquis P9-RefOptique.ino

//----- CONSTANTES --------------------------------------------
#define tcrt 1      // TCRT5000 raccordé à la ligne analogique 1
#define led 6       // LED raccordé à la ligne d'E/S 6

//----- VARIABLES ---------------------------------------------
int valTCRT = 0;    // valeur lue du TCRT
int etatLed = LOW;  // État de la LED (éteinte)
int ecart;          // Différence de valeur lue du TCRT

//--------------- PROCEDURE D'INITIALISATION ------------------
void setup() {
  pinMode(led, OUTPUT);
}

//--------------- BOUCLE PRINCIPALE ---------------------------
void loop(){
  valTCRT = analogRead(tcrt);  // Lecture du TCRT
  delay(10);
  ecart = valTCRT - analogRead(tcrt); // Différence de valeur lue
  if (ecart > 10 || ecart < -10) {  // si écart suffisant...
    etatLed = !etatLed; // ... on change l'état de la LED
    digitalWrite(led, etatLed); // On met la LED dans l'état souhaité
    delay(500); // pour avoir le temps d'enlever la main...
  }
}
