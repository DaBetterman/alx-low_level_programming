/**
 *print_line - a function that draws a straight line in the terminal.
 *@n: int number
 *
 *Return: a '_' to be printed.
 */

#include "main.h"
void print_line(int n)
{
int i = 0;
for (; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
}
}
_putchar('\n');
}
