/**
* advanced_binary_recursive - Recursive helper function
*                              for advanced binary search
* @array: Pointer to the first element of the array to search in
* @start: Starting index of the current array range
* @end: Ending index of the current array range
* @value: Value to search for
*
* Return: The index where value is located, or -1 if not found
*/

#include "search_algos.h"

int advanced_binary_recursive(int *array, int start, int end, int value)
{
	int mid = start + (end - start) / 2;

	int i = 0;

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");

	if (array[mid] == value)
	{
		if (mid == start || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_recursive(array, start, mid, value));
	}
	else if (array[mid] > value)
		return (advanced_binary_recursive(array, start, mid - 1, value));
	else
		return (advanced_binary_recursive(array, mid + 1, end, value));
}

/**
* advanced_binary - Searches for a value in a sorted array
*                    of integers using advanced binary search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index where value is located, or -1 if not found or array is NULL
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
