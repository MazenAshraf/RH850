#include <stdio.h>
#include"std_types.h"
#include"common_macros.h"
#include"timer.h"
#include"Interrupt.h"
void main(void)
{
	Timer_init();  //to initiate timer
	Set_Value();
	Counter_Mode(); //Interval Timer Mode
	Interrupt_Type(); //INT when counting starts are enabled
	if(Initial_Value == 0x00000000)
	{
		Timer_stop();
		Level_Of_Output();
		Mode_Of_OSTMnTTOUT();
	}

	while(1)
	{



	}
}
