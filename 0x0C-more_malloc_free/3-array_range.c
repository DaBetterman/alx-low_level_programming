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
int i;
int minMax;
if (min > max)
{
return (NULL);
}
minMax = max - min + 1;
mem = malloc(sizeof(int) * minMax);
if (mem == NULL)
{
return (NULL);
}
i = 0;
while (min <= max)
{
mem[i] = min++;
i++;
}
return (mem);
}
