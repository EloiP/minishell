#ifndef MINISHELL_H
# define MINISHELL_H

// Includes
# include "includes.h"

//Definiciones de estructuras de datos y typedefs utilizados
# define PROMPT ">>> shelly: "

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

//Pipex
typedef signed int	t_pid;
char	*getenvar(char *name, char **env);
void	cierra(int in, int out);
void	finish(int error);
void	ft_free_pointstring(char **tab);
void	doblefree(char **a, char **b);
int		checkacces(char **s_cmd, char **allpath, char **exec);
int		notempty(char **a, char **b);
#endif
