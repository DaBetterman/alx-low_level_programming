/**
 *print_last_digit- a function that prints the last digit of a number.
 *@i: The number being computed.
 *Return: The value of the last digit
 */
#include "main.h"
int print_last_digit(int i)

{
if (i < 0)
{
i = i * -1;
_putchar((i % 10) + '0');
}
else
{
_putchar((i % 10) + '0');
}
return (i);
}
