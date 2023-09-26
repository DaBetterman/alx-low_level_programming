/**
* add_nodeint_end - adds a new node at the end of a linked list
* @head: double pointer to the list_t list
* @n: number to put in the new node
*
* Return: address of the new element, or NULL if it failed
*/


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *temp;

newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
{
return (NULL);
}

newnode->n = n;
newnode->next = NULL;
temp = *head;

if (*head == NULL)
{
*head = newnode;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newnode;
}
return (newnode);
}
