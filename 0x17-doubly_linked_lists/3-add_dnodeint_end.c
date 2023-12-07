#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a list.
* @head: Pointer to the head of the doubly linked list.
* @n: Value to be assigned to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		dprintf(2, "Error with Malloc\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, the new node becomes the head */
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		dlistint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		/* Connect the new node to the last node */
		new_node->prev = temp;
		temp->next = new_node;
	}
	return (new_node);
}
