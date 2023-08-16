/**
 * print_sign - prints the sign of a number.
 * @print: The character to be checked.
 *Return: 1 if n is greater than 0; 0 if not greater than 0 and / if 0.
 */

#include "main.h"
int print_sign(int print)
{
if (print > 0)
{
_putchar(43);
return (1);
}
else if (print < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
