#include "minishell.h"

int main(int argc, char **argv, char **env)
{
	t_data	data;

	ft_memset(&data, 0, sizeof(t_data));
	if (!check_execution(&data, argc, argv))
		exit_shelly();
	if (data.is_interactive)
		exec_interactive(&data);
	else
		exect_noninteractive(&data);
	exit_shelly(&data);
	return (0);
}
