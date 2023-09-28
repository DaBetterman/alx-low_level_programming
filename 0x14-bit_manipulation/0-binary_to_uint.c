/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string
 * Return: the converted number, or 0
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


unsigned int binary_to_uint(const char *b)
{
unsigned int realNumb = 0;

if (b == NULL)
{
return (0);
}

while (*b != '\0')
{
if (*b != '0' && *b != '1')
{
return (0);
}

realNumb = (realNumb << 1) | (*b - '0');
b++;
}

return (realNumb);
}
