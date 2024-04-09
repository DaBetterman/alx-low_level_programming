#include <stdio.h>

/**
* interpolation_search - Search for a value in a sorted array
*                          using interpolation search algorithm
* @array: Pointer to the first element of the array
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index of the first occurrence of value in array,
*         or -1 if value is not present in array or if array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;

	int high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%d] is out of range\n", high);
	return (-1);
}
