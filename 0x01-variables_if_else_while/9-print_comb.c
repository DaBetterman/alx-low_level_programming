#include <stdio.h>

/**
 * main - Printing the natural numbers from 0 - 9 with , and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
