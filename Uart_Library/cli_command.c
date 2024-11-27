#include "cli_command.h"
#include "string.h"
#include "response_ci.h"
#include "get_temperature_ci.h"
#include "cli_types.h"

extern const cli_command_entry_t command_entry_table [];

const cli_command_infor_t* find_command_infor(char *cmd)
{
	 const cli_command_entry_t *command_entry = command_entry_table;//Tro den phan tu dau tien cua command_entry_table;

	 while(command_entry->command_infor != NULL)
	 {
		 if(strcmp(command_entry->name,cmd) == 0)
		 {
			 return command_entry->command_infor;
		 }
		 command_entry++;
	 }
	 return NULL;
}

void cli_command_excute(char* buff_uart, uint8_t len)
{
	char *arguv[10];
	uint8_t arg_num = 0;
	char *pch;
	pch = strtok(buff_uart," ");
	while(pch != NULL)
	{
		arguv[arg_num++] = pch;
		pch = strtok(NULL," ");
	}
	cli_command_infor_t *command_infor = find_command_infor(arguv[0]);
	if(command_infor != NULL)
	{
		command_infor->function(arguv, arg_num);
	}
	else
	{
		response_print("find not found command\n");
	}
}


