#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: the first string we are comparing with
 * @s2: the second string we are comparing with
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int i;

	a = 0;
	i = 0;
	while (a == 0 && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			a = s1[i] - s2[i];
		else
			a = 0;
		i++;
	}
	return (a);
}
