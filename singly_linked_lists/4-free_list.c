#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_list - frees a list_t list
 *@head: the node list to free
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *save_the_next_node;

	while (head != NULL)
	{
		save_the_next_node = head->next;
		free(head->str);
		free(head);
		head = save_the_next_node;
	}
}
