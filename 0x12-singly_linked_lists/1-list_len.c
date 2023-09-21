/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 *
 * Return: number of elements in h
 */

#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
size_t count = 0;
list_t *temp = (list_t *)h;

while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}
