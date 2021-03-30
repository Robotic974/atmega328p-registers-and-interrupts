/**
 * --------------------------------------------------------------------------------
 * Registres internes et interruptions de l'ATmega328P
 * --------------------------------------------------------------------------------
 * Affichage d'un compteur binaire sur 8 LEDs incrémenté par un bouton poussoir
 * Usage du vecteur d'interruption INT1
 * Neutralisation de l'effet rebond
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
 * D3  | PD3  | Bouton poussoir monté en pull-down (10 kΩ)
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