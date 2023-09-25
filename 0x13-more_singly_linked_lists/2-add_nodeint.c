/**
* add_nodeint - adds a new node at the beginning of a linked list
* @head: double pointer to the list_t list
* @n: new number to add in the node
*
* Return: the address of the new element, or NULL if it fails
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;

temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
return (NULL);
}

temp->n = n;
temp->next = *head;
*head = temp;

return (*head);
}
