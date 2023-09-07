/**
 *string_nconcat - a function that concatenates two strings.
 *@s1: the first string
 *@s2: the second string
 *@n: the number of string 2 to be printed
 *Return: concatenated string
 */

#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *combo;
unsigned int len1, i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
combo = malloc(len1 + n + 1);
if (combo == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
combo[i] = s1[i];
}
for (j = 0; j < n && s2[j] != '\0'; j++)
{
combo[i++] = s2[j];
combo[i] = '\0';
}
return (combo);
}
