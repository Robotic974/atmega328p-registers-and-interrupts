/**
 * --------------------------------------------------------------------------------
 * Atelier de programmation Robotic 974
 * © 2021 Stéphane Calderoni
 * --------------------------------------------------------------------------------
 * Registres internes et interruptions de l'ATmega328P
 * --------------------------------------------------------------------------------
 * Commande d'une LED à l'aide d'un bouton poussoir
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
 * @brief Initialisation
 * 
 * @note On cherche ici à reproduire l'équivalent de :
 * 
 *       pinMode(12, OUTPUT);
 *       pinMode( 3, INPUT);
 */
void setup() {

    DDRB |=   1 << PB4;
    DDRD &= ~(1 << PD3);

    // Ce qui équivaut à :
    // DDRB |=  0x10;
    // DDRD &= ~0x08;
    
}

/**
 * @brief Boucle de contrôle principale
 * 
 * @note On cherche ici à reproduire l'équivalent de :
 * 
 *       digitalWrite(12, digitalRead(3));
 */
void loop() {

    PORTB = (PORTB & ~(1 << PB4)) | ((PIND >> PD3) & 0x1) << PB4;
    
}