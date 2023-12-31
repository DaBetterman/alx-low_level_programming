#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - Prints the number of elements in a linked list.
* @h: the head of the doubly linked list
*
* Return: number of nodes in List
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node++;
	}

	return (node);
}
