#include "main.h"
/**
 * reverse_array - reverse a string
 * @a: a pointer pointing to a string
 * @n: an integer
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
