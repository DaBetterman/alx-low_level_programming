/**
 *_strstr - a function that locates a substring.
 *@haystack: the string to search.
 *@needle: the substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
