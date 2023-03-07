#include <stdio.h>

int main()
{
	int x; // normal variable of type int
	int *ptr;// declaring a pointer => pointer is an address of a variable
	x = 5;
	ptr = &x; // Prints address of x

	printf("x is : %d\n", x); //print the value of x  
	printf("Memory address of x is: %p\n", ptr); // address where x is located
	
	// Pointer +> how do we get the variable memory address
	printf("%d\n", *ptr); // value at the address ptr(&x); 
	return 0;
}
	
