#include "uart.h"
#include "cli_command.h"
#define MAX_DATA_UART 100

char buff_uart[MAX_DATA_UART];
static uint8_t uart_len = 0;
uint8_t uart_flag = 0;

void receive_data(uint8_t data_rx)
{
	if(data_rx == '\n')
	{
		buff_uart[uart_len++] = '\0';
		uart_flag = 1;
	}
	else
	{
		buff_uart[uart_len++] = data_rx;
	}
}

void uart_handle()
{
	if(uart_flag)
	{
		cli_command_excute(buff_uart, uart_len);
		uart_len = 0;
		uart_flag = 0;
	}
}
