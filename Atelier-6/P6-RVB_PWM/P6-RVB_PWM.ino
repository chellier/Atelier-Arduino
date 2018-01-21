// Croquis P6-RVB_PWM.ino

//----- CONSTANTES -----
#define Rouge 11 // Couleur ROUGE sur la ligne d'E/S 11
#define Vert 10  // Couleur VERTE sur la ligne d'E/S 10
#define Bleu 9   // Couleur BLEUE sur la ligne d'E/S 9

//----- PROCEDURE D'INITIALISATION -----
void setup() {
  pinMode(Rouge, OUTPUT); // Ligne de la LED ROUGE en sortie
  pinMode(Vert, OUTPUT);  // Ligne de la LED VERTE en sortie
  pinMode(Bleu, OUTPUT);  // Ligne de la LED BLEUE en sortie
}

//----- BOUCLE PRINCIPALE -----
void loop(){
  showSpectrum();
}

//----- PROCEDURES SUPPLEMENTAIRES -----
void showSpectrum(){  // donne le numéro de la couleur pour la procédure showRGB
  int x;
  for (x = 0; x < 768; x++){
    showRGB(x);  // appel de la procédure showRGB avec une valeur allant de 0 à 767
    delay(20);   // délai de 20 ms
  }
}

void showRGB(int color){ // donne une certaine couleur à la LED en utilisant un numéro de couleur
  int redIntensity;  // Trois variables pour l'intensité du rouge, du vert et du bleu
  int greenIntensity;
  int blueIntensity;
  if (color <= 255){      // zone 1         color est le numéro de la couleur
    redIntensity = 255 - color; // Rouge va de allumé à éteint
    greenIntensity = color;     // Vert va de éteint à allumé
    blueIntensity = 0;          // Bleu est toujours éteint
  }
  else if (color <= 511){     // zone 2
    redIntensity = 0;                     // Rouge est toujours éteint
    greenIntensity = 255 - (color - 256); // Vert va de allumé à éteint
    blueIntensity = (color - 256);        // Bleu va de éteint à allumé
  }
  else { // color >= 512{       // zone 3
    redIntensity = (color - 512);       // Rouge va de éteint à allumé
    greenIntensity = 0;                 // Vert est toujours éteint
    blueIntensity = 255 - (color - 512);// Bleu va de allumé à éteint
  }
  analogWrite(Rouge, redIntensity);   // Réglage des broches PWM
  analogWrite(Vert, greenIntensity);
  analogWrite(Bleu, blueIntensity);
}
