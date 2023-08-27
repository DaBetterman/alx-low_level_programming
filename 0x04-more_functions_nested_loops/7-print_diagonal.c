/**
 * print_diagonal - Prints a diagonal line using '\'
 * @n: The number of times '\' should be printed
 */

#include "main.h"
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
