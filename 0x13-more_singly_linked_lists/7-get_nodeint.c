/**
 *get_nodeint_at_index - a function that returns the nth node of a linked list.
 *@head: pointer to the list_t list
 *@index: number of the node that will be selected in the list
 *Return: pointer to list
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;

unsigned int count = 0;

if (head == NULL)
{
return (NULL);
}
else
{
temp = head;
while (count < index)
{
if (temp == NULL)
{
return (NULL);
}
temp = temp->next;
count++;
}
}

return (temp);
}
