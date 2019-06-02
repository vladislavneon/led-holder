/*
 * led_functions.h
 *
 * Created: 16.11.2015 18:23:33
 *  Author: Ne0n
 */ 


#ifndef LED_FUNCTIONS_H_
#define LED_FUNCTIONS_H_

#include <avr/io.h>
#include "hardware_defines.h"
#include "structures.h"

//включаем диод по номеру
void on_led (char num);

//выключаем диод по номеру
void off_led(char num);

//выключаем все диоды
void off_all_led();

//инициализация диодов
void init_led();

#endif /* LED_FUNCTIONS_H_ */