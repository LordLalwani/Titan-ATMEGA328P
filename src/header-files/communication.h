/* 
 * File:   communication.h
 * Author: Dee Lalwani
 *
 * Created on March 6, 2021, 12:31 PM
 */

#ifndef COMMUNICATION_H
#define	COMMUNICATION_H

#ifdef	__cplusplus
extern "C" {
#endif

void USART_init(void);
unsigned char receiveChar( void );
void transmitChar( unsigned char data );

#ifdef	__cplusplus
}
#endif

#endif	/* COMMUNICATION_H */
