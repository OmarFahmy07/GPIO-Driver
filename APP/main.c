/*
 * main.c
 *
 *  Created on: Aug 2, 2020
 *      Author: Omar Fahmy
 */

#include "../MCAL/DIO/DIO_Interface.h"
#include <util/delay.h>

int main (void)
{
	DIO_U8SetPinDirection(DIO_PORTA, DIO_PIN0, DIO_PIN_OUTPUT); //Base
	DIO_U8SetPinDirection(DIO_PORTB, DIO_PIN0, DIO_PIN_OUTPUT); //LED

	while (1)
	{
		DIO_U8SetPinValue(DIO_PORTA, DIO_PIN0, DIO_PIN_HIGH);
		DIO_U8SetPinValue(DIO_PORTB, DIO_PIN0, DIO_PIN_LOW);
		_delay_ms(2000);
		DIO_U8SetPinValue(DIO_PORTA, DIO_PIN0, DIO_PIN_LOW);
		DIO_U8SetPinValue(DIO_PORTB, DIO_PIN0, DIO_PIN_HIGH);
		_delay_ms(2000);
		DIO_U8SetPinValue(DIO_PORTA, DIO_PIN0, DIO_PIN_LOW);
		DIO_U8SetPinValue(DIO_PORTB, DIO_PIN0, DIO_PIN_LOW);
		_delay_ms(2000);
	}

	return 0;
}
