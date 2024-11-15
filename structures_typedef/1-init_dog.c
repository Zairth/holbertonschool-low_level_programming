#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*init_dog -  initialize a variable of type struct dog
*@d: the doggy var
*@name: the name of the dog
*@age: the age of the dog
*@owner: the owner of the dog
*Return: void return
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		printf("Ok");
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
