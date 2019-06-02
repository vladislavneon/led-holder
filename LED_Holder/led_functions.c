/*
 * led_functions.c
 *
 * Created: 16.11.2015 18:36:52
 *  Author: Ne0n
 */ 

#include <avr/io.h>
#include "hardware_defines.h"
#include "structures.h"
#include "led_functions.h"

void init_led() {
	DDR_LED_1  |= (1 << PIN_LED_1);
	DDR_LED_2  |= (1 << PIN_LED_2);
	DDR_LED_3  |= (1 << PIN_LED_3);
	DDR_LED_4  |= (1 << PIN_LED_4);
	DDR_LED_5  |= (1 << PIN_LED_5);
	DDR_LED_6  |= (1 << PIN_LED_6);
	DDR_LED_7  |= (1 << PIN_LED_7);
	DDR_LED_8  |= (1 << PIN_LED_8);
	DDR_LED_9  |= (1 << PIN_LED_9);
	DDR_LED_10 |= (1 << PIN_LED_10);
	DDR_LED_11 |= (1 << PIN_LED_11);
	DDR_LED_12 |= (1 << PIN_LED_12);
	DDR_LED_13 |= (1 << PIN_LED_13);	
	DDR_LED_14 |= (1 << PIN_LED_14);
	DDR_LED_15 |= (1 << PIN_LED_15);
}

void on_led(char num) {
	switch (num) {
	case 1:
		PORT_LED_1 |= (1 << PIN_LED_1);
		break;
	case 2:
		PORT_LED_2 |= (1 << PIN_LED_2);
		break;
	case 3:
		PORT_LED_3 |= (1 << PIN_LED_3);
		break;
	case 4:
		PORT_LED_4 |= (1 << PIN_LED_4);
		break;
	case 5:
		PORT_LED_5 |= (1 << PIN_LED_5);
		break;
	case 6:
		PORT_LED_6 |= (1 << PIN_LED_6);
		break;
	case 7:
		PORT_LED_7 |= (1 << PIN_LED_7);
		break;
	case 8:
		PORT_LED_8 |= (1 << PIN_LED_8);
		break;
	case 9:
		PORT_LED_9 |= (1 << PIN_LED_9);
		break;
	case 10:
		PORT_LED_10 |= (1 << PIN_LED_10);
		break;
	case 11:
		PORT_LED_11 |= (1 << PIN_LED_11);
		break;
	case 12:
		PORT_LED_12 |= (1 << PIN_LED_12);
		break;
	case 13:
		PORT_LED_13 |= (1 << PIN_LED_13);
		break;
	case 14:
		PORT_LED_14 |= (1 << PIN_LED_14);
		break;
	case 15:
		PORT_LED_15 |= (1 << PIN_LED_15);
		break;
	}
}

void off_led(char num) {
	switch (num) {
	case 1:
		PORT_LED_1 &= ~(1 << PIN_LED_1);
		break;
	case 2:
		PORT_LED_2 &= ~(1 << PIN_LED_2);
		break;
	case 3:
		PORT_LED_3 &= ~(1 << PIN_LED_3);
		break;
	case 4:
		PORT_LED_4 &= ~(1 << PIN_LED_4);
		break;
	case 5:
		PORT_LED_5 &= ~(1 << PIN_LED_5);
		break;
	case 6:
		PORT_LED_6 &= ~(1 << PIN_LED_6);
		break;
	case 7:
		PORT_LED_7 &= ~(1 << PIN_LED_7);
		break;
	case 8:
		PORT_LED_8 &= ~(1 << PIN_LED_8);
		break;
	case 9:
		PORT_LED_9 &= ~(1 << PIN_LED_9);
		break;
	case 10:
		PORT_LED_10 &= ~(1 << PIN_LED_10);
		break;
	case 11:
		PORT_LED_11 &= ~(1 << PIN_LED_11);
		break;
	case 12:
		PORT_LED_12 &= ~(1 << PIN_LED_12);
		break;
	case 13:
		PORT_LED_13 &= ~(1 << PIN_LED_13);
		break;
	case 14:
		PORT_LED_14 &= ~(1 << PIN_LED_14);
		break;
	case 15:
		PORT_LED_15 &= ~(1 << PIN_LED_15);
		break;
	}
}

void off_all_led() {
	for (int i = 1; i <= 15; ++i) {
		off_led(i);	
	}
}