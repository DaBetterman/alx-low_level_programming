/**
* print_all - a function that prints anything.
* @format: list of types of arguments passed to the function
*/

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
int i = 0;
char *string, *ptr = "";
va_list pro;
va_start(pro, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", ptr, va_arg(pro, int));
break;
case 'i':
printf("%s%d", ptr, va_arg(pro, int));
break;
case 'f':
printf("%s%f", ptr, va_arg(pro, double));
break;
case 's':
string = va_arg(pro, char *);
if (!string)
string = "(nil)";
printf("%s%s", ptr, string);
break;
default:
i++;
continue;
}
ptr = ", ";
i++;
}
}
printf("\n");
va_end(pro);
}
