/*
 * global.c
 *
 *  Created on: Nov 5, 2022
 *      Author: User
 */

#include "global.h"

void display7SEG(int num) {
	if (num == 0) {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 1);
	}
	else if (num == 1) {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 1);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 1);
	}
	else if (num == 2) {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 1);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 0);
	}
	else if (num == 3) {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 0);
	}
	else if (num == 4) {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 1);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 0);
	}
	else if (num == 5) {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 1);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 0);
	}
	else if (num == 6) {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 1);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 0);
	}
	else if (num == 7) {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 1);
	}
	else if (num == 8) {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 0);
	}
	else if (num == 9) {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 0);
	}
	else {
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, 1);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, 1);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, 1);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, 1);
	}
}

int status = 0;
