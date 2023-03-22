#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[2]; //static memory allocation
	arr[0] = 3;
	arr[1] = 4;
}

int main()
{
	int *arr;
	arr = malloc(2*sizeof(int)); // dynamic 
	*arr = 3;
	*(arr+1) = 4;
}
int main()
{
	int **arr = (int **)malloc(sizeof(int));
	*arr => pointer to the first element
	arr[2][3] = {{1,2,3}, {4,7,2}}


	*arr;
	**arr; //first element  in the array of arrays









