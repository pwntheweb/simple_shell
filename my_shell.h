#ifndef _MY_SHELL
#define _MY_SHELL

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

/* functions in string_parser.c: */
int words_in_string(char *str);
char **split_string(char *str, char *delim);
void process_input(char *buffer, char **envp);
int _atoi(char *s);
int exit_function(char **array_words, char *buffer);
/* functions in process_management.c: */
int custom_fork(char **arr, char **envp);
int check_in_path(char **array_words, char *e_path);
/* functions in string_operations.c: */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strncmp(char *s1, char *s2, int n);
char *_strcat(char *dest, char *src);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/* functions in additional_functions.c: */
void handle_signal(int sig);
char *get_executable_path(char **envp);
int _strcmp(char *s1, char *s2);
void print_env(char **envp);
void free_function(char **double_point);
/* functions in main.c: */
void index_function(char *buffer, char **envp);

void execute_commands(char **commands);
#endif /* _MY_SHELL */
