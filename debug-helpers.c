/*
 * File:   communication.c
 * Author: Dee Lalwani
 *
 * Created on March 4, 2021, 11:51 PM
 */

#include "debug-helpers.h"
#include <avr/io.h>
#include <util/delay.h>

void toggleLedOnPort(int port) {

#define LED_BIT_LOCATION  port
#define LED_BIT_MASK (1 << LED_BIT_LOCATION)  

    // Data direction register for LED
    DDRC = LED_BIT_MASK;
    // toggles LED to signal working transmission
    PORTC = 0;
    _delay_ms(500);
    PORTC = LED_BIT_MASK;
    _delay_ms(500);
}
