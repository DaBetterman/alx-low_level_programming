/**
* binary_search - A function that searches for a value in a
*                  sorted array of integers using the
*                  Binary search algorithm
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: Index where value is located,
*          or -1 if not found or if array is NULL.
*/

#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;

	size_t right = size - 1;

	size_t mid = 0;

	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
