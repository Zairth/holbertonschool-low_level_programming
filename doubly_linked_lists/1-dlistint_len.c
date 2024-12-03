#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *dlistint_len - returns the number of elements in a linked dlistint_t list
 *@h: the node to count
 *Return: size_t - return the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
