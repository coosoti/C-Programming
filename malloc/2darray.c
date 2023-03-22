#include <stdio.h>
#include <stdlib.h>

int main() {
	int **arr;
    	int rows = 3;
    	int cols = 4;
	
   	 // Allocate memory for the 2D array
    	arr = malloc(rows * sizeof(int *));
	if (arr == NULL) {
    		return (NULL);
	}
	for (int i = 0; i < rows; i++) {
    		arr[i] = malloc(cols * sizeof(int));
    		if (arr[i] == NULL) {
        		for (int j = 0; j < i; j++) {
            			free(arr[j]);
        		}
        		free(arr);
        		return (NULL);
    		}	
	}

	// Initialize the array
	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
        		arr[i][j] = i * j;
    		}
	}

	// Print the array
	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
        		printf("%d ", arr[i][j]);
    		}
    		printf("\n");
	}

	// Free the memory
	for (int i = 0; i < rows; i++) {
    		free(arr[i]);
	}
	free(arr);

	return 0;
}
