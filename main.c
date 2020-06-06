#include <stdio.h>
#include"std_types.h"
#include"common_macros.h"
#include"RH850.h"
#include"timer.h"
//void change();
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

int main(void)
{
	while(1)
	{

	}
}
