/**
 * --------------------------------------------------------------------------------
 * Atelier de programmation Robotic 974
 * © 2021 Stéphane Calderoni
 * --------------------------------------------------------------------------------
 * Registres internes et interruptions de l'ATmega328P
 * --------------------------------------------------------------------------------
 * Clignotement d'une simple LED 
 * --------------------------------------------------------------------------------
 * Brochage de la carte
 * 
 * PIN | PORT | Composant
 * ----+------+----------
 * D12 | PB4  | LED
 * --------------------------------------------------------------------------------
 */

#include <Arduino.h>

/**
 * @brief Initialisation
 * 
 * @note On cherche ici à reproduire l'équivalent de :
 * 
 *       pinMode(12, OUTPUT);
 */
void setup() {

    DDRB |= 1 << PB4;

    // Les instructions suivantes sont équivalentes :
    // DDRB |= 0b10000;
    // DDRB |= 0x10;
    // DDRB |= 16;
    
}

/**
 * @brief Boucle de contrôle principale
 * 
 * @note On cherche ici à reproduire l'équivalent de :
 * 
 *       digitalWrite(12, millis() % 1024 < 512);
 */
void loop() {

    PORTB = (PORTB & ~(1 << PB4)) | (((millis() >> 9) & 0x1) << PB4);
    
}