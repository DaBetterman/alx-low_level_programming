/**
 *more_numbers - prints from 0 to 14, ten times. each with a new line.
 *
 *
 *Return: Void
 */

#include "main.h"
void more_numbers(void)
{
int i = 0;
int j = 0;
while (j <= 10)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
j++;
}
}
