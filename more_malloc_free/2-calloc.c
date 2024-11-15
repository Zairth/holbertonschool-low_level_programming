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
	unsigned totalsize;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totalsize = nmemb * size;

	ptr = malloc(totalsize);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < totalsize; i++)
		ptr[i] = 0;

	return (ptr);
}
