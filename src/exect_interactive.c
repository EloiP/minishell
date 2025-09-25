/*
An  interactive  shell is one started without non-option arguments (unless -s is specified) and
without the -c option whose standard input and error are both connected to terminals (as deter‐
mined  by  isatty(3)), or one started with the -i option.  PS1 is set and $- includes i if bash
is interactive, allowing a shell script or a startup file to test this state.

When an interactive login shell exits, or a  non-interactive  login  shell  executes  the  exit
builtin command, bash reads and executes commands from the file ~/.bash_logout, if it exists. 
*/

/*	man 7 signal
	SIGINT (2): interrupción de teclado (Ctrl-C)
	SIGQUIT (3): salida de teclado (Ctrl-\)
*/

void	exect_interactive(t_data *data)
{
	struct sigaction	act;
	
	ft_memset(&act, 0, sizeof(act));
	// ignora el (ctrl-\)
	act.sa_handler = SIG_IGN;
	sigaction(SIGQUIT, &act, NULL);
	// resetear el prompt. Este handler ha de estar activo antes de readline
	act.sa_handler = &reset_prompt;
	sigaction(SIGINT, &act, NULL);
	// guardar el input
	data->user_input = readline(PROMPT);
	if (data->user_input == NULL)
	{
		// TRUE ha de forzar la liberacion total
		free_data(data, TRUE);
		exit(0);
	}
	// ctrl-\ y ctrl-c
	act.sa_handler = &signal_print_newline;
	sigaction(SIGINT, &act, NULL);
	sigaction(SIGQUIT, &act, NULL);
	// si no esta vacio agregar al historial
	if (*data->user_input && data->user_input)
		add_history(data->user_input);
	if (parse_input(data) == TRUE)
		g_status = execute(data);
	else
		g_status = 1;
	free_data(data, FALSE);
}

// handler function :p
void	reset_prompt(int signo)
{
	(void)signo;
	write (1, "\n", 1);
	rl_on_new_line();
	rl_replace_line("");
	rl_display();
}
