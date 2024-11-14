#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checkedy - allocates memory using malloc
*@b: variable that contain the char
*Return: void return
*/
void *malloc_checked(unsigned int b)
{
	void *a = NULL;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
