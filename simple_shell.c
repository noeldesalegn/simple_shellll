#include "shell.h"
/**
 * main - main arguments functions
 * @acc:count of argumnents
 * @av: arguments
 * @envi: environment
 * Return: _exit = 0.
 */
int main(int acc, char **av, char **envi)
{
char *getcommand = NULL, **user_command = NULL;
int pathValue = 0, _exit = 0, n = 0;
(void)acc;
while (1)
{
getcommand = _getline_command();
if (getcommand)
{
pathValue++;
user_command = _get_token(getcommand);
if (!user_command)
{
free(getcommand);
continue;
}
if ((!_strcmp(user_command[0], "exit")) && user_command[1] == NULL)
_exit_command(user_command, getcommand, _exit);
if (!_strcmp(user_command[0], "envi"))
_getenv(envi);
else
{
n = _values_path(&user_command[0], envi);
_exit = _fork_fun(user_command, av, envi, getcommand, pathValue, n);
if (n == 0)
free(user_command[0]);
}
free(user_command);
}
else
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1);
exit(_exit);
}
free(getcommand);
}
return (_exit);
}
