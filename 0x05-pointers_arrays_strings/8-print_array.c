/**
 *print_array - A function that prints n elements of an array of integers.
 *
 *@a: This is the name of the array.
 *@n: Printing the element of the srray.
 *Return: returns a and n inputs back to main.
 */

#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i > 0)
{
putchar(',');
putchar(' ');
}
printf("%d", a[i]);
}
putchar('\n');
}
