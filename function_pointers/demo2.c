#include <stdio.h>

int replace_odd_even(int *array, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0)
		{
			array[i] = 0;
		} else {
			array[i] = 1;
		}
	}
}

void print_array(int *array, size_t size) 
{	
	printf("[");
    	for (int i = 0; i < size; i++) 
	{
        	printf("%d", array[i]);
        	if (i < size - 1) 
		{
            		printf(", ");
        	}
    	}
    	printf("]\n");
}

int main()
{
	int array[] = {2, 5, 3, 6, 4, 10};
	size_t size = sizeof(array) / sizeof(int);

	printf("This is the original array: ");
	print_array(array, size);

	printf("Modified array: ");
        replace_odd_even(array, size);
	print_array(array, size);
	return 0;
}
