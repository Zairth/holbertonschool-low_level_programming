#include <stdio.h>
#include <stdlib.h>

/**
*int_index - Write a function that searches for an integer.
*@array: the array that contain the int to work on
*@size: size of the array
*@cmp: the function i need to use
*Return: void return
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
		cmp(array[i]);
	}

	return (-1);
}
