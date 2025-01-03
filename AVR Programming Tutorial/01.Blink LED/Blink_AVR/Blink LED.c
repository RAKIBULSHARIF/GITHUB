/*
 * blink_project.c
 *
 * Created: 7/18/2024 7:34:04 PM
 * Author : Rakibul Sharif
 */ 
/*This is the simple AVR Micro controller Program. Blink_LED project.
Here actually 3 different types of solution for a single problem.*/
#define F_CPU 16000000UL
/*In Atmel Studio delay library cannot work properly if not define
 the CPU clock.*/
#include <avr/io.h>
/*Include InputOutput library*/
#include <util/delay.h>
/*Include delay library*/
int main(void)
{
	
	//This is simple data direction register output only for Pin 0 on PORTB
    //DDRB = 0b00000001;

	//This is simple data direction register output only for Pin 0 on PORTB
	
	//This is Simple bitwise operation
	//DDRB = DDRB | 0b00000001;
	//This is advance bitwise operation
	DDRB |= 1 << PINB0;
    while (1) 
    {
		//This is simple blink code
// 		PORTB = 0b00000001;
// 		_delay_ms(100);
// 		PORTB = 0b00000000;
// 		_delay_ms(100);

		//This is bitwise operation blink code
//		PORTB |= 1 << PINB0;
//		_delay_ms(100);
//		PORTB &= ~(1 << PINB0);
//		_delay_ms(100);

		//This is advance bitwise operation blink code
		PORTB ^= 1 << PINB0;
		_delay_ms(1000);
    }
}

