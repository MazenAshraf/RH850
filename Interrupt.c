/*
 * Interrupt.c
 *
 *  Created on: Jun 8, 2020
 *      Author: hp
 */

#include "interrupt.h"
#include "common_macros.h"
#include "std_types.h"

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

static void interrupt_init (void)
{
#if (n == 0 && m == 0)
	{
	/* Select an IRQ detecting method (rising edge, falling edge, and both edges) by setting the FCLAnCTLm register */

	FCLA0CTL0 |=(FCLA0CTL0<<0);
	FCLA0CTL0 &=(FCLA0CTL0<<1);
	FCLA0CTL0 &=(FCLA0CTL0<<2);


	/************************** FCLAnINTLm Description **************************
	 * bit2
		 * Falling edge detection control
			0: Falling edge detection disabled
			1: Falling edge detection enabled
	 ***********************************************************************/

	/************************** FCLAnINTFm Description **************************
	 * bit1
		* FCLAnINTLm Level detection control
			0: Level detection disabled
			1: Level detection enabled
		***********************************************************************/

	/************************** FCLAnINTRm Description **************************
	 * bit0
		*  Rising edge detection control
				0: Rising edge detection disabled
				1: Rising edge detection enabled
	 ***********************************************************************/

//add EIC0 register configuration after checking it

	}
#elif n==1
	{
		//TODO
	}
#else
	{
		//TODO
	}
#endif
}
