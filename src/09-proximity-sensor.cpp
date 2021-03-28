/**
 * --------------------------------------------------------------------------------
 * Registres internes et interruptions de l'ATmega328P
 * --------------------------------------------------------------------------------
 * Détection de proximité avec le capteur ultrasonique HC-SR04
 * Restitution de la mesure par un affichage gradué sur une rampe de 8 LEDs
 * Usage du vecteur d'interruption INT0
 * --------------------------------------------------------------------------------
 * Interprétation des données mesurées par le capteur HC-SR04 en fonction de la
 * température ambiante à l'aide d'un utilitaire en ligne :
 * @see https://robotic974.m1cr0lab.com/ultrasonic-sensor/
 * --------------------------------------------------------------------------------
 * Brochage de la carte
 * 
 * PIN | PORT | Composant
 * ----+------+----------
 * D12 | PB4  | LED
 * D11 | PB3  | LED
 * D10 | PB2  | LED
 * D9  | PB1  | LED
 * D8  | PB0  | LED
 * ----+------+----------
 * D7  | PD7  | LED
 * D6  | PD6  | LED
 * D5  | PD5  | LED
 * D4  | PD4  | HC-SR04 TRIG
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