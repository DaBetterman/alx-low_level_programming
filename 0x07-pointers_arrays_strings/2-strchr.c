/**
 *_strchr- a function that locates a character in a string.
 *@s: The pointer that points to a string.
 *@c: The letter that will be searched for in "s".
 *Return: The string starting from c or NULL if no character found.
 */

#include "main.h"
#include <stddef.h>
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else
{
s++;
}
}
return (NULL);
}
