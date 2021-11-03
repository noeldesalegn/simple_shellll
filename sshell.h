#ifndef SHELL_H
#define SHELL_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
extern char **environ;
int _strcmp(char *st1, char *st2);
size_t _strncmp(char *st1, char *st2, size_t n);
int _strlen(char *ss);
char *_strcpy(char *destt, char *srcc);
char *_strcat(char *destt, char *srcc);
int _putchar(char c);
char *_get_path(char **envv);
int _values_path(char **arg, char **envv);
char *_getline_command(void);
void _getenv(char **envv);
char **_get_token(char *lineptrr);
void _exit_command(char **args, char *lineptrr, int _exit);
int _fork_fun(char **arg, char **av, char **envv,
char *lineptrr, int np, int c);
char *_strtok(char *str, const char *delim);
#endif /* SHELL_H */
