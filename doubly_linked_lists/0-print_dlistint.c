#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h: the node to count
 *Return: size_t - return the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
