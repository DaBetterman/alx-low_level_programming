/**
 *print_last_digit- a function that prints the last digit of a number.
 *@i: The number being computed.
 *Return: The value of the last digit
 */
#include "main.h"
int print_last_digit(int i)

{
int result;
result = (i % 10);
if (result < 0)
{
result = -result;
}
_putchar(result + '0');
return (result);
}
