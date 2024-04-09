/**
* jump_search - Search for a value in a sorted
*                  array using jump search algorithm
* @array: Pointer to the first element of the array
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index of the first occurrence of value in array,
*         or -1 if value is not present in array or if array is NULL
*/
#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t jump = 0, i = 0;

	if (array == NULL || size == 0)
		return (-1);


	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		jump += step;
	}

	jump = jump < size ? jump : size;

	printf("Value found between indexes [%ld] and [%ld]\n", jump - step, jump);

	for (i = jump - step; i <= jump && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
