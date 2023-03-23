#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main()
{
	int (*func_ptr)(int, int);
        func_ptr = add; // func_ptr = &add; These two are equivalent
	int result;
	result = (*func_ptr)(2,4); // result = func_ptr(2,4);

	printf("%d\n", result);
	return 0;
}


