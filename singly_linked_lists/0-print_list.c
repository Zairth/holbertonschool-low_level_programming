#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_list - prints all the elements of a list_t list.
 *@h: the node to print
 *Return: size_t - return the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
