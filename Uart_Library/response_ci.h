
#ifndef RESPONSE_CI_H_
#define RESPONSE_CI_H_

#include "stm32f1xx_hal.h"

void response_printf(const char* str, ...);
void response_init(UART_HandleTypeDef *_huart_print);

#endif
