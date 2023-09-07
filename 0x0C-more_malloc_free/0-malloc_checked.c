/**
 *malloc_checked - a function that allocates memory using malloc.
 *@b: Contains the value of b from the main function.
 *Return: a pointer back to the main funtion.
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
unsigned int *mal;
mal = malloc(b);
if (mal == NULL)
{
exit(98);
}
else
{
return (mal);
}
}
