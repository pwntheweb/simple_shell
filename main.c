#include "my_shell.h"

int main(void)
{
	char *buffer = NULL;
	size_t bufsize = 0;
	
	char *envp[] = {"PATH=/bin", "HOME=/home/vagrant", NULL};

    while (1) 
    {
	    printf("my_shell$ ");
	    getline(&buffer, &bufsize, stdin);
	    
	    if (strcmp(buffer, "exit\n") == 0) 
	    {
		    free(buffer);
		    break;
        }
	    index_function(buffer, envp);
    }
    free(buffer);
    return (0);
}

