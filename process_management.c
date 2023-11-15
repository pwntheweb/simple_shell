#include "my_shell.h"

/**
 * custom_fork - Function to create parent and child processes
 * @arr: Array with the information for execution
 * @envp: Environment variables
 *
 * Return: 0 on success, -1 on failure
 */
int custom_fork(char **arr, char **envp)
{
	int status;
	pid_t pid;

	switch (pid = fork())
	{
		case -1:
			perror("Error");
			return (-1);
		case 0:
			execve(arr[0], arr, envp);
			perror("Error");
			break;
		default:
			do
				waitpid(pid, &status, WUNTRACED);
			while (WIFEXITED(status) == 0 && WIFSIGNALED(status) == 0);
			break;
	}
	return (0);
}
/**
 * check_in_path - Check if the command is found in the PATH
 * @arr_words: Array with the command and arguments
 * @e_path: PATH
 *
 * Return: 1 on success, 0 on failure
 */
int check_in_path(char **arr_words, char *e_path)
{
	int flag = 0, len_tok, idx = 0, len_arr;
	unsigned int new_size, old_size;
	char **cat_words;
	struct stat find_command;

	flag = 0;
	cat_words = split_string(e_path, ":");
	len_arr = _strlen(arr_words[0]);
	while (cat_words[idx])
	{
		len_tok = _strlen(cat_words[idx]) + 2;
		new_size = (sizeof(char) * (len_tok + len_arr));
		old_size = (_strlen(cat_words[idx]) + 1);
		cat_words[idx] = _realloc(cat_words[idx], old_size, new_size);
		if (!cat_words[idx])
			return (0);
		_strcat(cat_words[idx], "/");
		_strcat(cat_words[idx], arr_words[0]);
		if (stat(cat_words[idx], &find_command) == 0)
		{
			arr_words[0] = _realloc(arr_words[0], (len_arr + 1), new_size);
			if (!arr_words[0])
				return (0);
			_strcpy(arr_words[0], cat_words[idx]);
			flag = 1;
			break;
		}
		idx++;
	}
	free_function(cat_words);
	return (flag);
}
