/**
* flip_bits - returns the number of bits you would
*               need to flip to get from one number to another.
* @n: The first unsigned long int number.
* @m: The second unsigned long int number.
*
* Return: The number of bits needed to flip.
*/

#include "main.h"


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;

unsigned int count = 0;

result = n ^ m;
while (result > 0)
{
count += result & 1;
result >>= 1;
}

return (count);
}
