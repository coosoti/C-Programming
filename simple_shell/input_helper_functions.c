#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * clean_user_input - removes newlines and comments from user input
 * @input: input to be cleaned
 *
 * Return: void
 */
void clean_user_input(char *input)
{
    	int i = 0;

   	while (input[i] != '\0')
    	{
        	if (input[i] == '\n')
        	{	
            		input[i] = '\0'; // remove newline
            		break;
        	}
        	else if (input[i] == '#' && (i == 0 || input[i-1] == ' '))
        	{
            		input[i] = '\0'; // remove comment
            		break;
        	}
        	i++;
    	}
}

char **tokenize_user_input(const char *input, const char *delimiter)
{
	/* Return NULL if either input or delimiter is NULL*/
	if (input == NULL || delimiter == NULL) 
	{
       		return NULL;
    	}

   	/* Calculate the number of tokens in input*/
    	size_t num_tokens = 0;
    	char *copy = strdup(input);  /* Make a copy of input so we can modify it*/
    	if (copy == NULL) 
	{
        	return NULL;
   	}
    	char *token = strtok(copy, delimiter);
    	while (token != NULL) 
	{
        	num_tokens++;
        	token = strtok(NULL, delimiter);
    	}
        free(copy);

    	/* Allocate an array of strings to hold the tokens*/
    	char **tokens = malloc(sizeof(char *) * (num_tokens + 1));  /* Add 1 for NULL terminator*/
    	if (tokens == NULL) {
        	return NULL;
    	}

    	/* Tokenize the input and store the tokens in the array*/
    	size_t i = 0;
    	token = strtok((char *)input, delimiter);  /* Cast input to char * because strtok takes char */
    	while (token != NULL) 
	{
        	tokens[i++] = strdup(token);
        	token = strtok(NULL, delimiter);
    	}
    	tokens[i] = NULL;  /* NULL-terminate the array*/

    	return tokens;
}

