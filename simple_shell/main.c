#include "shell.h"
#include <stdio.h>
#include <unistd.h>


int main(int argc __attribute__((unused)), char **argv)
{
        char *line = NULL; /*buffer to hold user input*/
	size_t len = 0; /*size of the buffer*/
	ssize_t nreadChar; /* number of characters read*/
	FILE *fp;
	int i;
        
	/* Non-interactive mode: reads commands from the file or from command line arguments*/
	if (argc > 1)
	{
		for (i = 1; i < argc; i++) 
		{
          		fp = fopen(argv[i], "r");
            		if (fp == NULL) 
			{
                		perror("Error opening file");
                		exit(EXIT_FAILURE);
            		
			}
			nreadChar = getline(&line, &len, fp);
			if (nreadChar == -1)
				break;
			char **tokens = tokenize_user_input(line, " \t\n");
			execute_command(tokens);
			free(tokens);

		}
		fclose(fp);
	} else {
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
                		break; /*exit loop if EOF is reached or error occurs*/
            		}

			/* tokenize user input */
			char **tokens = tokenize_user_input(line, " \t\n");
			execute_command(tokens);
			free(tokens);

		}
	}

        free(line);
	return 0;

}

