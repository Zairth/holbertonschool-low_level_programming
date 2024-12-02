#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: the current node
 *@str: the new node
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_Node = malloc(sizeof(list_t));
	unsigned int i = 0;
	list_t *last_node = *head;

	if (new_Node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_Node;
		return (new_Node);
	}

	while (str[i] != '\0')
		i++;

	new_Node->str = strdup(str);
	new_Node->len = i;
	new_Node->next = NULL;

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_Node;

	return (new_Node);
}
