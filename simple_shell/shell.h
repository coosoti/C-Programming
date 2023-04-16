#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

/*Prompt*/
void hshPrompt(void);

/* User input helper functions */
void clean_user_input(char *input);
char **tokenize_user_input(const char *input, const char *delimiter);


/* execute commands*/
int execute_command(char **args);
	
#endif
