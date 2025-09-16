#include "minishell.h"

int	check_execution(t_data *data, int argc, char **argv)
{
	if (argc == 1)
		data.interactive = 1;
	else if (argc == 3)
		data.interactive = 0;
		// ahora se habrian de controlar las otras mariqueras
	else
	{
		ft_printf ("Numero de argumento incorrecto");
		return (1);
	}
	return (0);
}
