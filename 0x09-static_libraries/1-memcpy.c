/**
 * _memcpy - a function that copies memory area.
 * @dest: Pointer to the destination memory.
 * @src: Pointer to the source memory.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination memory.
 */

#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
