/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: User
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE	GPIO_PIN_SET
#define PRESSED_STATE	GPIO_PIN_RESET

#include "main.h"

void getKeyInputINC();
void getKeyInputRST();
void getKeyInputDEC();

int INC();
int RST();
int DEC();

int INC_long();
int DEC_long();

#endif /* INC_BUTTON_H_ */
