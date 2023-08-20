/**
 *print_to_98 - A function that prints all natural numbers from n to 98.
 *@n: The number that will be implemented.
 *Return: Return value back to main.
 */

#include <stdio.h>
#include "main.h"
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
}
