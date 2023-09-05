/**
 * create_array - a function that creates an array of chars.
 * @c: Will print the character 'H'
 * @size: the size of the memory to print
 *
 * Return: Pointer
 */
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
char *count;
unsigned int i;
if (size == 0)
{
return (NULL);
}
count = malloc(size);
if (count == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
count[i] = c;
}
return (count);
}
