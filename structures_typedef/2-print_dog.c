#include <stdio.h>
#include "dog.h"

/**
 *print_dog - Prints the contents of a struct dog.
 *@d: The dog struct to print.
 *return : void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
