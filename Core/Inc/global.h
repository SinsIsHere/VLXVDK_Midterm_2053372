/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: User
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"

#define RESET	10
#define STATE_0	0
#define STATE_1	1
#define STATE_2	2
#define STATE_3	3
#define STATE_4	4
#define STATE_5	5
#define STATE_6	6
#define STATE_7	7
#define STATE_8	8
#define STATE_9	9

extern int status;

void display7SEG(int num);

#endif /* INC_GLOBAL_H_ */
