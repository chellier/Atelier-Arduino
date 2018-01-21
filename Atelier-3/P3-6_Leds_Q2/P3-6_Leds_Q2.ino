// Croquis P3−6_Leds_Q2.ino

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
for (int indice = 0 ; indice <= 5 ; indice++) {
  digitalWrite(Led[indice], HIGH); // LED indice allumée
  delay(tempsLed);
}
// Extinction...
for (int indice = 5 ; indice >= 0 ; indice--) { //ERREUR
  digitalWrite(Led[indice], LOW);
  delay(tempsLed);
} // fin du for
} // fin de la procédure loop
