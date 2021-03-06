/*
 * File:   communication.c
 * Author: Dee Lalwani
 *
 * Created on March 4, 2021, 11:51 PM
 */

#include "../header-files/debug-helpers.h"
#include <avr/io.h>
#include <util/delay.h>

void toggleLedOnPortC(int port) {

#define LED_BIT_LOCATION  port
#define LED_BIT_MASK (1 << LED_BIT_LOCATION)

    // Data direction register for LED
    DDRC = LED_BIT_MASK;
    PORTC = 0;
    _delay_ms(250);
    PORTC = LED_BIT_MASK;
    _delay_ms(250);
    PORTC = 0;
}
