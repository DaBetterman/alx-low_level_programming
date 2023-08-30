/**
 *factorial - a function that returns the factorial of a given number.
 *@n: The number that will be used in the function.
 *Return: If the number is lower than '0',
 *        the function sould return -1 which indicated an error.
 */

#include "main.h"
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
