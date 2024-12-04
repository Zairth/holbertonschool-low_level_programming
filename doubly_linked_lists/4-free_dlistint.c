#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *free_dlistint - frees a dlistint_t list
 *@head: the current node pointer
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	if (head->prev == NULL && head->next == NULL && head != NULL)
	{
		free(head);
		return;
	}

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
