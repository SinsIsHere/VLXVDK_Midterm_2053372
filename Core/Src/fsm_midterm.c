/*
 * fsm_midterm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: User
 */

#include "fsm_midterm.h"

void fsm_midterm_run() {
	switch (status){
	case RESET:
		display7SEG(0);

		status = STATE_0;
		setTimer0(1000);
		setTimer1(10000);

		break;
	case STATE_0:
		display7SEG(0);

		if (RST() == 1) {
			status = RESET;
			setTimer1(10000);
		}

		if (DEC() == 1) {
			status = STATE_9;
			setTimer1(10000);
		}

		if (INC() == 1) {
			status = STATE_1;
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (INC_long() == 1)) {
			status = STATE_1;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (DEC_long() == 1)) {
			status = STATE_9;
			setTimer0(1000);
			setTimer1(10000);
		}

		break;
	case STATE_1:
		display7SEG(1);

		if (RST() == 1) {
			status = RESET;
			setTimer1(10000);
		}

		if (DEC() == 1) {
			status = STATE_0;
			setTimer1(10000);
		}

		if (INC() == 1) {
			status = STATE_2;
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (INC_long() == 1)) {
			status = STATE_2;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (DEC_long() == 1)) {
			status = STATE_0;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer1_flag == 1) && (timer0_flag == 1)) {
			status = STATE_0;
			setTimer0(1000);
		}

		break;
	case STATE_2:
		display7SEG(2);

		if (RST() == 1) {
			status = RESET;
			setTimer1(10000);
		}

		if (DEC() == 1) {
			status = STATE_1;
			setTimer1(10000);
		}

		if (INC() == 1) {
			status = STATE_3;
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (INC_long() == 1)) {
			status = STATE_3;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (DEC_long() == 1)) {
			status = STATE_1;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer1_flag == 1) && (timer0_flag == 1)) {
			status = STATE_1;
			setTimer0(1000);
		}

		break;
	case STATE_3:
		display7SEG(3);

		if (RST() == 1) {
			status = RESET;
			setTimer1(10000);
		}

		if (DEC() == 1) {
			status = STATE_2;
			setTimer1(10000);
		}

		if (INC() == 1) {
			status = STATE_4;
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (INC_long() == 1)) {
			status = STATE_4;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (DEC_long() == 1)) {
			status = STATE_2;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer1_flag == 1) && (timer0_flag == 1)) {
			status = STATE_2;
			setTimer0(1000);
		}

		break;
	case STATE_4:
		display7SEG(4);

		if (RST() == 1) {
			status = RESET;
			setTimer1(10000);
		}

		if (DEC() == 1) {
			status = STATE_3;
			setTimer1(10000);
		}

		if (INC() == 1) {
			status = STATE_5;
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (INC_long() == 1)) {
			status = STATE_5;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (DEC_long() == 1)) {
			status = STATE_3;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer1_flag == 1) && (timer0_flag == 1)) {
			status = STATE_3;
			setTimer0(1000);
		}

		break;
	case STATE_5:
		display7SEG(5);

		if (RST() == 1) {
			status = RESET;
			setTimer1(10000);
		}

		if (DEC() == 1) {
			status = STATE_4;
			setTimer1(10000);
		}

		if (INC() == 1) {
			status = STATE_6;
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (INC_long() == 1)) {
			status = STATE_6;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (DEC_long() == 1)) {
			status = STATE_4;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer1_flag == 1) && (timer0_flag == 1)) {
			status = STATE_4;
			setTimer0(1000);
		}

		break;
	case STATE_6:
		display7SEG(6);

		if (RST() == 1) {
			status = RESET;
			setTimer1(10000);
		}

		if (DEC() == 1) {
			status = STATE_5;
			setTimer1(10000);
		}

		if (INC() == 1) {
			status = STATE_7;
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (INC_long() == 1)) {
			status = STATE_7;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (DEC_long() == 1)) {
			status = STATE_5;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer1_flag == 1) && (timer0_flag == 1)) {
			status = STATE_5;
			setTimer0(1000);
		}

		break;
	case STATE_7:
		display7SEG(7);

		if (RST() == 1) {
			status = RESET;
			setTimer1(10000);
		}

		if (DEC() == 1) {
			status = STATE_6;
			setTimer1(10000);
		}

		if (INC() == 1) {
			status = STATE_8;
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (INC_long() == 1)) {
			status = STATE_8;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (DEC_long() == 1)) {
			status = STATE_6;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer1_flag == 1) && (timer0_flag == 1)) {
			status = STATE_6;
			setTimer0(1000);
		}

		break;
	case STATE_8:
		display7SEG(8);

		if (RST() == 1) {
			status = RESET;
			setTimer1(10000);
		}

		if (DEC() == 1) {
			status = STATE_7;
			setTimer1(10000);
		}

		if (INC() == 1) {
			status = STATE_9;
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (INC_long() == 1)) {
			status = STATE_9;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (DEC_long() == 1)) {
			status = STATE_7;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer1_flag == 1) && (timer0_flag == 1)) {
			status = STATE_7;
			setTimer0(1000);
		}

		break;
	case STATE_9:
		display7SEG(9);

		if (RST() == 1) {
			status = RESET;
			setTimer1(10000);
		}

		if (DEC() == 1) {
			status = STATE_8;
			setTimer1(10000);
		}

		if (INC() == 1) {
			status = STATE_0;
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (INC_long() == 1)) {
			status = STATE_0;
			setTimer0(1000);
			setTimer1(10000);
		}

		if ((timer0_flag == 1) && (DEC_long() == 1)) {
			status = STATE_8;
			setTimer0(1000);
			setTimer1(10000);
		}

		if (timer1_flag == 1) {
			status = STATE_8;
			setTimer0(1000);
		}

		break;
	default:
		break;
	}
}
