#ifndef MAIN_H
#define MAIN_H

#include <dirent.h>
#include <fcntl.h>
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define TOK_DELIM " \t\r\n"
#define RED "\033[0;31m"
#define RESET "\e[0m"


int _putchar(char c);
void print_prompt(void);
char **split_line(char *line);
int shell_exit(void);
void loop(void);
int execute(char **args);
int _strcmp(char *s1, char *s2);
int my_execvp(char *name, char **argv);

#endif
