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

	while (1) {
	  run_cyclic_picture();
    }
}