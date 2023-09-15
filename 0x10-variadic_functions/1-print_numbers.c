/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* Return: Nothing
*/

#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list pro;
unsigned int i = 0;
va_start(pro, n);
for (; i < n; i++)
{
printf("%d", va_arg(pro, int));
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(pro);
}
