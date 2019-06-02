/*
 * led_io_defines.h
 *
 * Created: 16.11.2015 18:11:40
 *  Author: Ne0n
 */ 


#ifndef LED_IO_DEFINES_H_
#define LED_IO_DEFINES_H_

#include <avr/io.h>

//define LED port, ddr & pins

#define PORT_LED_1  PORTD
#define DDR_LED_1   DDRD
#define PIN_LED_1   PIND5

#define PORT_LED_2  PORTD
#define DDR_LED_2   DDRD
#define PIN_LED_2   PIND6

#define PORT_LED_3  PORTB
#define DDR_LED_3   DDRB
#define PIN_LED_3   PINB7

#define PORT_LED_4  PORTB
#define DDR_LED_4   DDRB
#define PIN_LED_4   PINB6

#define PORT_LED_5  PORTD
#define DDR_LED_5   DDRD
#define PIN_LED_5   PIND4

#define PORT_LED_6  PORTD
#define DDR_LED_6   DDRD
#define PIN_LED_6   PIND3

#define PORT_LED_7  PORTD
#define DDR_LED_7   DDRD
#define PIN_LED_7   PIND2

#define PORT_LED_8  PORTD
#define DDR_LED_8   DDRD
#define PIN_LED_8   PIND1

#define PORT_LED_9  PORTD
#define DDR_LED_9   DDRD
#define PIN_LED_9   PIND0

#define PORT_LED_10 PORTC
#define DDR_LED_10  DDRC
#define PIN_LED_10  PINC5

#define PORT_LED_11 PORTC
#define DDR_LED_11  DDRC
#define PIN_LED_11  PINC1

#define PORT_LED_12 PORTC
#define DDR_LED_12  DDRC
#define PIN_LED_12  PINC0

#define PORT_LED_13 PORTC
#define DDR_LED_13  DDRC
#define PIN_LED_13  PINC2

#define PORT_LED_14 PORTC
#define DDR_LED_14  DDRC
#define PIN_LED_14  PINC3

#define PORT_LED_15 PORTC
#define DDR_LED_15  DDRC
#define PIN_LED_15  PINC4

#endif /* LED_IO_DEFINES_H_ */