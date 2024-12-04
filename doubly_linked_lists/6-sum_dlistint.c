#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 *@head: the current node pointer
 *Return: the n value of the node's index
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sum;
	int somme = 0;

	sum = head;

	while (sum != NULL)
	{
		somme += sum->n;
		sum = sum->next;
	}

	return (somme);
}
