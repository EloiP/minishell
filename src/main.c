//Aqui iria una funcion del codigo

#include "minishell.h"

int main(int argc, char **argv, char **env)
{
	if (argc == 1)
	{
		Interactive();
	}
	if (argc >= 1)
	{
		NonInteractive();
	}
	return (0);
}
