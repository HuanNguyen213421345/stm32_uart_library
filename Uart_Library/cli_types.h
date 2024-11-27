
#ifndef CLI_TYPES_H_
#define CLI_TYPES_H_
#include"stdint.h"

typedef void (*cli_command_func_t) (char **arguv,
		uint8_t arg_num);

typedef struct
{
	cli_command_func_t function;
	char *help;
}cli_command_infor_t;

typedef struct
{
	const char *name;
	const cli_command_infor_t *command_infor;

}cli_command_entry_t;
#endif /* CLI_TYPES_H_ */
