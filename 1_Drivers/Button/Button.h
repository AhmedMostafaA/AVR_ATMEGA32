/*
 * Button.h
 *
 * Created: 1/20/2020 9:18:06 PM
 *  Author: Costa
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_


#include "STD_Types.h"

typedef enum
{
	BUTTON_0 = 0,
	BUTTON_1,
	BUTTON_2
		
}Button_t;

extern uint8 Button_U8Read(Button_t button);

#endif /* BUTTON_H_ */