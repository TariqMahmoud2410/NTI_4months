/*
 * SEVEN_SEG.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Tariq Mahmoud
 */


#include "SEVEN_SEG.h"
#include"../../LIB/BIT_MATH.h"
#include"../../LIB/STD_TYPES.h"
#include"../../MCAL/DIO/DIO_private.h"
#include"../../MCAL/DIO/DIO_interface.h"

void Seven_Seg_Init(u8 Com){
	    DIO_setupPinDirection(PORTB_ID,PIN5_ID,PIN_OUTPUT);
	    DIO_setupPinDirection(PORTB_ID,PIN6_ID,PIN_OUTPUT);
	    DIO_setupPinDirection(PORTA_ID,PIN2_ID,PIN_OUTPUT);
	    DIO_setupPinDirection(PORTA_ID,PIN3_ID,PIN_OUTPUT);
		switch (Com)
		{
		case 0:
           DIO_writePin(PORTB_ID,PIN5_ID,LOGIC_LOW);
           DIO_writePin(PORTB_ID,PIN6_ID,LOGIC_LOW);
           DIO_writePin(PORTA_ID,PIN2_ID,LOGIC_LOW);
           DIO_writePin(PORTA_ID,PIN3_ID,LOGIC_LOW);
			break;
		case 3:
		     DIO_writePin(PORTB_ID,PIN5_ID,LOGIC_LOW);
		     DIO_writePin(PORTB_ID,PIN6_ID,LOGIC_HIGH);
		     DIO_writePin(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		     DIO_writePin(PORTA_ID,PIN3_ID,LOGIC_HIGH);
			break;
		case 4:
		     DIO_writePin(PORTB_ID,PIN5_ID,LOGIC_HIGH);
		     DIO_writePin(PORTB_ID,PIN6_ID,LOGIC_LOW);
	         DIO_writePin(PORTA_ID,PIN2_ID,LOGIC_HIGH);
	         DIO_writePin(PORTA_ID,PIN3_ID,LOGIC_HIGH);

			break;
		case 2:
		           DIO_writePin(PORTB_ID,PIN5_ID,LOGIC_HIGH);
		           DIO_writePin(PORTB_ID,PIN6_ID,LOGIC_HIGH);
		           DIO_writePin(PORTA_ID,PIN2_ID,LOGIC_LOW);
		           DIO_writePin(PORTA_ID,PIN3_ID,LOGIC_HIGH);

			break;
		case 1:
		           DIO_writePin(PORTB_ID,PIN5_ID,LOGIC_HIGH);
		           DIO_writePin(PORTB_ID,PIN6_ID,LOGIC_HIGH);
		           DIO_writePin(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		           DIO_writePin(PORTA_ID,PIN3_ID,LOGIC_LOW);
			break;
		default:
			break;
		}
				DIO_setupPinDirection(PORTB_ID,PIN5_ID,PIN_OUTPUT);
			    DIO_setupPinDirection(PORTB_ID,PIN6_ID,PIN_OUTPUT);
			    DIO_setupPinDirection(PORTA_ID,PIN2_ID,PIN_OUTPUT);
			    DIO_setupPinDirection(PORTA_ID,PIN3_ID,PIN_OUTPUT);

			    DIO_setupPinDirection(PORTB_ID,PIN0_ID,PIN_OUTPUT);
			    DIO_setupPinDirection(PORTB_ID,PIN1_ID,PIN_OUTPUT);
			    DIO_setupPinDirection(PORTB_ID,PIN2_ID,PIN_OUTPUT);
			    DIO_setupPinDirection(PORTB_ID,PIN4_ID,PIN_OUTPUT);

}

void Seven_Seg_Display(u8 Number){
	switch (Number){
		case 0 :
	    DIO_writePin(PORTB_ID,PIN0_ID,LOGIC_LOW);
	    DIO_writePin(PORTB_ID,PIN1_ID,LOGIC_LOW);
	    DIO_writePin(PORTB_ID,PIN2_ID,LOGIC_LOW);
	    DIO_writePin(PORTB_ID,PIN4_ID,LOGIC_LOW);

		break;
		case 1 :
		    DIO_writePin(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN1_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN2_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;
		case 2:
		    DIO_writePin(PORTB_ID,PIN0_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN1_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN2_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;
		case 3:
		    DIO_writePin(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN1_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN2_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;
		case 4:
		    DIO_writePin(PORTB_ID,PIN0_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN1_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN2_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;
		case 5:
		    DIO_writePin(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN1_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN2_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;
		case 6:
		    DIO_writePin(PORTB_ID,PIN0_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN1_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN2_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;
		case 7:
		    DIO_writePin(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN1_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN2_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;
		case 8:
		    DIO_writePin(PORTB_ID,PIN0_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN1_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN2_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN4_ID,LOGIC_HIGH);
		break;
		case 9:
		    DIO_writePin(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		    DIO_writePin(PORTB_ID,PIN1_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN2_ID,LOGIC_LOW);
		    DIO_writePin(PORTB_ID,PIN4_ID,LOGIC_HIGH);
		break;
	}
}
