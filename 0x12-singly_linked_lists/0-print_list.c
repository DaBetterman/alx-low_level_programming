/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
size_t count = 0;
list_t *temp = (list_t *)h;

while (temp != NULL)
{
if (temp->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", temp->len, temp->str);
}
temp = temp->next;
count++;
}

return (count);
}
