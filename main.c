/*
 * main.c
 *
 *  Created on: Jun 1, 2020
 *      Author: hp
 */
#include <stdio.h>
#include "RH850.h"
#include "common_macros.h"
#include "std_types.h"

int main(void)
{
	CLEAR_BIT(EIC17,15);
	SET_BIT(EIC17,12);
	SET_BIT(EIC17,7);
	SET_BIT(IMR0,17);
//	SET_BIT(FCLAnCTLm,0);
//	EICT0|=(1<<EICT0);

}

void print (void)
{
	printf("ISR IS EXECUTED\n");
}
