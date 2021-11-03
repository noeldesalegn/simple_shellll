#include "shell.h"
/**
 * _getline_command - print "#cisfun$ " and wait for the user type something.
 * Return: line of string input for user
 */
char *_getline_command(void)
{
char *lineptrr = NULL;
size_t charter_user = 0;
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$ ", 2);
if (getline(&lineptrr, &charter_user, stdin) == -1)
{
free(lineptrr);
return (NULL);
}
return (lineptrr);
}
