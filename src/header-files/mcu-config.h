/* 
 * File:   mcu-config.h
 * Author: Dee Lalwani
 *
 * Created on March 6, 2021, 12:11 PM
 */

#ifndef MCU_CONFIG_H
#define	MCU_CONFIG_H


#ifdef	__cplusplus
extern "C" {
#endif

// sets clock speed for libraries and internal code use
#define F_CPU 16000000UL
 
// Sets MCU configuration bits
FUSES = {
	.low = 0xF7, // LOW {SUT_CKSEL=EXTFSXTAL_16KCK_14CK_65MS, CKOUT=CLEAR, CKDIV8=CLEAR}
	.high = 0xD9, // HIGH {BOOTRST=CLEAR, BOOTSZ=2048W_3800, EESAVE=CLEAR, WDTON=CLEAR, SPIEN=SET, DWEN=CLEAR, RSTDISBL=CLEAR}
	.extended = 0xFF, // EXTENDED {BODLEVEL=DISABLED}
};
LOCKBITS = 0xFF; // {LB=NO_LOCK, BLB0=NO_LOCK, BLB1=NO_LOCK}


#ifdef	__cplusplus
}
#endif

#endif

