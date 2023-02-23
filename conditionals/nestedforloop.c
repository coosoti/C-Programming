#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}

