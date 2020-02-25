/*
 * Seven_Segment.c
 *
 * Created: 1/31/2020 6:43:13 PM
 *  Author: Costa
 */ 

#include "Dio.h"
#include "Dio_CFG.h"
#include "Seven_Segment.h"

void SevSeg_vidInit(void)
{
	/*Disable 2 seven segments */
	Dio_VidWritePin(PB,1,LOW);
	Dio_VidWritePin(PB,2,LOW);
}

void SevSeg_vidDisplay(uint8 data)
{
	uint8 data1 = data%10;
	uint8 data2 = data/10;
	uint8 i = 0;
	
	Dio_VidWritePin(PB,2,LOW);
	Dio_VidWritePin(PB,1,HIGH);
	for (i=0 ; i<4 ; i++)
	{
		Dio_VidWritePin(PA, i+4 , READBIT(data1,i));
	}
	
	_delay_ms(10);
	
	Dio_VidWritePin(PB,1,LOW);
	Dio_VidWritePin(PB,2,HIGH);
	for (i=0 ; i<4 ; i++)
	{
		Dio_VidWritePin(PA, i+4 , READBIT(data2,i));
	}
	_delay_ms(10);
}

