/**
 * str_concat - a function that concatenates two strings
 * @s1: the address of string 1
 * @s2: the address of string 2
 *
 * Return: Concatenated strings (s1 + s2)
 */

#include "main.h"
#include <stdlib.h>
#include <stddef.h>

char *str_concat(char *s1, char *s2)
{
char *combo;
int i, j;
combo = malloc(16);
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
combo[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
combo [j + 6] = s2[j];
}
combo[j + 6] = '\0';
return (combo);
}
