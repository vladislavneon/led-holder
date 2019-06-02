/*
 * LED_Holder.c
 *
 * Created: 16.11.2015 17:56:47
 *  Author: Ne0n
 */ 
//#define F_CPU 1000000

#include <avr/io.h>
#include "headers.h"
#include <util/delay.h>

int main(void)
{
    init_fet();
	init_led();
	init_states();
	load_cyclic_picture();
	for (int i = 1; i <= 15; ++i) {
		off_led(i);	
	}
	//DDRD |= (1 << DDRD7);
	//PORTD |= (1 << PORTD7);
	while(1)
    {
	  /*_delay_ms(5);
	  set_fet(RED);
	  _delay_ms(5);
	  set_fet(GREEN);
	  _delay_ms(5);
	  set_fet(BLUE);*/
	  
	  
	  //program for LOH
	  /*_delay_ms(5);
	  set_fet(NONE);
	  for (int i = 1; i <= 10; ++i) {
		  if (
			(i == 1) ||
			(i == 2) ||
			(i == 4) ||
			(i == 5) ||
			(i == 6) ||
			(i == 8) ||
			(i == 10)
			) {
				on_led(i);	
			}
			else {
				off_led(i);	
			}
	  }
	  set_fet(RED);
	  
	  _delay_ms(5);
	  set_fet(NONE);
	  for (int i = 1; i <= 10; ++i) {
		  if (
		  (i == 1) ||
		  (i == 4) ||
		  (i == 6) ||
		  (i == 8) ||
		  (i == 9) ||
		  (i == 10)
		  ) {
			  on_led(i);
		  }
		  else {
			  off_led(i);
		  }
	  }
	  set_fet(GREEN);
	  
	  _delay_ms(5);
	  set_fet(NONE);
	  for (int i = 1; i <= 10; ++i) {
		  if (
		  (i == 1) ||
		  (i == 4) ||
		  (i == 5) ||
		  (i == 6) ||
		  (i == 8) ||
		  (i == 10)
		  ) {
			  on_led(i);
		  }
		  else {
			  off_led(i);
		  }
	  }
	  set_fet(BLUE);*/
	  //run_cycles_of_states();
	  //run_cyclic_picture();
	  run_cyclic_picture();
    }
}