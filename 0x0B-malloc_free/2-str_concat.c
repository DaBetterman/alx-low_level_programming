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
int l, k, i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
combo = malloc(i + j + 1);
if (combo == NULL)
{
return (NULL);
}
for (k = 0; k < i; k++)
{
combo[k] = s1[k];
}
for (l = 0; l < j; l++)
{
combo[i + l] = s2[l];
}
combo[i + j] = '\0';
return (combo);
}
