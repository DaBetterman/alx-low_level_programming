/**
 *_strcmp - A function that compares two strings.
 *@s1: The string that will be compared with.
 *@s2: The string that will be compared with the other string.
 *Return: result of which string is greater, smaller or equal.
 */
#include "main.h"
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (s1[i] - s2[i]);
}
