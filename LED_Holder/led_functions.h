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

//�������� ���� �� ������
void on_led (char num);

//��������� ���� �� ������
void off_led(char num);

//��������� ��� �����
void off_all_led();

//������������� ������
void init_led();

#endif /* LED_FUNCTIONS_H_ */