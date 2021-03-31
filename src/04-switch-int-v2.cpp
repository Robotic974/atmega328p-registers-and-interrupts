/**
 * --------------------------------------------------------------------------------
 * Atelier de programmation Robotic 974
 * © 2021 Stéphane Calderoni
 * --------------------------------------------------------------------------------
 * Registres internes et interruptions de l'ATmega328P
 * --------------------------------------------------------------------------------
 * Commande d'une LED à l'aide d'un bouton par interruption
 * Usage du vecteur d'interruption INT1
 * --------------------------------------------------------------------------------
 * Brochage de la carte
 * 
 * PIN | PORT | Composant
 * ----+------+----------
 * D12 | PB4  | LED
 * ----+------+----------
 * D3  | PD3  | Bouton poussoir monté en pull-down (10 kΩ)
 * --------------------------------------------------------------------------------
 */

#include <Arduino.h>

/**
 * @brief Routine du vecteur d'interruption INT1
 */
ISR(INT1_vect) {

    PORTB ^= 1 << PB4; // Bascule du bit PB4

}

/**
 * @brief Initialisation
 */
void setup() {

    DDRB  |= 1 << PB4;                    // Configuration de la broche de commande de la LED
    DDRD  &= ~(1 << PD3);                 // Configuration de la broche de lecture du bouton
    EICRA  = (1 << ISC11) | (1 << ISC10); // Configuration du vecteur d'interruption INT1 (RISING)
    EIMSK  = 1 << INT1;                   // Armement du vecteur d'interruption INT1
    SREG  |= 1 << SREG_I;                 // Activation des interruptions

    // Ce qui équivaut à :
    // DDRB  |=  0x10;
    // DDRD  &= ~0x08;
    // EICRA  =  0x0c;
    // EIMSK  =  0x02;
    // SREG  |=  0x80;

}

/**
 * @brief Boucle de contrôle principale
 */
void loop() {}