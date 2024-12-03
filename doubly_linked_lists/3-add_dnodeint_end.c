#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *@head: the current node pointer
 *@n: the value contained in the node
 *Return: dlinstint_t - return the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_Node, *ptr;

	new_Node = malloc(sizeof(dlistint_t));

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->prev = NULL;
	new_Node->next = NULL;

	if (*head == NULL)
		*head = new_Node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_Node;
		new_Node->prev = ptr;
	}

	return (new_Node);
}
