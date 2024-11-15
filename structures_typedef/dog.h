#ifndef MAIN_H
#define MAIN_H

/**
 *struct dog - new type struct dog
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
