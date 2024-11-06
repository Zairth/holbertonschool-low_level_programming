#include <stdio.h>

/**
*print_diagsums -  prints the sum of the two diagonals of a square matrix of integers
*@a: name of the array
*@size: number of element from the array to print
*Return: no return, void function
*/
void print_diagsums(int *a, int size)
{
	int i = ((size * size) / size) * 2;
	int result_forward = 0;
	int result_backward = 0;
	int j = 0, k = 0;
	int x = 0, y = 0;

	while (i > 0)
	{
		result_forward += a[(j * size) + k];
		i--;
		j++;
		k++;
		result_backward += a[(j * size) + k];
	}
}
