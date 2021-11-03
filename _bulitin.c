#include "shell.h"
/**
 * _exit_command - this function closes the simple_shell when
 * @arg: pointer with the direction argument.
 * @lineptrr: standar input string
 * @_exit: value of exit
 * Return: None
 */
void _exit_command(char **arg, char *lineptrr, int _exit)
{
int exit_status = 0;
if (!arg[1])
{
free(lineptrr);
free(arg);
exit(_exit);
}
exit_status = atoi(arg[1]);
free(lineptrr);
free(arg);
exit(exit_status);
}
/**
 *_getenv - function to get all envv
 *@envv: enviroment
 *Return: 0
 */
void _getenv(char **envv)
{
size_t run = 0;
while (envv[run])
{
write(STDOUT_FILENO, envv[run], _strlen(envv[run]));
write(STDOUT_FILENO, "\n", 1);
run++;
}
}
