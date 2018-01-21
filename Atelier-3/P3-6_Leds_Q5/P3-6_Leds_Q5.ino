// Croquis P3-6_Leds_Q4.ino

//----- CONSTANTES -----
int Led[] = {3,5,7,9,11,13};

//----- VARIABLES -----
int tempsLed = 1000; // Temps d'attente

//----- PROCEDURE D'INITIALISATION -----
void setup() { // Toutes les lignes en sortie
for (int indice = 0 ; indice <= 5 ; indice++) {
  pinMode(Led[indice], OUTPUT);
}
}

//----- BOUCLE PRINCIPALE -----
void loop(){
for (int indice = 0 ; indice <= 4 ; indice=indice+2) {
  digitalWrite(Led[indice], HIGH); // LED indice allumée
  digitalWrite(Led[indice+1], HIGH); // LED indice+3 allumée
  delay(tempsLed); // Attente de tempsLed millisecondes
  digitalWrite(Led[indice], LOW);  // LED indice éteinte
  digitalWrite(Led[indice+1], LOW); // LED indice+3 éteinte
}
}

