#include "main.h"
#include <stdio.h>

/**
*print_array - prints n elements of an array of integers
*@a: name of the array
*@n: number of element from the array to print
*Return: no return, void function
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
