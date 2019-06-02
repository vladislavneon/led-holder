/*
 * variables.c
 *
 * Created: 27.11.2015 12:13:56
 *  Author: Ne0n
 */ 

#include "variables.h"

struct State states [10];

struct Led_state cyclic_picture [50];

int cyclic_picture_size;

int num_state;

u_char cur_state;

volatile int period;

int state_time;

int line_time;

int cycle_time;



