// Croquis P2-3_Leds_Q2.ino

//----- CONSTANTES -----
#define Led0 5  // LED 0 sur la ligne d'E/S 5
#define Led1 11 // LED 1 sur la ligne d'E/S 11
#define Led2 13 // LED 2 sur la ligne d'E/S 13

//----- VARIABLES -----
int tempsLed = 500; // Temps d'attente
int tempsEteint = 200; // Temps d'attente pour l'extinction

//----- PROCEDURE D'INITIALISATION -----
void setup() { // Les 3 lignes en sortie
  pinMode(Led0, OUTPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  // Allumage...
  digitalWrite(Led0, HIGH); // LED 0 allumée
  delay(tempsLed); // Attente de tempsLed millisecondes
  digitalWrite(Led1, HIGH); // LED 1 allumée
  delay(tempsLed); 
  digitalWrite(Led2, HIGH); // LED 2 allumée
  delay(tempsLed); 
  // Extinction...
  digitalWrite(Led2, LOW);  // LED 2 éteinte
  delay(tempsEteint); // Attente de tempsEteint millisecondes
  digitalWrite(Led1, LOW);  // LED 1 éteinte
  delay(tempsEteint); 
  digitalWrite(Led0, LOW);  // LED 0 éteinte
  delay(tempsEteint); 
}
