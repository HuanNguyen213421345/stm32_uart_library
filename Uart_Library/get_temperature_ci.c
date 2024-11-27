#include "get_temperature_ci.h"
#include "response_ci.h"
#include "lm35.h"
#include "stdlib.h"
//extern UART_HandleTypeDef huart1;//extern: ĐỂ SỬ DỤNG BIẾN ĐÃ TỒN TẠI TRONG PROJECT
void get_temperature(char **arguv,uint8_t arg_num)
{
	if(arg_num < 2)
	{
		response_print("Don't enough arg, arg = %d", arg_num);
		return;
	}
	if(arg_num > 2)
	{
		response_print("Too much arg, arg = %d", arg_num);
		return;
	}

	uint8_t channel = atoi(arguv[1]);
	float myFloat = 0.151556;
	response_print("temperature = %f",LM35_Gettemp(channel));
}





























