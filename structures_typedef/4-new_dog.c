#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*_strcpy - copies the string pointed to by src, to dest
*@dest: the destination adress to copy the str
*@src: the src value to copy to the new adress destination
*Return: char return dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (src[j] != '\0')
		j++;

	for (i = 0; i <= j; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 *new_dog - Creates a new dog.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 *Return: Pointer to new dog_t or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, y;

	/* Allouer de la mémoire pour la structure */
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
	;

	/* Allouer de la mémoire pour name */
	new_dog->name = malloc(i + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);

	for (y = 0; owner[y] != '\0'; y++)
	;

	/* Allouer de la mémoire pour owner */
	new_dog->owner = malloc(y + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
