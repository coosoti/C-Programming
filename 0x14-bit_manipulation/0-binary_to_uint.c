#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -  binary number to an unsigned int.
 * @b: Pointer to the string
 * Return: Always return NULL or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, m = 1;
	int h;

	while (!b)
		return (0);

	for (h = 0; b[h];)
		h++;

	for (h -= 1; h >= 0; h--)
	{
		if (b[h] != '0' && b[h] != '1')
			return (0);

		n += (b[h] - '0') * m;
		m *= 2;
	}

	return (n);
}
