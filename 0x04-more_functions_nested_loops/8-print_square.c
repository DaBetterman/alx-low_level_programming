/**
 * print_square - a function that prints a square, followed by a new line.
 * @n: The number of times '#' should be printed
 */

#include "main.h"
void print_square(int n)
{
int i = 0;
int j = 0;
for (i = 0; i < n; i++)
{
for (j = 0; j < n ; j++)
{
if (n < 0)
{
_putchar('\n');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
