#define F_CPU 800000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= (1 << DDB5)|(1<<DDB3); //Defining the ports
	DDRB &= ~(0 << DDB1);


	while (1)
	{
		
		if (!(PINB&(1<<PINB1))) //Takes in that the button has been pressed
		{
		PORTB |= (1<<PINB5)|(1<<PINB3); //Sets pin 3 and 5 as on 
		}
		else
		{
		PORTB &= (~(1<<PINB5))&(~(1<<PINB3)); //Sets pin 3 and 5 off when the button has not been pressed
		}
	}
} 