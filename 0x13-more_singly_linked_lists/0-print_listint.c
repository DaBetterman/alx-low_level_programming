/**
* print_listint - prints the elements of a linked list
* @h: pointer to the listint_t list to print
*
* Return: the number of nodes printed
*/
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
const listint_t *temp;
size_t count;

count = 0;


temp = h;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
count++;
}

return (count);
}
