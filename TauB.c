/*
 * TauB.c
 *
 *  Created on: Jun 8, 2020
 *      Author: Aya
 */

#include "TauB.h"
#include "Common_Macros.h"
#include "std_types.h"
/*****************************************************************************
** Function:    Register_Defined
** Description: Initializes the Registers addresses
** Parameter:   None
** Return:      None
******************************************************************************/

void TAUB_init(void)
{
  /*Tau prescalar setup */
  TAUB0TPS = 0xFFF4u;     /* Set the TAUB0 prescalar CK0=PCLK/16 */

  /*setting Counter Mode*/
  TAUB0CMOR0 = 0x0001u;      /*specifies the counter operation mode to interval timer mode*/

  /*and by setting TAUB0CMOR0.TAUB0MD0 Bit =1 means Specifies that INTTAUB0Im is output at the
beginning of count operation (when a start
trigger is entered)*/

  /*setting rising edge detection*/
  TAUB0CMUR0 = 0x01u;

  /*enabling counter*/
  SET_BIT(TAUB0TS,0);     /*setting bit by 1: Enables the counter and sets TAUBnTE.TAUBnTEm = 1 */
}













}
