#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main- It runs a simple shell that prompts the user to 
 *	a command and then it runs the command or display
 *	the error if command fails
 *
 * Return: Always 0
 */

int main()
{
	char *buf, *string, *cmd, *argv[], *envp[];
	int size;
	pid_t pid;

	buf = "#cisfun $ ";
	size = 100;
	string = NULL;
	argv[] = {NULL};
	envp[] = {NULL};

	while(1) //infinite loop
	{
		write(1,buf,strlen(buf));
		if(getline(&string,&size,stdin) == -1)
		{
			if(feof(stdin))
			{
				exit(EXIT_SUCCESS);
			}
			else
			{
				perror(".hsh ");
				exit (EXIT_FAILURE);
			}
		}
		cmd = string;
		pid = fork();
		if (pid == -1)
		{
			perror(".hsh ");
		}
		else if (pid == 0)
		{
			if (execve(cmd,argv,envp) == -1)
			{
				perror(".hsh");
			}
			exit (0);
		}
		else
		{
			wait (NULL);
		}
	}
	return 0;
}
