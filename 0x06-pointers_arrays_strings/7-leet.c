#include "main.h"

/**
 * leet - encode your string
 * @str: a pointer to the string you want to encode
 * Return: a pointer
 */
char *leet(char *str)
	{
		int i;
		int j;
		int end_loop;
		char list[] = {'a', 'A', 'e', 'E', 'o', 'O', 'l', 'L', 't', 'T'};
		char map[] = {'4', '4', '3', '3', '0', '0', '1', '1', '7', '7'};

		for (i = 0; str[i] != '\0'; i++)
		{
			j = 0;
			end_loop = 0;
			for (; j < 10 && end_loop == 0; j++)
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
