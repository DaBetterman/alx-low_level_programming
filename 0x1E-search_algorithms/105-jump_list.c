/**
* jump_list - Searches for a value in a sorted
*              list of integers using Jump search algorithm
* @list: Pointer to the head of the list to search in
* @size: Number of nodes in the list
* @value: Value to search for
*
* Return: A pointer to the first node where value is
*          located, or NULL if not found or list is NULL
*/

#include <math.h>
#include "search_algos.h"


listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0;
	size_t jump_step = sqrt(size);
	listint_t *prev = NULL;
	listint_t *current = list;

	if (list == NULL)
		return (NULL);

	while (current && current->n < value)
	{
		prev = current;
		for (i = 0; i < jump_step && current->next != NULL; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	prev ? prev->index : 0, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
