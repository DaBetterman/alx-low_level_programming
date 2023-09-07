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
unsigned int i = 0;
unsigned int j = 0;
unsigned int len1 = 0;
unsigned int len2 = 0;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (len2 > n)
combo = malloc((len1 + n + 1));
else
combo = malloc((len1 + len2 + 1));
if (!combo)
return (NULL);
while (len1 > i)
{
combo[i] = s1[i];
i++;
}
while (n < len2 && i < (len1 + n))
combo[i++] = s2[j++];
while (n >= len2 && i < (len1 + len2))
combo[i++] = s2[j++];
combo[i] = '\0';
return (combo);
}
