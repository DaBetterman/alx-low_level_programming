/**
* free_listint2 - frees a linked list
* @head: list_t list to be freed
*/

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


void free_listint2(listint_t **head)
{
listint_t *temp;

while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}
