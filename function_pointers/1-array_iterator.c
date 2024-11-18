#include <stdio.h>
#include <stdlib.h>

/**
*array_iterator - executes a function
*@array: the array that contain the int to work on
*@size: size of the array
*@action: the function i need to use
*Return: void return
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size <= 0 || action == NULL)
		exit(1);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
