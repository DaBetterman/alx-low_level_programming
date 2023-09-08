/**
 * array_range - a function that creates an array of integers.
 * @min: holds the lowest number value
 * @max: holds the highest number value
 *
 * Return: numbers from 0 - 10
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
int *mem;
if (min > max)
{
return (NULL);
}
mem = malloc(11 * sizeof(int));
if (mem == NULL)
{
return (NULL);
}
while (min <= max)
{
mem[min] = min;
min++;
}
return (mem);
}
