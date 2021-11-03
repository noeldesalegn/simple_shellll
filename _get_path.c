#include "shell.h"
/**
 * _get_path - get variable PATH.
 * @envv: enviromente local
 * Return: value of PATH.
 */
char *_get_path(char **envv)
{
size_t index = 0, var = 0, count = 5;
char *path = NULL;
for (index = 0; _strncmp(envv[index], "PATH=", 5);
index++);
if (envv[index] == NULL)
return (NULL);
for (count = 5; envv[index][var]; var++, count++);
path = malloc(sizeof(char) * (count + 1));
if (path == NULL)
return (NULL);
for (var = 5, count = 0; envv[index][var]; var++, count++)
path[count] = envv[index][var];
path[count] = '\0';
return (path);
}
