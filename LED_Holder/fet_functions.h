/*
 * fet_functions.h
 *
 * Created: 16.11.2015 18:23:23
 *  Author: Ne0n
 */ 


#ifndef FET_FUNCTIONS_H_
#define FET_FUNCTIONS_H_

#include <avr/io.h>
#include "hardware_defines.h"
#include "structures.h"

//включаем линию соответствующего цвета
void set_fet(enum Color color);

//инициализация линий
void init_fet();

#endif /* FET_FUNCTIONS_H_ */