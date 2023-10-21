/*
 * main.c
 *
 *  Created on: Oct 20, 2023
 *      Author: Tariq Mahmoud
 */


#include <util/delay.h>
#include "MCAL/DIO/DIO_interface.h"
#include"LIB/BIT_MATH.h"
#include"LIB/STD_TYPES.h"

int main(void)
{
	DIO_setupPinDirection(PORTA_ID,PIN4_ID,PIN_OUTPUT);
	DIO_setupPinDirection(PORTA_ID,PIN5_ID,PIN_OUTPUT);
	DIO_setupPinDirection(PORTA_ID,PIN6_ID,PIN_OUTPUT);
	DIO_setupPinDirection(PORTB_ID,PIN7_ID,PIN_OUTPUT);

	for(int i = 0; i<4; i++)
	{
		DIO_writePin(PORTA_ID,PIN5_ID,LOGIC_LOW);
		DIO_writePin(PORTA_ID,PIN6_ID,LOGIC_LOW);
		DIO_writePin(PORTB_ID,PIN7_ID,LOGIC_LOW);
		DIO_writePin(PORTA_ID,PIN4_ID,LOGIC_HIGH);
		_delay_ms(500);
		DIO_writePin(PORTA_ID,PIN5_ID,LOGIC_HIGH);
		DIO_writePin(PORTA_ID,PIN6_ID,LOGIC_LOW);
		DIO_writePin(PORTB_ID,PIN7_ID,LOGIC_LOW);
		DIO_writePin(PORTA_ID,PIN4_ID,LOGIC_LOW);
		_delay_ms(500);
		DIO_writePin(PORTA_ID,PIN5_ID,LOGIC_LOW);
		DIO_writePin(PORTA_ID,PIN6_ID,LOGIC_HIGH);
		DIO_writePin(PORTB_ID,PIN7_ID,LOGIC_LOW);
		DIO_writePin(PORTA_ID,PIN4_ID,LOGIC_LOW);
		_delay_ms(500);
		DIO_writePin(PORTA_ID,PIN5_ID,LOGIC_LOW);
		DIO_writePin(PORTA_ID,PIN6_ID,LOGIC_LOW);
		DIO_writePin(PORTB_ID,PIN7_ID,LOGIC_HIGH);
		DIO_writePin(PORTA_ID,PIN4_ID,LOGIC_LOW);
		_delay_ms(500);

	}


return 0;
	}
