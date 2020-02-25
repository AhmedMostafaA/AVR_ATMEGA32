/*
 * Interrupt_Driver.c
 *
 * Created: 2/24/2020 2:44:06 AM
 *  Author: Costa
 */ 

#include "Interrupt_Driver.h"

void Dio_vidExIntConfig(Interrupt_T interrupt, Interrupt_Mode_t mode)
{
	cli();  // disable Global interrupt
	
	/*enable external interrupt and configure his mode */
	switch(interrupt)
	{
		case INT_0:
			switch(mode)
			{
				case LOW_LEVEL:
					CLEARBIT(MCUCR,ISC00);
					CLEARBIT(MCUCR,ISC01);
					break;
				case  ANY_LOGIC_CHANGE:
					SETBIT(MCUCR,ISC00);
					CLEARBIT(MCUCR,ISC01);
					break;
				case FALLING_EDGE:
					CLEARBIT(MCUCR,ISC00);
					SETBIT(MCUCR,ISC01);
					break;
				case RISING_EDGE:
					SETBIT(MCUCR,ISC00);
					SETBIT(MCUCR,ISC01);
					break;
				default:break;
			}
			SETBIT(GICR,INT0);  // enable external interrupt 0
			break;
		
		case INT_1:
			switch(mode)
			{
				case LOW_LEVEL:
				CLEARBIT(MCUCR,ISC10);
				CLEARBIT(MCUCR,ISC11);
				break;
				case  ANY_LOGIC_CHANGE:
				SETBIT(MCUCR,ISC10);
				CLEARBIT(MCUCR,ISC11);
				break;
				case FALLING_EDGE:
				CLEARBIT(MCUCR,ISC10);
				SETBIT(MCUCR,ISC11);
				break;
				case RISING_EDGE:
				SETBIT(MCUCR,ISC10);
				SETBIT(MCUCR,ISC11);
				break;
				default:break;
			}
			SETBIT(GICR,INT1);   // enable external interrupt 1
			break;
		
		case INT_2:
			switch(mode)
			{
				case LOW_LEVEL:
				case FALLING_EDGE:
					CLEARBIT(MCUCSR,ISC2);
					break;
				case  ANY_LOGIC_CHANGE:
				case RISING_EDGE:
					SETBIT(MCUCSR,ISC2);
					break;
				default:break;
			}
			SETBIT(GICR,INT2);     // enable external interrupt 2
			break;
			
		default: break;
	}
	
	sei();			// enable Global Interrupts
}