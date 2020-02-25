/*
 * Interrupt_Driver.h
 *
 * Created: 2/24/2020 2:43:46 AM
 *  Author: Costa
 */ 


#ifndef INTERRUPT_DRIVER_H_
#define INTERRUPT_DRIVER_H_

#include "STD_Types.h"

typedef enum
{
	INT_0 = 0,
	INT_1,
	INT_2
}Interrupt_T;

typedef enum
{
	LOW_LEVEL= 0 ,
	ANY_LOGIC_CHANGE,
	FALLING_EDGE,
	RISING_EDGE
}Interrupt_Mode_t;

extern void Dio_vidExIntConfig(Interrupt_T interrupt, Interrupt_Mode_t mode);

#endif /* INTERRUPT_DRIVER_H_ */