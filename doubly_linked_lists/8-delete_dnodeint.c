#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *delete_dnodeint_at_index - deletes the node at index index of a linked list.
 *@head: the head of the nodes lists
 *@index: the index where to remove the node
 *Return: return 1 if succeed, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr == NULL)
		return (-1);

	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;

	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;

	free(ptr);

	return (1);
}
