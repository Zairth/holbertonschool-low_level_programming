#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *insert_dnodeint_at_index - inserts a new node at a given position.
 *@h: the node pointer
 *@idx: the index where to add the new node
 *@n: the value to add
 *Return: return the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *ptr;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	ptr = *h;
	while (ptr != NULL && i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = new_node;
	new_node->prev = ptr;
	ptr->next = new_node;

	return (new_node);
}
