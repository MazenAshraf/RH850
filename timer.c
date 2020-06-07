/*
 * timer.c
 *
 *  Created on: Jun 8, 2020
 *      Author: Dell
 */
#include"common_macros.h"
#include"RH850.h"
#include"timer.h"
#include"std_types.h"
/*****************************************************************************
** Function:    Register_Defined
** Description: Initializes the Registers addresses
** Parameter:   None
** Return:      None
******************************************************************************/
void Register_Defined (void)
{
	OSTM0CMP = 0xFFEC0000;     //Compare Register in Time Interval we will put the initial value
	OSTM0CNT = 0xFFEC0004;     //This register indicates the counter value of the timer.
	OSTM0TO =  0xFFEC0008;     //register specfies & reads level of OSTMnTTOUT
	OSTM0TOE = 0xFFEC000C;    //Register specfies OSTMnTTOUT outmode (Software ctrl/Togglef)

	OSTM0TE = 0xFFEC0010;     /* Indicates whether the counter is enabled or disabled: */
	OSTM0TS = 0xFFEC0014;     //This register starts the counter.
	OSTM0TT = 0xFFEC0018;     //This register stops the counter.
	OSTM0CTL = 0xFFEC0020;    /*This register specifies the operating mode for the counter and controls the generation of
	                            OSTMnT interrupt requests when counting start*/
}

/*****************************************************************************
** Function:    Timer_init
** Description: Set OSTMnTs to initiate the OS timer
** Parameter:   None
** Return:      None
******************************************************************************/
uint8 Initial_Value;
uint8 Timer_init(void)
{
	SET_BIT(Start_Timer,0);

}
uint8 Timer_stop(void)
{
	SET_BIT(Stop_Timer,0);
}
uint8 Set_Value(void)
{
	Initial_Value = 0xFFFFFFFF;
}
uint8 Interrupt_Type(void)
{
	SET_BIT(Int_Operation_Types,0);
}
uint8 Counter_Mode(void)
{
	SET_BIT(Int_Operation_Types,1);

}


