/**
 * --------------------------------------------------------------------------------
 * Atelier de programmation Robotic 974
 * © 2021 Stéphane Calderoni
 * --------------------------------------------------------------------------------
 * Registres internes et interruptions de l'ATmega328P
 * --------------------------------------------------------------------------------
 * Commande d'une LED à l'aide d'un bouton par interruption
 * Armement classique d'une interruption
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
 * @brief Routine d'interruption
 */
void toggle() {

    PORTB ^= 1 << PB4; // Bascule du bit PB4

}

/**
 * @brief Initialisation
 */
void setup() {

    DDRB |=   1 << PB4;
    DDRD &= ~(1 << PD3);

    attachInterrupt(digitalPinToInterrupt(3), toggle, RISING);
}

/**
 * @brief Boucle de contrôle principale
 */
void loop() {}