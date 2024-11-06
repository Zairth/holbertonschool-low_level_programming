#include <stdio.h>

/**
*print_diagsums - print the sum of the 2 diagonal of a square matrix of integer
*@a: name of the array
*@size: number of element from the array to print
*Return: no return, void function
*/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int result_forward = 0;
	int result_backward = 0;
	int j = 0, k = 0;
	int n = 1;

	while (i < size)
	{
		result_forward += a[(j * size) + k];
		j++;
		k++;

		result_backward += a[((size) * n) - n];
		n++;

		i++;
	}

	printf("%d, %d\n", result_forward, result_backward);
}
