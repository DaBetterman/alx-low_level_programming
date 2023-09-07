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
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int i;
unsigned int j;
unsigned int concat = 0;
char *combo;
if (s1 == NULL)
{
s1 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
while (concat < len1 && concat < n)
{
concat++;
}
combo = (char *)malloc((concat + len2 + 1) * sizeof(char));
if (combo == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
combo[i] = s1[i];
}
for (j = 0; j < n && j < len2; j++)
{
combo[i + j] = s2[j];
}
combo[i + j] = '\0';
return (combo);
}
