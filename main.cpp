/* 
 * File:   main.cpp
 * Author: s121003
 *
 * Created on March 2, 2021, 9:01 PM
 */

#include <stdlib.h>
#include <avr/io.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    DDRB = 1;
    while(1) {
        PORTB = 1; 
    } 
}

