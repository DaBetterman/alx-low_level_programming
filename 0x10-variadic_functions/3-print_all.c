/**
* print_all - a function that prints anything.
* @format: list of types of arguments passed to the function
*/

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
int i = 0;
char *sep;
char *str;
va_list args;
sep = "";
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c')
{
printf("%s%c", sep, va_arg(args, int));
}
else if (format[i] == 'i')
{
printf("%s%d", sep, va_arg(args, int));
}
else if (format[i] == 'f')
{
printf("%s%f", sep, va_arg(args, double));
}
else if (format[i] == 's')
{
str = va_arg(args, char *);
if (str)
{
printf("%s%s", sep, str);
}
else
{
printf("%s(nil)", sep);
}
}
sep = ", ";
i++;
}
va_end(args);
printf("\n");
}
