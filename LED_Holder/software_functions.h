/*
 * software_functions.h
 *
 * Created: 17.12.2015 15:40:42
 *  Author: Ne0n
 */ 


#ifndef SOFTWARE_FUNCTIONS_H_
#define SOFTWARE_FUNCTIONS_H_

#include "hardware_functions.h"
#include "variables.h"

//выводит состояние из массива states
void run_state(int n);

//запускает цикл переключения состояний
void run_cycles_of_states();

//запускает картинку в режиме бегущей строки
void run_cyclic_picture();

//выводит позицию картинки
void run_cyclic_position(int const field_left, int const field_right, int const picture_left, int const picture_right);

#endif /* SOFTWARE_FUNCTIONS_H_ */