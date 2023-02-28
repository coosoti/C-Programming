#include <stdio.h>

int main()
{
	int x;
	int *p;
	x = 10;
	p = &x;
	printf("%p\n", p);
	printf("%p\n", p+1);
	return 0;
}
