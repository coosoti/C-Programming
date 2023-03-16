#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));

    // Initialize the array
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    // Print the array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the memory
    free(arr);

    return 0;
}

