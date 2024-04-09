/**
 * linear_search - A function that searches for a value in an array
 *                 of integers using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for within the array.
 *
 * Return: If the value is found, the function returns the index of the first
 * occurrence of value in the array. If the value is not found, the function
 * returns -1.
 */

#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	/* size = sizeof(array) / sizeof(arr[0]); */

	for (i = 0; i <= size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%i]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
	}
	return (-1);
}
