/**
* insert_nodeint_at_index - adds a new node at a given position
*                               in the linked list
* @head: double pointer to the list_t list
* @idx: number to put in the new node
* @n: number value of the new node
* Return: address of the new element, or NULL if it failed
*/


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *force;
unsigned int count = 0;

force = malloc(sizeof(listint_t));

if (force == NULL)
{
return (NULL);
}

force->n = n;

if (idx == 0)
{
force->next = *head;
*head = force;
return (force);
}

temp = *head;

while (count < idx - 1)
{
if (temp == NULL)
{
free(force);
return (NULL);
}
temp = temp->next;
count++;
}

force->next = temp->next;
temp->next = force;

return (force);
}
