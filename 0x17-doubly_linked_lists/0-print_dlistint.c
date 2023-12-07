#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - prints a doubly linked list
* @h: head of doubly linked list (DLL)
*
* Return: number of nodes in DLL
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
