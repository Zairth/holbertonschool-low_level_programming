#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - Creates a new dog.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 *Return: Pointer to new dog_t or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Allouer de la mémoire pour la structure */
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/* Allouer de la mémoire pour name */
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);

	/* Allouer de la mémoire pour owner */
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
