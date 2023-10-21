/*
 * DR1_interface.h
 *
 *  Created on: Oct 20, 2023
 *      Author: Tariq Mahmoud
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "DIO_config.h"
#include "DIO_private.h"


#define NUM_OF_PORTS           4
#define NUM_OF_PINS_PER_PORT   8

#define PORTA_ID               (0x00)
#define PORTB_ID               (0x01)
#define PORTC_ID               (0x02)
#define PORTD_ID               (0x03)

#define PIN0_ID                0x00
#define PIN1_ID                0x01
#define PIN2_ID                0x02
#define PIN3_ID                0x03
#define PIN4_ID                0x04
#define PIN5_ID                0x05
#define PIN6_ID                0x06
#define PIN7_ID                0x07


typedef enum
{
	PIN_INPUT,PIN_OUTPUT
}DIO_PinDirectionType;

typedef enum
{
	PORT_INPUT,PORT_OUTPUT=0xFF
}DIO_PortDirectionType;


/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/

/*
 * Description :
 * Setup the direction of the required port all pins input/output.
 * If the direction value is PORT_INPUT all pins in this port should be input pins.
 * If the direction value is PORT_OUTPUT all pins in this port should be output pins.
 * If the input port number is not correct, The function will not handle the request.
 */
void DIO_setupPortDirection(u8 port_num, DIO_PortDirectionType direction);

/*
 * Description :
 * Write the value on the required port.
 * If any pin in the port is output pin the value will be written.
 * If any pin in the port is input pin this will activate/deactivate the internal pull-up resistor.
 * If the input port number is not correct, The function will not handle the request.
 */
void DIO_writePort(u8 port_num, u8 value);

/*
 * Description :
 * Read and return the value of the required port.
 * If the input port number is not correct, The function will return ZERO value.
 */
u8 DIO_readPort(u8 port_num);

/*
 * Description :
 * Setup the direction of the required pin input/output.
 * If the input port number or pin number are not correct, The function will not handle the request.
 */
void DIO_setupPinDirection(u8 port_num, u8 pin_num, DIO_PinDirectionType direction);


/*
 * Description :
 * Write the value Logic High or Logic Low on the required pin.
 * If the input port number or pin number are not correct, The function will not handle the request.
 * If the pin is input, this function will enable/disable the internal pull-up resistor.
 */
void DIO_writePin(u8 port_num, u8 pin_num, u8 value);


/*
 * Description :
 * Read and return the value for the required pin, it should be Logic High or Logic Low.
 * If the input port number or pin number are not correct, The function will return Logic Low.
 */
u8 DIO_readPin(u8 port_num, u8 pin_num);



void DIO_TogglePin(u8 port_num, u8 pin_num);


#endif /* DIO_INTERFACE_H_ */
