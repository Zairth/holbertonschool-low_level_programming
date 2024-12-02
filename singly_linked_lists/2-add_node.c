#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head: the current node
 *@str: the new node
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_Node = malloc(sizeof(list_t));
	unsigned int i = 0;

	if (new_Node == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_Node->str = strdup(str);
	new_Node->len = i;
	new_Node->next = *head;

	*head = new_Node;

	return (new_Node);
}
