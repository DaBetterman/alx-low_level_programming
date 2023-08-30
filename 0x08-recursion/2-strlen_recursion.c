/**
 *_strlen_recursion - a function that returns the length of a string.
 *@s: contains the characters that will be counted.
 *Return: Will return the value of the counted letters.
 */

#include "main.h"
int _strlen_recursion(char *s)
{
int i = 0;
if (*s == '\0')
{
return (i);
}
i++;
return (i + _strlen_recursion(s + 1));
}
