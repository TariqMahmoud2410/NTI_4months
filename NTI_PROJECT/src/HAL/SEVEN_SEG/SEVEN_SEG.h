/*
 * SEVEN_SEG.h
 *
 *  Created on: Oct 21, 2023
 *      Author: Tariq Mahmoud
 */

#ifndef SRC_HAL_SEVEN_SEG_SEVEN_SEG_H_
#define SRC_HAL_SEVEN_SEG_SEVEN_SEG_H_

#include"../../MCAL/DIO/DIO_interface.h"
#include"../../MCAL/DIO/DIO_private.h"
#include"../../LIB/BIT_MATH.h"
#include"../../LIB/STD_TYPES.h"



void Seven_Seg_Init(u8 Com);
void Seven_Seg_Display(u8 Number);


#endif /* SRC_HAL_SEVEN_SEG_SEVEN_SEG_H_ */
