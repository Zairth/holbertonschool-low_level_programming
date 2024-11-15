#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*array_range - creates an array of integers.
*@min: the min value to insert in the array
*@max: the max value to insert in the array
*Return: void return
*/
int *array_range(int min, int max)
{
	int i;
	int *arr = NULL;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i] = i;

	return (arr);
}
