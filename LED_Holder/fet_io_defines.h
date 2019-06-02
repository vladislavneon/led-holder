/*
 * fet_io_defines.h
 *
 * Created: 16.11.2015 18:10:57
 *  Author: Ne0n
 */ 


#ifndef FET_IO_DEFINES_H_
#define FET_IO_DEFINES_H_

#include <avr/io.h>

//define FET port, ddr & pins

#define PORT_FET_BLUE PORTB
#define DDR_FET_BLUE  DDRB
#define PIN_FET_BLUE  PINB1

#define PORT_FET_GREEN PORTB
#define DDR_FET_GREEN  DDRB
#define PIN_FET_GREEN  PINB0

#define PORT_FET_RED PORTD
#define DDR_FET_RED  DDRD
#define PIN_FET_RED  PIND7

#endif /* FET_IO_DEFINES_H_ */