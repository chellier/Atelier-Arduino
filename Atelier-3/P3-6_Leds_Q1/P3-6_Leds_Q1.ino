// Croquis P3−6_Leds_Q1.ino

// −−−−− CONSTANTES −−−−−
int Led[] = {3,5,7,9,11,13};

// −−−−− VARIABLES −−−−−
int tempsLed = 500; // Temps d’attente

// −−−−− PROCEDURE D’INITIALISATION −−−−−
void setup() { // Toutes les lignes en sortie
  for (int indice = 0 ; indice <= 5 ; indice++) {
  pinMode(Led[indice], OUTPUT);
} // fin du for
} // fin de la procédure setup

// −−−−− BOUCLE PRINCIPALE −−−−−
void loop(){ // Allumage...
  digitalWrite(Led[0], HIGH); // LED 0 allumée
  delay(tempsLed);
  digitalWrite(Led[1], HIGH); // LED 1 allumée
  delay(tempsLed);
  digitalWrite(Led[2], HIGH); // LED 2 allumée
  delay(tempsLed);
  digitalWrite(Led[3], HIGH); // LED 3 allumée
  delay(tempsLed);
  digitalWrite(Led[4], HIGH); // LED 4 allumée
  delay(tempsLed);
  digitalWrite(Led[5], HIGH); // LED 5 allumée
  delay(tempsLed);
// Extinction...
for (int indice = 5 ; indice >= 0 ; indice--) {//ERREUR
  digitalWrite(Led[indice], LOW);
  delay(tempsLed);
} // fin du for
} // fin de la procédure loop
