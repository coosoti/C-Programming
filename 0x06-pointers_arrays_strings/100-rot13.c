#include "main.h"
/**
 * rot13 - encode a string in rot13
 * @str: a pointer
 * Return: a pointer
 */
char *rot13(char *str)
{
	int i;
	int end_loop = 0;
	int j;
	char list[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char map[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		end_loop = 0;
		for (j = 0; j < 52 && end_loop == 0; j++)
		{
			if (str[i] == list[j])
			{
				str[i] = map[j];
				end_loop = 1;
			}
		}
	}
	return (str);
}
