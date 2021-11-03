#include "shell.h"
/**
 *_strcat - copy string to another string.
 *@destt: char
 *@srcc: char
 *Return: destt
 *
 */
char *_strcat(char *destt, char *srcc)
{
int d = 0;
int s = 0;
while (destt[d] != '\0')
{
d++;
}
while (srcc[s] != '\0')
{
destt[d] = srcc[s];
d++;
s++;
}
destt[d] = '\0';
return (destt);
}
/**
 * _strcmp - compare the values of a string
 * @st1: character
 * @st2: character
 * Return: 0
 */
int _strcmp(char *st1, char *st2)
{
int a;
for (a = 0; st1[a] != '\0' && st2[a] != '\0'; a++)
{
if (st1[a] != st2[a])
return ((int)st1[a] - st2[a]);
}
return (0);
}
/**
 * _strlen - copies the string pointed to by srcc into destt
 * @s: A pointer
 * Return: char pointer to destt
 */
int _strlen(char *ss)
{
int ch = 0;
while (*(s + ch) != '\0')
{
ch++;
}
return (ch);
}
/**
 *_strncmp -  function that compares two strings.
 *@st1: string one
 *@st2: string two
 *@n: number of characters
 * Return: diference
 */
size_t _strncmp(char *st1, char *st2, size_t n)
{
size_t i, j;
for (j = 0; st1[j] != '\0' && j < n; j++)
{
i = st1[j] - st2[j];
if (i != 0)
{
return (i);
}
}
return (0);
}
/**
 * _strcpy - copies the string pointed to by srcc into destt
 * @destt: destination of the copy
 * @srcc: source of the copy
 *
 * Return: char pointer to destt
 */
char *_strcpy(char *destt, char *srcc)
{
int i = 0;
while (*(srcc + i) != '\0')
{
*(destt + i) = *(srcc + i);
++i;
}
*(dest + i) = *(srcc + i);
return (dest);
}
