#include "my_shell.h"

/**
 * handle_signal - action for handling SIGINT
 * @sig: Signal value (e.g., SIGINT)
 */
void handle_signal(int sig)
{
	if (sig == SIGINT)
		write(STDOUT_FILENO, "\n($) ", 5);
}

/**
 * get_executable_path - function to retrieve the PATH from environment variables
 * @envp: Pointer to the environment variables
 *
 * Return: Pointer to the PATH string
 */
char *get_executable_path(char **envp)
{
	int i = 0;
	char *env = NULL;

	while (envp[i])
	{
		if (!_strncmp("PATH", envp[i], 4))
			env = envp[i] + 5;
		i++;
	}
	return (env);
}

/**
 * _strcmp - function that compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: 0 if the strings are equal, otherwise a numerical difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k, m = 0;

	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[j] != 0)
	{
		j++;
	}
	for (k = 0; k <= i && k <= j; k++)
	{
		if (s1[k] != s2[k])
		{
			m = (s1[k] - '0') - (s2[k] - '0');
			break;
		}
	}
	return (m);
}

/**
 * print_env - function to print environment variables
 * @envp: Pointer to the environment variables
 */
void print_env(char **envp)
{
	int i = 0;

	while (envp[i])
	{
		write(STDOUT_FILENO, envp[i], _strlen(envp[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

/**
 * free_function - function to free memory allocated for a pointer to pointer
 * @double_point: Pointer to pointer
 */
void free_function(char **double_point)
{
	char **tmp = double_point;

	if (!double_point)
		return;
	while (*double_point)
		free(*double_point++);
	free(tmp);
}

