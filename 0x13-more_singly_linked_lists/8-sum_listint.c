/**
 *sum_listint - adds the number section of the node together in a linked list.
*@head: pointer to the list_t list
*Return: sum of all node value numbers added
*/

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int sum_listint(listint_t *head)
{
listint_t *temp;
int count = 0;

if (head == NULL)
{
return (0);
}

temp = head;

while (temp != NULL)
{
count += temp->n;
temp = temp->next;
}
return (count);
}
