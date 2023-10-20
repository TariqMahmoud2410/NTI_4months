/*
 ============================================================================
 Name        : MyDriver.c
 Author      : Tariq Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "DIO_interface.h"
#include"BIT_MATH.h"
#include"STD_TYPES.h"

#include "avr/io.h" /* To use the IO Ports Registers */

	/*
	 * Check if the input number is greater than NUM_OF_PORTS value.
	 * In this case the input is not valid port number
	 */
void DIO_setupPortDirection(u8 port_num, direction){
	if(port_num >= 4)
	{
		/* Do Nothing */
	}
	else
	{
		/* Setup the port direction as required */
		switch(port_num)
		{
		case 0:
			DDRA = direction;
			break;
		case 1:
			DDRB = direction;
			break;
		case 2:
			DDRC = direction;
			break;
		case 3:
			DDRD = direction;
			break;
		}
	}
}
