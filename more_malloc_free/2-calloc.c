#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*_calloc - allocates memory for an array, using malloc.
*@nmemb: number of element in the array
*@size: size of the nmemb element
*Return: void return
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
