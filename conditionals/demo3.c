#include <stdio.h>


int main()
{
	int x = 8, y = 6;
	if (x != y)
	{
		printf("%d is not equal to %d \n", x, y);
		if (x > y)
		{
			printf("%d is greater than %d\n", x, y);
		}
		else
		{
			printf("%d is less than %d\n", x, y);
		}
	}
	else
	{
		printf("%d is equal to %d \n", x, y);
	}
	return (0);
}
