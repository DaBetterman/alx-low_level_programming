/**
 *_strcpy - a function that copies the string pointed to by src, including the
 *terminating null byte (\0), to the buffer pointed to by dest.
 *@dest: Pointer to the destination.
 *@src: pointer to the source.
 *Return: Pointer to destination.
 */

#include "main.h"
char *_strcpy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (start);
}
