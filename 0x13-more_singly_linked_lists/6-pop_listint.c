/**
* pop_listint - removes the head node of a linked list
* @head: double pointer to the list_t list
*
* Return: head nodes data, or NULL if it failed
*/

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
listint_t *temp;
int count = 0;

if (*head == NULL)
{
return (0);
}
temp = (*head);
count = temp->n;

*head = (*head)->next;
free(temp);

return (count);
}
