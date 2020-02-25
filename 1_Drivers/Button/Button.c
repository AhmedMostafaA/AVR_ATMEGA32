/*
 * Button.c
 *
 * Created: 1/20/2020 9:18:25 PM
 *  Author: Costa
 */ 


#include "Dio.h"
#include "Dio_CFG.h"
#include "Button.h"

uint8 Button_U8Read(Button_t button)
{
	uint8 button_level = LOW;
	
	switch(button)
	{
		case BUTTON_0:
						button_level = Dio_U8ReadPin(PB,0);
						//button_level = READBIT(PORTB,0);
						break;
		case BUTTON_1:
						button_level = Dio_U8ReadPin(PB,4);
						break;
		case BUTTON_2:
						button_level = Dio_U8ReadPin(PD,2);
						break;
		default:		break;
	}
	return button_level;
}
