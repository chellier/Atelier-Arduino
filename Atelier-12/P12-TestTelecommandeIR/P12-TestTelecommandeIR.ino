// Croquis P12-TestTelecommandeIR.ino
//----- AJOUT DE LIBRAIRIES ADDITIONNELLES --------------------
#include <IRremote.h>      // Librairie pour le capteur INFRAROUGE

//----- CONSTANTES --------------------------------------------
#define CAPTEURIR 10       // Capteur infra-rouge sur la ligne 10

//----- VARIABLES ---------------------------------------------

IRrecv ir_recv(CAPTEURIR); // Attente et lecture des informations sur le capteur
decode_results RESULTAT;   // Analyse et décodage du résultat

//--------------- PROCEDURE D'INITIALISATION --------------------
void setup() {
  Serial.begin(9600);      // Initialisation du moniteur de l'ordinateur à 9600 bauds
  ir_recv.enableIRIn();    // Initialisation de la gestion du capteur INFRAROUGE
  // Affichage du message de présentation sur le moniteur
  Serial.println("Test d'une TELECOMMANDE infrarouge quelconque");
  Serial.println("sur le moniteur de l'ordinateur.");
  Serial.println("Appuyez sur une touche de votre TELECOMMANDE ...");
}

//--------------- BOUCLE PRINCIPALE -----------------------------
void loop() {
  if (ir_recv.decode(&RESULTAT)) {  //Le programme se poursuit en cas de détection
    // Affichage de la valeur en hexadécimal
    Serial.print("Valeur : "); Serial.print(RESULTAT.value, HEX);
    delay(200); // Évite un rebond
    Serial.println(" ");
    ir_recv.resume();  // Prêt à recevoir de nouvelles informations
 }
 delay(1);
}
