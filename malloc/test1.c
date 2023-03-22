#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *ptr;
    ptr = (malloc(sizeof(int)));
    *ptr = 98;
    printf("%d\n", *ptr);
    return (0);
}
