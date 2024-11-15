#include <stdio.h>
#include <stdlib.h>
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
	dog_t *new_dog;
	int i, name_len = 0, owner_len = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name && name[name_len] != '\0')
		name_len++;
	while (owner && owner[owner_len] != '\0')
		owner_len++;

	new_dog->name = malloc(name_len + 1);
	new_dog->owner = malloc(owner_len + 1);
	if ((name && new_dog->name == NULL) || (owner && new_dog->owner == NULL))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i < owner_len; i++)
		new_dog->owner[i] = owner[i];

	if (name)
		new_dog->name[name_len] = '\0';
	if (owner)
		new_dog->owner[owner_len] = '\0';

	new_dog->age = age;

	return (new_dog);
}
