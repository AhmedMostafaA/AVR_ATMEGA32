/*
 * LED.h
 *
 * Created: 1/20/2020 10:02:52 PM
 *  Author: Costa
 */ 


#ifndef LED_H_
#define LED_H_

#include "STD_Types.h"

typedef enum
{
	LED_0 = 0,
	LED_1,
	LED_2	
}LED_t;

extern void LED_VidWrite(LED_t led,uint8 level);
extern void LED_VidToggle(LED_t led);
#endif /* LED_H_ */