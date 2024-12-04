#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *@head: the current node pointer
 *@index: the index of the node
 *Return: the n value of the node's index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int i = 0;

	tmp = head;

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}

	return (NULL);
}
