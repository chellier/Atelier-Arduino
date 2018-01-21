// Croquis P8-Buzzer.ino

//----- CONSTANTES --------------------------------------------
#define Buzzer 3    // BUZZER raccordé à la ligne d'E/S 3
//----- VARIABLES ---------------------------------------------
int duree = 500;    // durée des notes
int pause = duree * 1.30;   // Pause entre les notes (30 % de plus que la durée des notes)
//--------------- PROCEDURE D'INITIALISATION ------------------
void setup() {
  pinMode(Buzzer, OUTPUT);   // Ligne Buzzer en sortie     
}
//--------------- BOUCLE PRINCIPALE ---------------------------
void loop(){
  tone(Buzzer, 262, duree);
  delay(pause);
  tone(Buzzer, 294, duree);
  delay(pause);
  tone(Buzzer, 330, duree);
  delay(pause);
  tone(Buzzer, 349, duree);
  delay(pause);
  tone(Buzzer, 392, duree);
  delay(pause);
  tone(Buzzer, 440, duree);
  delay(pause);
  tone(Buzzer, 494, duree);
  delay(pause);
  tone(Buzzer, 523, duree);
  delay(1000);
}
