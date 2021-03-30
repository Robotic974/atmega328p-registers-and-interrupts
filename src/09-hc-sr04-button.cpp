/**
 * --------------------------------------------------------------------------------
 * Registres internes et interruptions de l'ATmega328P
 * --------------------------------------------------------------------------------
 * Mesures de distances avec le capteur ultrasonique HC-SR04
 * Commande de mesure à l'aide d'un bouton poussoir
 * Usage des vecteurs d'interruption INT0 et INT1
 * --------------------------------------------------------------------------------
 * Interprétation des données mesurées par le capteur HC-SR04 en fonction de la
 * température ambiante à l'aide d'un utilitaire en ligne :
 * @see https://robotic974.m1cr0lab.com/ultrasonic-sensor/
 * --------------------------------------------------------------------------------
 * Brochage de la carte
 * 
 * PIN | PORT | Composant
 * ----+------+----------
 * D4  | PD4  | HC-SR04 TRIG
 * D3  | PD3  | Bouton poussoir monté en pull-down (10 kΩ)
 * D2  | PD2  | HC-SR04 ECHO
 * --------------------------------------------------------------------------------
 */

#include <Arduino.h>

/**
 * @brief Initialisation
 */
void setup() {
    
}

/**
 * @brief Boucle de contrôle principale
 */
void loop() {
    
}