#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - Returns the number of elements in a linked list.
* @h: the head of the doubly linked list
*
* Return: number of nodes in List
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		node++;
	}
	return (node);
}
