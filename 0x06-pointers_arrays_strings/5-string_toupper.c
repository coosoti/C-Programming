#include "main.h"
/**
 * string_toupper - change all the lower case to upper case
 * @str: a pointer to the string we want to change
 * Return: a pointer
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
