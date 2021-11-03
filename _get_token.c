#include "shell.h"
/**
 * _get_token - get token of string
 * @lineptrr: comman user
 * Return: To a pointer
 */
char **_get_token(char *lineptrr)
{
char **user_command = NULL;
char *token = NULL;
size_t i = 0;
int size = 0;
if (lineptrr == NULL)
return (NULL);
for (i = 0; lineptrr[i]; i++)
{
if (lineptrr[i] == ' ')
size++;
}
if ((size + 1) == _strlen(lineptrr))
return (NULL);
user_command = malloc(sizeof(char *) * (size + 2));
if (user_command == NULL)
return (NULL);
token = _strtok(lineptrr, " \n\t\r");
for (i = 0; token != NULL; i++)
{
user_command[i] = token;
token = _strtok(NULL, " \n\t\r");
}
user_command[i] = NULL;
return (user_command);
}
