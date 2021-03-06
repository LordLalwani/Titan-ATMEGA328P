/*
 * File:   main.c
 * Author: Dee Lalwani
 *
 * Created on March 4, 2021, 11:51 PM
 */


#include <avr/io.h>
#include <util/delay.h>
#include "mcu-config.h"
#include "debug-helpers.h"

#define BUAD 9600
#define BRC ((F_CPU/16/BUAD)-1)


int main(void) {
    
    // Settings up USART
    UBRR0H = (BRC >> 8);
    UBRR0L = BRC;   
    
    UCSR0B = (1 << TXEN0);
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);

    while (1) {
        // Adds single data character to USART I/O data register
        // Once data is added here it automatically gets transmitted
        UDR0 = 'T';
        toggleLedOnPort(PORTC1);
    }
}
