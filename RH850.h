/*
 * RH850.h
 *
 *  Created on: Jun 6, 2020
 *      Author: Dell
 */

#ifndef RH850_H_
#define RH850_H_

void Timer(void);

//INTC1EIC0  = 0xFFFEEA00; //EI level interrupt control register base address

//OSTM0 =*( 0xFFEC0000);
//OSTM1 = 0xFFEC1000;
OSTM0CMP = 0xFFEC0000; //Compare Register in Time Interval we will put the initial value
OSTM0CNT = 0xFFEC0004; //This register indicates the counter value of the timer.
OSTM0TO =  0xFFEC0008; //register specfies & reads level of OSTMnTTOUT
//OSTM0CTL.OSTM0MD1 = 0x0000 0000;  //direction is counting up in compare mode ???????
OSTM0TOE = 0xFFEC000C; //Register specfies OSTMnTTOUT outmode (Software ctrl/Togglef)
OSTM0TE = 0xFFEC0010;  /* Indicates whether the counter is enabled or disabled:
                          0: Counter disabled
                          1: Counter enabled */
                       /* restarts counting down from the value in the OSTMnCMP register if it is in interval timer mode or
                           restarts counting up from the counter value 0000 0000H if it is in free-run compare mode. */

OSTM0TS = 0xFFEC0014; //This register starts the counter.
OSTM0TT = 0xFFEC0018; //This register stops the counter.
                      /*Stops the counter:
                        0: This setting is invalid.
                        1: Stops the counter and clears the OSTMnTE.OSTMnTE bit.
                      */
OSTM0CTL = 0xFFEC0020;  /*This register specifies the operating mode for the counter and controls the generation of OSTMnTINT
                          interrupt requests when counting starts.
                          Although this register is readable and writable, writing to it is only possible when
                          OSTMnTE.OSTMnTE = 0; that is, the register becomes read only when OSTMnTE.OSTMnTE = 1.
                         */






#endif /* RH850_H_ */
