/*
 * variables.h
 *
 * Created: 27.11.2015 12:13:45
 *  Author: Ne0n
 */ 


#ifndef VARIABLES_H_
#define VARIABLES_H_

#include "structures.h"

//����� ��������� �������
extern struct State states [10];

//�������� ��� ����������� � ���� ������� ������
extern struct Led_state cyclic_picture [50];

//������ ��������
extern int cyclic_picture_size;

extern int num_state;

extern u_char cur_state;

extern volatile int period;

extern int state_time;

extern int line_time;

extern int cycle_time;


#endif /* VARIABLES_H_ */