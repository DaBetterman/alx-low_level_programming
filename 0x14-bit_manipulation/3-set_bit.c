/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: Pointer to the unsigned long int variable.
* @index: The index of the bit to set (starting from 0).
*
* Return: 1 if it worked, or -1 if an error occurred
*/

#include "main.h"


int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int result;

if (index >= sizeof(unsigned long int) * 8)

{
return (-1);
}

result = 1 << index;

*n = *n | result;

return (1);
}
