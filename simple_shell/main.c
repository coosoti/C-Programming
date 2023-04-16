#include "shell.h"
#include <stdio.h>
#include <unistd.h>


int main()
{
        char *line = NULL; /*buffer to hold user input*/
	size_t len = 0; /*size of the buffer*/
	ssize_t nreadChar; /* number of characters read*/
	while (1)
	{
		if (isatty(STDIN_FILENO) == 1) /*check if program is run interractively from a terminal*/
		{
			hshPrompt(); /*display shell prompt*/
		}
		/* read a line of input from the user*/
		nreadChar = getline(&line, &len, stdin);
		if (nreadChar == -1)
		{
			break;
		}
	}
        free(line);
	return 0;

}

