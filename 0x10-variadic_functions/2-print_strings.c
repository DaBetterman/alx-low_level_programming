/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * Return: Nothing
 */

#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list pro;
char *words;
unsigned int i;

va_start(pro, n);

for (i = 0; i < n; i++)
{
words = va_arg(pro, char *);
if (words == NULL)
{
printf("(nil)");
}
else
{
printf("%s", words);
}
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(pro);
}
