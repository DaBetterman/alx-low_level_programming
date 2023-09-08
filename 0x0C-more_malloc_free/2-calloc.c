/**
 *_calloc - a function that allocates memory for an array, using malloc.
 *@nmemb: an array of memory
 *@size: the size of each new memory in bytes
 *Return: Void
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *numb;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
numb = (int *)malloc(nmemb * (size));
if (numb == NULL)
{
return (NULL);
}
memset(numb, 0, nmemb * (size));
return (numb);
}
