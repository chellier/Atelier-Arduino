// Croquis P3-6_Leds_Q4.ino

//----- CONSTANTES -----
int Led[] = {3,5,7,9,11,13};

//----- VARIABLES -----
int tempsLed = 500; // Temps d'attente

//----- PROCEDURE D'INITIALISATION -----
void setup() { // Toutes les lignes en sortie
for (int indice = 0 ; indice <= 5 ; indice++) {
  pinMode(Led[indice], OUTPUT);
}
}

//----- BOUCLE PRINCIPALE -----
void loop(){
for (int indice = 0 ; indice <= 5 ; indice++) {
  digitalWrite(Led[indice], HIGH); // LED indice allumée
  delay(tempsLed); // Attente de tempsLed millisecondes
  digitalWrite(Led[indice], LOW);  // LED indice éteinte
}

for (int indice = 5 ; indice >= 0 ; indice--) {
  digitalWrite(Led[indice], HIGH); // LED indice allumée
  delay(tempsLed); // Attente de tempsLed millisecondes
  digitalWrite(Led[indice], LOW);  // LED indice éteinte
}
}
