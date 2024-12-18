#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - Write a function that frees dogs.
 *@d: The name of the dog to free
 *Return: void return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
