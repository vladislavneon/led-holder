/*
 * hardware_defines.h
 *
 * Created: 16.11.2015 17:58:13
 *  Author: Ne0n
 */ 


#ifndef HARDWARE_DEFINES_H_
#define HARDWARE_DEFINES_H_

//задаем частоту работы контроллера
#ifndef F_CPU
#define F_CPU 1000000
#endif

#include "fet_io_defines.h"
#include "led_io_defines.h"
#include <util/delay.h>
#include <avr/io.h>


#endif /* HARDWARE_DEFINES_H_ */