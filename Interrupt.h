/*
 * Interrupt.h
 *
 *  Created on: Jun 7, 2020
 *      Author: hp
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

/*****************************Functions decelerations***************************************************/

static void interrupt_init (void);

/*****************************Registers and variables decelerations***************************************************/

/********************************************************************************
 * N is the number of interrupt it ranges from 0 to 255
 ********************************************************************************/

#define n 0

/********************************************************************************
 * M is the number of interrupt channel it ranges from 0 to 255
 ********************************************************************************/

#define m 0

/*******************************************************************************
 * BIT:15
 * Interrupt Channel Type
 * The following values are read according to the interrupt input interface. This is a
 * read-only bit.
 *0: Synchronous edge detection
 *1: High-level detection
****************************************************************************** */

/*******************************************************************************
 *  BIT:12
 *Interrupt Request Flag
 *Operation varies with the interrupt input interface.
 *0: No interrupt request (Initial value)
 *1: Interrupt request present
 * Synchronous edge detection
 *This flag is automatically cleared to 0 when an interrupt request of the self channel
 *is accepted by the CPU core.
 *This bit can be set or cleared by the software.
 * High level detection
 *This bit cannot be set or cleared by the software. This is a read-only bit.
 *******************************************************************************/

/*******************************************************************************
 *  BIT:7
 *Interrupt Mask
 *While this bit is set to 1, interrupt requests set in the interrupt request flag
 *(EIRFn) are masked to inhibit interrupt requests from the channel to the CPU
 *core. Notification of presence of unprocessed interrupts is not made and the
 *PMF bit in ICSR is not set from channels for which this bit is set to 1. Even when
 *interrupt processing is disabled by the setting of this bit, an input of interrupt
 *signal is not masked and the interrupt request flag is set. Setting this bit is also
 *reflected in the setting of corresponding bit of the interrupt mask register (IMR).
 *0: Interrupt processing is enabled.
 *1: Interrupt processing is disabled. (Initial value)
 *******************************************************************************/

/*******************************************************************************
 *  BIT:6
 *Interrupt Vector Method Select
 *0: Direct branching method based on priority
 *1: Table referencing method
 *******************************************************************************/

/*******************************************************************************
 *BIT:0-3
 *These bits specify 16 interrupt priority levels (0: highest priority, 15: lowest
 *priority).
 *If two or more EI level interrupt requests are generated simultaneously, a source
 *with higher priority specified by these bits is selected and is sent to the CPU
 *core. If the priority specified by these bits is equal, a source of smaller channel
 *number is selected as fixed priority.
 *
 *******************************************************************************/

/***************************************EIC Register****************************************
 *
 * These registers are aggregation of the EIMK bit in the EIC register. Setting of the corresponding EIMK
 *bit is reflected in each bit in the IMRn register. Furthermore, setting of the IMRn register is reflected in
 *the corresponding EIMK bit.
 *
 *************************************EI level interrupt control register*******************************************/
#define EIC0 0xFFFEEA00
#define EIC1 0xFFFEEA02
#define EIC2 0xFFFEEA04
#define EIC3 0xFFFEEA06
#define EIC4 0xFFFEEA08
#define EIC5 0xFFFEEA0A
#define EIC6 0xFFFEEA0C
#define EIC7 0xFFFEEA0E
#define EIC8 0xFFFEEA10
#define EIC9 0xFFFEEA12
#define EIC10 0xFFFEEA14
#define EIC11 0xFFFEEA16
#define EIC12 0xFFFEEA18
#define EIC13 0xFFFEEA1A
#define EIC14 0xFFFEEA1C
#define EIC15 0xFFFEEA1E
#define EIC16 0xFFFEEA20
#define EIC17 0xFFFEEA22 //0xFFFEA00 and we added (17*2) offset which equals 0x22
#define EIC18 0xFFFEEA24
#define EIC19 0xFFFEEA26
#define EIC20 0xFFFEEA28
#define EIC21 0xFFFEEA2A
#define EIC22 0xFFFEEA2C
#define EIC23 0xFFFEEA2E
#define EIC24 0xFFFEEA30
#define EIC25 0xFFFEEA32
#define EIC26 0xFFFEEA34
#define EIC27 0xFFFEEA36
#define EIC28 0xFFFEEA38
#define EIC29 0xFFFEEA3A
#define EIC30 0xFFFEEA3C
#define EIC31 0xFFFEEA3E

/***********************************EI Level interrupt mask register***************************************/

#define IMR0 0xFFFEEAF0 //EI Level interrupt mask register
#define IMR1 0xFFFFB404
#define IMR2 0xFFFFB408
#define IMR3 0xFFFFBA0C
#define IMR4 0xFFFFBA10
#define IMR5 0xFFFFBA14
#define IMR6 0xFFFFBA18
#define IMR7 0xFFFFB41C

/***********************************Filter Control Register***************************************/

#define FCLA0CTL0 0xFFC34000
#define FCLA0CTL1 0xFFC34004  	//INTP0
#define FCLA0CTL2 0xFFC34008	//INTP1
#define FCLA0CTL3 0xFFC3400C	//INTP2
#define FCLA0CTL4 0xFFC34010	//INTP3
#define FCLA0CTL5 0xFFC34014	//INTP4
#define FCLA0CTL6 0xFFC34018	//INTP5
#define FCLA0CTL7 0xFFC3401C	//INTP6
#define FCLA1CTL0 0xFFC34100	//INTP7
#define FCLA1CTL1 0xFFC34014	//INTP8
#define FCLA1CTL2 0xFFC34018	//INTP9
#define FCLA1CTL3 0xFFC3401C	//INTP10



#endif /* INTERRUPT_H_ */
