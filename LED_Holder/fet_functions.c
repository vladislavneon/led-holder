/*
 * fet_functions.c
 *
 * Created: 16.11.2015 18:27:31
 *  Author: Ne0n
 */ 

#include "fet_functions.h"

void set_fet (enum Color color) {
	switch (color) {
	case RED:
		PORT_FET_RED   |= (1 << PIN_FET_RED);
		PORT_FET_GREEN &= ~(1 << PIN_FET_GREEN);
		PORT_FET_BLUE  &= ~(1 << PIN_FET_BLUE);
		break;
	case GREEN:
		PORT_FET_GREEN |= (1 << PIN_FET_GREEN);
		PORT_FET_RED   &= ~(1 << PIN_FET_RED);
		PORT_FET_BLUE  &= ~(1 << PIN_FET_BLUE);
		break;
	case BLUE:
		PORT_FET_BLUE  |= (1 << PIN_FET_BLUE);
		PORT_FET_GREEN &= ~(1 << PIN_FET_GREEN);
		PORT_FET_RED   &= ~(1 << PIN_FET_RED);
		break;
	case NONE:
		PORT_FET_RED   &= ~(1 << PIN_FET_RED);
		PORT_FET_GREEN &= ~(1 << PIN_FET_GREEN);
		PORT_FET_BLUE  &= ~(1 << PIN_FET_BLUE);	
	}
}

void init_fet() {
	DDR_FET_RED   |= (1 << PIN_FET_RED);
	DDR_FET_GREEN |= (1 << PIN_FET_GREEN);
	DDR_FET_BLUE  |= (1 << PIN_FET_BLUE);	
}