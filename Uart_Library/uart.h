#ifndef UART_H_
#define UART_H_

#include "stdint.h"
#include "stm32f1xx_hal.h"
#include "string.h"

void receive_data(uint8_t data_rx);
void uart_handle(void);

#endif /* UART_H_ */
