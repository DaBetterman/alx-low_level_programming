/**
 *print_name - a function that prints a name.
 *@name: variable that you want to print
 *@f: pointer pointing to a function
 *Return: Nothing
 */

#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
else
{
return;
}
}
