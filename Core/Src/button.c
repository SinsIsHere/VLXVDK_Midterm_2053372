/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: User
 */

#include "button.h"

int KeyReg0_INC = NORMAL_STATE;
int KeyReg1_INC = NORMAL_STATE;
int KeyReg2_INC = NORMAL_STATE;
int KeyReg3_INC = NORMAL_STATE;

int KeyReg0_RST = NORMAL_STATE;
int KeyReg1_RST = NORMAL_STATE;
int KeyReg2_RST = NORMAL_STATE;
int KeyReg3_RST = NORMAL_STATE;

int KeyReg0_DEC = NORMAL_STATE;
int KeyReg1_DEC = NORMAL_STATE;
int KeyReg2_DEC = NORMAL_STATE;
int KeyReg3_DEC = NORMAL_STATE;

int TimerForKeyPressed_INC = 300;
int TimerForKeyPressed_DEC = 300;

int INC_flag = 0;
int RESET_flag = 0;
int DEC_flag = 0;

int INC_long_flag = 0;
int DEC_long_flag = 0;

int RST() {
	if (RESET_flag == 1) {
		RESET_flag = 0;
		return 1;
	}
	return 0;
}

int INC() {
	if (INC_flag == 1) {
		INC_flag = 0;
		return 1;
	}
	return 0;
}

int DEC() {
	if (DEC_flag == 1) {
		DEC_flag = 0;
		return 1;
	}
	return 0;
}



int INC_long() {
	if (INC_long_flag == 1) {
		return 1;
	}
	return 0;
}


int DEC_long() {
	if (DEC_long_flag == 1) {
		return 1;
	}
	return 0;
}




void getKeyInputRST() {
	KeyReg0_RST = KeyReg1_RST;
	KeyReg1_RST = KeyReg2_RST;
	KeyReg2_RST = HAL_GPIO_ReadPin(RESET_GPIO_Port, RESET_Pin);
	if ((KeyReg0_RST == KeyReg1_RST) && (KeyReg1_RST == KeyReg2_RST)) {
		if (KeyReg3_RST != KeyReg2_RST) {
			KeyReg3_RST = KeyReg2_RST;

			if (KeyReg2_RST == PRESSED_STATE) {
				RESET_flag = 1;
			}
		}
	}
}






void getKeyInputINC() {
	KeyReg0_INC = KeyReg1_INC;
	KeyReg1_INC = KeyReg2_INC;
	KeyReg2_INC = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
	if ((KeyReg0_INC == KeyReg1_INC) && (KeyReg1_INC == KeyReg2_INC)) {
		if (KeyReg3_INC != KeyReg2_INC) {
			KeyReg3_INC = KeyReg2_INC;

			if (KeyReg2_INC == PRESSED_STATE) {
				TimerForKeyPressed_INC = 300;
			}
			else {
				if (INC_long_flag == 1) {
					INC_flag = 0;
				}
				else {
					INC_flag = 1;
				}
				INC_long_flag = 0;
			}
		}
		else {
			if (TimerForKeyPressed_INC > 0) {
				TimerForKeyPressed_INC--;
				if (TimerForKeyPressed_INC <= 0) {
					if (KeyReg2_INC == PRESSED_STATE) {
						//HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
						INC_long_flag = 1;
					}
					TimerForKeyPressed_INC = 300;
				}
			}
		}
	}
}





void getKeyInputDEC() {
	KeyReg0_DEC = KeyReg1_DEC;
	KeyReg1_DEC = KeyReg2_DEC;
	KeyReg2_DEC = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);
	if ((KeyReg0_DEC == KeyReg1_DEC) && (KeyReg1_DEC == KeyReg2_DEC)) {
		if (KeyReg3_DEC != KeyReg2_DEC) {
			KeyReg3_DEC = KeyReg2_DEC;

			if (KeyReg2_DEC == PRESSED_STATE) {
				TimerForKeyPressed_DEC = 300;
			}
			else {
				if (DEC_long_flag == 1) {
					DEC_flag = 0;
				}
				else {
					DEC_flag = 1;
				}
				DEC_long_flag = 0;
			}
		}
		else {
			if (TimerForKeyPressed_DEC > 0) {
				TimerForKeyPressed_DEC--;
				if (TimerForKeyPressed_DEC <= 0) {
					if (KeyReg2_DEC == PRESSED_STATE) {
						//HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
						DEC_long_flag = 1;
					}
					TimerForKeyPressed_DEC = 300;
				}
			}
		}
	}
}

