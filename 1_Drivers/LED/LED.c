/*
 * LED.c
 *
 * Created: 1/20/2020 10:02:13 PM
 *  Author: Costa
 */ 

#include "Dio.h"
#include "LED.h"

void LED_VidWrite(LED_t led,uint8 level)
{
	switch(led)
	{
		case LED_0:
					if (HIGH == level)
					{
						Dio_VidWritePin(PC,2,HIGH);
					}
					else
					{
						Dio_VidWritePin(PC,2,LOW);
					}
					break;
		case LED_1:
					if (HIGH == level)
					{
						Dio_VidWritePin(PC,7,HIGH);
					}
					else
					{
						Dio_VidWritePin(PC,7,LOW);
					}
					break;
		case LED_2:
					if (HIGH == level)
					{
						Dio_VidWritePin(PD,3,HIGH);
					}
					else
					{
						Dio_VidWritePin(PD,3,LOW);
					}
					break;
		default:	break;
	}
}

void LED_VidToggle(LED_t led)
{
	switch(led)
	{
		case LED_0:
			Dio_VidTogglePin(PC,2);
			break;
		case LED_1:
			Dio_VidTogglePin(PC,7);
			break;
		case LED_2:
			Dio_VidTogglePin(PD,3);
			break;
		default:break;
	}
}
