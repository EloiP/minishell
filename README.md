# minishell
Our own terminal 42 project.

# TO DO

## Organizacion
Tokenizacion
- [ ] Parseo de token
- [ ] Elimina significado especial
- [ ] Expande significado especial
- [ ] Shell expansion
- [ ] Redireccion
Ejecucion
- [ ] Ejecutar comando
- [ ] Interpretar operadores
- [ ] Espera exit status de comando
- [ ] Hace exit statuss disponible para inspeccion o proceso
## Subject
- [ ] Entrada
- [ ] Historial
- [ ] Global de la senyal
- [ ] Redirecciones
- [ ] Pipes |
- [ ] Entorno
- [ ] $?
- [ ]
## Interactivos
- [ ] cntr-C
- [ ] cntr-D
- [ ] cntr-\
## builtins
- [ ] echo -n
- [ ] cd
- [ ] pwd
- [ ] export
- [ ] unset
- [x] env
- [ ] exit
## Isdefinition
Son funciones que comprueban y devuelven booleanos.
- [x] metacharacter
- [ ] word
- [ ] token
- [ ] filename
- [x] blank
- [x] whitespace
- [ ] Control operator
- [ ] Redirection operator
## Extras
- [ ] &&
- [ ] ||
- [ ] *

# Funciones permitidas

## Estudiadas anteriormente
- int printf(char *, ...): Imprime texto.
- malloc
- free
- write
- access
- open
- read
- close
- fork
- wait
- waitpid,
- execve
- dup
- dup2
- pipe
- exit
- strerror
- perror
## Nuevas
- readline
- rl_clear_history
- rl_on_new_line
- rl_replace_line
- rl_redisplay
- add_history
- wait3
- wait4
- signal
- sigaction
- kill
- getcwd
- chdir
- stat
- lstat
- fstat
- unlink
- opendir
- readdir
- closedir
- isatty
- ttyname
- ttyslot
- ioctl
- getenv
- tcsetattr
- tcgetattr
- tgetent
- tgetflag
- tgetnum
- tgetstr
- tgoto
- tputs

[Explicacion de cada funcion y su cabecera](https://42-cursus.gitbook.io/guide/3-rank-03/minishell/functions)

# Comandos utiles

```ls -l /proc/$$/fd
```
Sirve para ver todos los filedescriptors abiertos en un momento.
# Errores habituales

En lugar de usar el infile y outfile, usa el infile y un temporal que despues escribas en el outfile para evitar errores en el caso de que el infile sea igual que el outfile.

No poner 42headers hasta terminar el proyecto.

Hacer una carpeta para las cosas que sirven para ambas

> file echo "hola" << start > file1 | echo "adios" << end > file2

Hacer un .h por persona y uno de librerias para evitar merge conflict.
