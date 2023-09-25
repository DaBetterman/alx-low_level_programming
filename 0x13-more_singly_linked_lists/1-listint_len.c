/**
* listint_len - returns the number of elements in a linked list
* @h: pointer to the list_t list
*
*
* Return: number of elements in h
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
size_t count;
const listint_t *temp;

temp = h;
count = 0;

while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}
