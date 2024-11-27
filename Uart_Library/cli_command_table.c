#include "cli_command_table.h"
#include "cli_types.h"
#include "get_temperature_ci.h"
#include "set_temperature.h"

const cli_command_infor_t command_infor_gettemp =
{
	get_temperature,
	"get temp form LM35"
};

const cli_command_infor_t command_infor_settemp_max =
{
	set_temperature_max,
	"set temp max"
};

const cli_command_entry_t command_entry_table[] =
{
	{"gettemp",&command_infor_gettemp},
	{"setTempMax",&command_infor_settemp_max},
	{NULL,NULL}
};
