#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - Creates a new dog.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 *
 *Return: A dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_copy = malloc(strlen(name) + 1);
		if (name_copy == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		strcpy(name_copy, name);
	}
	else
		name_copy = NULL;

	if (owner != NULL)
	{
		owner_copy = malloc(strlen(owner) + 1);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(new_dog);
			return (NULL);
		}
		strcpy(owner_copy, owner);
	}
	else
		owner_copy = NULL;

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
