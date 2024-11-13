#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates an array of chars
*@size: variable that contain the char
*@c: the char to put in the array
*Return: NULL if size = 0 || a pointer to the array, or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
	char *new_arr = malloc(sizeof(char) * size);

	if (new_arr == NULL || size == 0)
		return (NULL);

	return (new_arr);
}
