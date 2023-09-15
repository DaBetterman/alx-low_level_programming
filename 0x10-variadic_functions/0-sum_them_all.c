/**
 *sum_them_all - a function that returns the sum of all its parameters.
 *@n: the number of element that will be printed out on the screen
 *
 *Return: the result of numbers that has been added
 */

#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
va_list pro;
unsigned int i = 0;
unsigned int sum = 0;
if (n == 0)
{
return (0);
}
va_start(pro, n);
for (; i < n; i++)
{
sum += va_arg(pro, int);
}
return (sum);
}
