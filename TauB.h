/*
 * TauB.h
 *
 *  Created on: Jun 13, 2020
 *      Author: User
 */

#ifndef TAUB_H_
#define TAUB_H_
#define TAUB0I0 0xFFC30000 //Base address TAUB0
#define TAUB0TS 0xFFE31C4 /* this register is for enabling counter base address of TAUB0 added 1C4 offset in hexa*/

/*enabling TAUB0TS by 1: Enables the counter and sets TAUBnTE.TAUBnTEm = 1.
TAUBnTE.TAUBnTEm = 1 only enables counter*/

#define INTTAUB0I0 0xFFC30044 //0XFFC30000 added 44 offset from table

#endif /* TAUB_H_ */
