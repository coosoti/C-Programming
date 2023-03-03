#include "main.h"

/**
 * _strncat - concatinate strings with the n number of scr
 * @dest: destination pointer
 * @src: scource pointer
 * @n: number of bytes
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;
	int lenght_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		lenght_dest += 1;
	}
	for (i = (lenght_dest); i < (lenght_dest + n) && src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
