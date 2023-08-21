/**
 *print_rev - A function that prints a string, in reverse.
 *@s: Will return the reverse text
 *void: returns no value.
 */

#include "main.h"
#include <string.h>

void print_rev(char *s)
{
int i, l;
l = strlen(s);
for (i = l - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
