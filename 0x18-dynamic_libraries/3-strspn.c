/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: The string text.
 *@accept: The characters to be checked in 's'
 *Return: Returns the number of bytes in the initial segment.
 */

#include "main.h"
#include <stddef.h>
#include <string.h>
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
while (*s != '\0' && strchr(accept, *s) != NULL)
{
s++;
i++;
}
return (i);
}
