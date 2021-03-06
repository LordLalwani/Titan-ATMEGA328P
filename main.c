/*
 * File:   main.c
 * Author: Dee Lalwani
 *
 * Created on March 4, 2021, 11:51 PM
 */


#include <avr/io.h>
#include <util/delay.h>
#include "src/header-files/debug-helpers.h"
#include "src/header-files/communication.h"

int main(void) {
    USART_init();

    while (1) {
        transmitChar(1);
//        char i = receiveChar();
//        if (i == 1) {
//            toggleLedOnPortC(PORTC4);
//        }
    }
}
