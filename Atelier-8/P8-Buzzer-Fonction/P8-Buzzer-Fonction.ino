// Croquis P8-Buzzer-Fonction.ino

//----- CONSTANTES --------------------------------------------
#define Buzzer 3    // BUZZER raccordé à la ligne d'E/S 3
//----- VARIABLES ---------------------------------------------
int duree = 500;    // durée des notes
int pause = duree * 1.30;   // Pause entre les notes (30 % de plus que la durée des notes)
char gamme[] = "cdefgabC";  // la gamme
//--------------- PROCEDURE D'INITIALISATION ------------------
void setup() {
  pinMode(Buzzer, OUTPUT);   // Ligne Buzzer en sortie     
}
//--------------- BOUCLE PRINCIPALE ---------------------------
void loop(){
  for (int i = 0; i < sizeof(gamme)-1; i++){
    tone(Buzzer, donneFrequence(gamme[i]), duree);
    delay(pause);
  }
  delay(1000);
}

//--------------- DEFINITION DE LA FONCTION -------------------
int donneFrequence(char note) { // on recherche la fréquence de "note"
  char noms[] = {'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' }; // nom des notes
  int frequences[] = {262, 294, 330, 349, 392, 440, 494, 523}; // fréquences associées
  
  // Recherche de la fréquence associée à "note"
  for (int i = 0; i < 8; i++) { // 8 car il y a 8 notes
    if (noms[i] == note) { // on parcourt les noms jusqu'à trouver "note"
      return(frequences[i]); // on a trouvé, on retourne la fréquence
    }
  }
}

