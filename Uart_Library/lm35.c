#include "lm35.h"
float temp = 10.5;

float LM35_Gettemp(uint8_t channel)
{
	//float temp = 10.5;
	if(channel == 0) temp = 20.5;
	if(channel == 1) temp = 30.5;
	return temp;
}

