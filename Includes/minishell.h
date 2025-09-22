#ifndef ELOI_H
# define ELOI_H

//Header del proyecto

//Definiciones de estructuras de datos y typedefs utilizados

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
