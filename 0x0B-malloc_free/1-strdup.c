/**
 * _strdup - a function that returns a pointer
 *           to a newly allocated space in memory.
 * @str: the address of memory to print
 *
 *
 * Return: New memory pointer location.
 */

#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
int i, j, count;
char *mem;
if (str == NULL)
{
return (NULL);
}
for (j = 0; str[j] != '\0'; j++)
{
count = j;
}
mem = malloc(count + 2);
if (mem == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
mem[i] = str[i];
}
mem[j] = '\0';
return (mem);
}
