#include <stdio.h>
#include "main.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint(NULL);
	printf("%u\n", n);
	return (0);
}
