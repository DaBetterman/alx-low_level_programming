/**
 *string_toupper - changes all lowercase letters to uppercase.
 *@n: pointer
 *
 *Return: n back to main
 */
#include "main.h"
char *string_toupper(char *n)
{
int i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
i++;
}
return (n);
}
