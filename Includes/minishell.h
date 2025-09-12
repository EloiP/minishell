#ifndef ELOI_H
# define ELOI_H

//Header del proyecto

//Includes de las librerias que aparecen en el readme
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <dirent.h>
#include <termios.h>
#include <termcap.h>

//Definiciones de estructuras de datos y typedefs utilizados

//Definiciones de funciones del proyecto

//Comprovadores de definiciones
int	ft_isblank(int c);
int	ft_ismeta(int c);
int	ft_isspace(int c);

//Builtins
void	enver(char**environ);
#endif
