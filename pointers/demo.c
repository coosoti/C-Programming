#include <stdio.h>

int main()
{
	int x;
	int *p;
	x = 10;
	p = &x;

	printf("x is: %d\n", x);// prints the value of x
        printf("Address of x is: %p\n", &x);// prints the memory address of x 
	printf("x is: %d\n", *p); // prints the value p points to
	
	//Modifying the value in x using the pointer
	*p = 5; //value at address p => value of address being pointed by 'p'
	printf("x is: %d\n", x);

	return (0);
}
