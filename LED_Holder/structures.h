/*
 * structures.h
 *
 * Created: 16.11.2015 18:16:46
 *  Author: Ne0n
 */ 


#ifndef STRUCTURES_H_
#define STRUCTURES_H_

typedef unsigned char u_char;

enum Color {NONE, RED, GREEN, BLUE};

//структура описывает состояние одной линии светодиодов (или одного RGB)
struct Led_state {
	u_char red;
	u_char green;
	u_char blue;	
};

//структура описывает состояние всех светодиодов
struct State {
	struct Led_state states[16];
};

#endif /* STRUCTURES_H_ */