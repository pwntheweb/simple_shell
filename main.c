#include "my_shell.h"
/**
 * main - Entry point
 * @argc: not used
 * @argv: arguments to proccess
 * @envp: array wth environment
 * index_function: determine appropriate action
 * Return: 0 Success
 */
int main(int argc, char **argv, char **envp)
{
	char *buffer = NULL;
	size_t bufsize = 0;
	ssize_t prints = 1;
	int count = 0;

	(void)argc;
	(void)argv;

	while (prints > 0)
	{
		signal(SIGINT, handle_signal);
		if (isatty(STDOUT_FILENO))
			write(STDOUT_FILENO, "(?) ", 4);
		prints = getline(&buffer, &bufsize, stdin);
		if (prints == -1)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			break;
		}
		count = words_in_string(buffer);
		if (count > 0)
			index_function(buffer, envp);
	}
	free(buffer);
	return (0);
}
