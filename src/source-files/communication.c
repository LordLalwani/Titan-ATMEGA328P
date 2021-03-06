/*
 * File:   communication.c
 * Author: Dee Lalwani
 *
 * Created on March 4, 2021, 11:51 PM
 */

#include "../header-files/communication.h"
#include <avr/io.h>
#include "../header-files/mcu-config.h"
#include "../header-files/debug-helpers.h"
#include <avr/interrupt.h>


#define BUAD 115200
#define BRC ((F_CPU/16/BUAD)-1)

void USART_init(void) {
    //Set baud rate */
    UBRR0H = (unsigned char) (BRC >> 8);
    UBRR0L = (unsigned char) BRC;
    // Enable receiver and transmitter
    UCSR0B = (1 << RXEN0) | (1 << TXEN0);
    /* Set frame format: 8data, 2stop bit */
    UCSR0C = (1 << USBS0) | (3 << UCSZ00);
}

unsigned char receiveChar(void) {
    /* Wait for data to be received */
    while (!(UCSR0A & (1 << RXC0)))
        ;
    /* Get and return received data from buffer */
    toggleLedOnPortC(PORTC2);
    return UDR0;
}

void transmitChar(unsigned char data) {
    /* Wait for empty transmit buffer */
    while (!(UCSR0A & (1 << UDRE0)))
        ;
    /* Put data into buffer, sends the data */
    UDR0 = data;

}
