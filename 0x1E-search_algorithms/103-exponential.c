/**
* exponential_search - Searches for a value in a sorted array
*                       of integers using exponential search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The first index or -1.
*/

#include "search_algos.h"

int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;

	int prev_bound = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		prev_bound = bound;
		bound *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev_bound, bound);

	return (binary_search_v2(array, prev_bound,
	(bound < (int)size - 1) ? bound : (int)size - 1, value));
}

/**
* binary_search - Searches for a value in a sorted
*					array of integers using binary search algorithm
* @array: Pointer to the first element of the array to search in
* @start: Starting index of the search range
* @end: Ending index of the search range
* @value: Value to search for
*
* Return: The index where value is located, or -1 if not found
*/
int binary_search_v2(int *array, int start, int end, int value)
{
	int mid = 0;

	int i = 0;

	while (start <= end)
	{
		mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}
