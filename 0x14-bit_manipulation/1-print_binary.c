/**
* print_binary - prints the binary representation of a number.
* @n: the decimal number being converted
* Return: the binary number
*/

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) + '0');
}
