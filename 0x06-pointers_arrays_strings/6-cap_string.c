#include "main.h"
/**
 * cap_string - capitalize all the character
 * @str: a pointer to the string we want to capitalize
 * Return: a pointer
 */
char *cap_string(char *str)
{
	int i;
	char list[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		int j = 0;
		int a = 0;

	while (a < 12 && j == 0)
	{
		if (str[i] == list[a])
		j = 1;
		a++;
	}
		if (j == 1)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}

	}
		return (str);

}
