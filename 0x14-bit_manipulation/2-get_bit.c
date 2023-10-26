/**
* get_bit - returns the value of a bit at a given index.
* @n: The unsigned long integer.
* @index: The index of the bit to retrieve (starting from 0).
*
* Return: the value of the bit at index or -1 if an error occured.
*/

#include "main.h"


int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int result;

if (index >= (sizeof(unsigned long int) * 8))

{
return (-1);
}

result = 1 << index;


if ((n & result) == result)
{
return (1);
}
return (0);

}
