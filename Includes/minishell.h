#ifndef MINISHELL_H
# define MINISHELL_H

// Includes
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <sys/ioctl.h>
# include <signal.h>
# include <dirent.h>
# include <termios.h>
# include <termcap.h>
# include "libft.h"

// Macros
# define	TRUE 1
# define	FALSE 0

// Data structures
typedef struct	s_data
{
	int			is_interactive;
	t_token		*token;
	char		*user_input;
	char		**env;
	char		*working_dir;
	char		*old_working_dir;
	t_command	*cmd;
	pid_t		pid;
}	t_data;

//Definiciones de funciones del proyecto

//Comprovadores de definiciones
int	ft_isblank(int c);
int	ft_ismeta(int c);
int	ft_isspace(int c);

//Builtins
void	enver(char**environ);

#endif
