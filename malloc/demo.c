#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;

    ptr = (int *) malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    *ptr = 98;
    printf("%d\n", *ptr);

    free(ptr);
    return 0;
}

