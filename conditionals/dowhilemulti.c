#include <stdio.h>

int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        } while (j <= 5);
        i++;
        printf("\n");
    } while (i <= 5);
    return 0;
}

