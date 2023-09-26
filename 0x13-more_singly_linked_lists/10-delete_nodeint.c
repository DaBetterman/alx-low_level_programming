/**
* delete_nodeint_at_index - removes the head node of a linked list
* @head: double pointer to the list_t list
* @index: the number at which node must be deleted
* Return: head nodes data, or NULL if it failed
*/

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 0;

int data;

listint_t *temp, *prev;

if (*head == NULL)
{
return (-1);
}

temp = *head;

if (index == 0)
{
*head = temp->next;
data = temp->n;

free(temp);
return (data);
}

while (count < index && temp != NULL)
{
prev = temp;
temp = temp->next;
count++;
}

if (temp == NULL)
{
return (-1);
}

prev->next = temp->next;
data = temp->n;

free(temp);
return (data);
}
