#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *list_len - returns the number of elements in a linked list_t list
 *@h: the node to count
 *Return: size_t - return the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
