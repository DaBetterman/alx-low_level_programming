/**
 * positive_or_negative - Checking if numbers are positive, negative or zero.
 * @i: The integer to be checked
 * Return: Always 0 (Success)
 */
#include "main.h"
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
