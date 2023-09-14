/**
 *array_iterator - a function that executes a function given as
 *                 a parameter on each element of an array.
 *@array: the array to iterate through
 *@size: the size of the array
 *@action: pointer for the funtions
 *Return: Void
 */

#include "function_pointers.h"


void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
