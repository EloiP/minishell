//Aqui iria una funcion del codigo

#include "minishell.h"

int main(int argc, char **argv, char **env)
{
	if (argc == 1)
	{
		enver(env);
		argv[0][0] = ' ';
	//	Interactive();
	}
	if (argc >= 1)
	{
		argc = 2;
		//NonInteractive();
	}
	return (0);
}
