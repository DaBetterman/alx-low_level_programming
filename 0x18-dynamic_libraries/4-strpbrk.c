/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string to search.
 * @accept: the string containing bytes to search for.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */

#include "main.h"
#include <stddef.h>
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
