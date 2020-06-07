/*
 * timer.h
 *
 *  Created on: Jun 6, 2020
 *      Author: Dell
 */
#ifndef TIMER_H_
#define TIMER_H_

#define Start_Timer OSTM0TS
#define Stop_Timer  OSTM0TT
#define Operation_Mode  OSTM0CTL
#define Initial_Value OSTM0CMP
#define Int_Operation_Types OSTM0CTL
#define Output_Level OSTM0TO
#define Output_Mode OSTM0TOE

uint8 Timer_init(void);
uint8 Timer_stop(void);
uint8 Interrupt_Type(void);
uint8 Counter_Mode(void);
uint8 Set_Value(void);
uint8 Level_Of_Output(void);
uint8 Mode_Of_OSTMnTTOUT(void);
void Register_Defined(void);




#endif /* TIMER_H_ */
