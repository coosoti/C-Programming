// C program to implement 
#include <stdio.h>

// Driver code
int main()
{
	int n, x;

	printf("Enter the number n: ");
	scanf("%d", &n);

	printf("The entered number is: %d\n", n);

	x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);

	}

	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);

	}

	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);

	}

	return (0);
}

