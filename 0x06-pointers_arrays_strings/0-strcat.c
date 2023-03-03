#include "main.h"

/**
 * _strcat - concatinate strings
 * @dest: destination string
 * @scr: scource string
 * Return: a pointer
 */

char *_strcat(char *dest, char *scr)
{
	int i;
	int j = 0;
	int lenght_dest = 0;
	int lenght_scr = 0;

	for (i = 0; dest[i] != '\0'; i++)
		lenght_dest += 1;

	for (i = 0; scr[i] != '\0'; i++)
		lenght_scr += 1;


	for (i = (lenght_dest); i <= (lenght_dest + lenght_scr); i++)
	{
		dest[i] = scr[j];
		j++;
	}
	return (dest);
}
