/*
 * software_functions.c
 *
 * Created: 17.12.2015 15:41:04
 *  Author: Ne0n
 */ 

#include "software_functions.h"

void run_state(int n) {
	_delay_ms(5);
	set_fet(NONE);
	for (int i = 1; i <= 15; ++i) {
		if (states[n].states[i].red){
			on_led(i);
		}	
		else {
			off_led(i);
		}
	}
	set_fet(RED);
	
	_delay_ms(4);
	set_fet(NONE);
	_delay_ms(1);
	for (int i = 1; i <= 15; ++i) {
		if (states[n].states[i].green){
			on_led(i);
		}
		else {
			off_led(i);
		}
	}
	set_fet(GREEN);
	
	_delay_ms(5);
	set_fet(NONE);
	for (int i = 1; i <= 15; ++i) {
		if (states[n].states[i].blue){
			on_led(i);
		}
		else {
			off_led(i);
		}
	}
	set_fet(BLUE);
}

void run_cycles_of_states() {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 20; ++j) {
			run_state(i);	
		}
	}
}

/*
field_left - левая позиция матрицы, на котору выводится картинка
field_right - правая позиция матрицы, на котору выводится картинка
picture_left - левая позиция из картинки, начиная с которой выводится текущая часть изображения
picture_right - правая позиция из картнки, на которой заканчивается вывод текущей части изображения
*/
void run_cyclic_position(int const field_left, int const field_right, int const picture_left, int const picture_right) {
	set_fet(NONE);
	_delay_ms(1);
	for (int cur_field_pos = field_left; cur_field_pos <= field_right; ++cur_field_pos) {
		int cur_picture_pos = picture_left + cur_field_pos - field_left;
		if (cyclic_picture[cur_picture_pos].red) {
			on_led(cur_field_pos);	
		}
		else {
			off_led(cur_field_pos);	
		}
	}
	set_fet(RED);
	_delay_us(500);
	
	set_fet(NONE);
	_delay_us(4500);
	for (int cur_field_pos = field_left; cur_field_pos <= field_right; ++cur_field_pos) {
		int cur_picture_pos = picture_left + cur_field_pos - field_left;
		if (cyclic_picture[cur_picture_pos].green) {
			on_led(cur_field_pos);
		}
		else {
			off_led(cur_field_pos);
		}
	}
	set_fet(GREEN);
	_delay_ms(5);
	
	set_fet(NONE);
	//_delay_ms(1);
	for (int cur_field_pos = field_left; cur_field_pos <= field_right; ++cur_field_pos) {
		int cur_picture_pos = picture_left + cur_field_pos - field_left;
		if (cyclic_picture[cur_picture_pos].blue) {
			on_led(cur_field_pos);
		}
		else {
			off_led(cur_field_pos);
		}
	}
	set_fet(BLUE);
	_delay_ms(4);
}

void run_cyclic_picture() {
	for (int first_field_pos = -14; first_field_pos < cyclic_picture_size; ++first_field_pos) {
		int last_field_pos = first_field_pos + 14;
		int field_left;
		int field_right;
		int picture_left;
		int picture_right;
		if (first_field_pos < 0) {
			picture_left = 0;
			field_left = 1 - first_field_pos;
		}
		else {
			picture_left = first_field_pos;
			field_left = 1;
		}
		if (last_field_pos > cyclic_picture_size - 1) {
			picture_right = cyclic_picture_size - 1;
			field_right = 15 - (last_field_pos - (cyclic_picture_size - 1));
		}
		else {
			picture_right = last_field_pos;
			field_right = 15;
		}
		off_all_led();
		for (int i = 0; i < 10; ++i) {
			run_cyclic_position(field_left, field_right, picture_left, picture_right);
		}			
	}
}