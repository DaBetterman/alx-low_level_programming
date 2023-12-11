/**
 *_memset - a function that fills memory with a constant byte.
 *@s: pointer to the memory area.
 *@b: the byte to fill with.
 *@n: number of bytes to fill.
 *
 * Return: Pointer to the memory area 's'.
 */

#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
