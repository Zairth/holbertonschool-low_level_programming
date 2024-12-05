#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *@head: the current node pointer
 *@n: the value contained in the node
 *Return: dlinstint_t - return the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_Node = malloc(sizeof(dlistint_t));

	if (new_Node == NULL)
		return (NULL);

	new_Node->prev = NULL;
	new_Node->next = *head;
	new_Node->n = n;

	if (*head != NULL)
		(*head)->prev = new_Node;

	*head = new_Node;

	return (new_Node);
}
