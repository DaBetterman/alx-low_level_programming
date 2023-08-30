/**
 *_puts_recursion - a function that prints a string, followed by a new line.
 * @s: the pointer to the text.
 *Return: void
 */

#include "main.h"
#include <string.h>
void _puts_recursion(char *s)
{
int count = strlen(s);
int i = 0;
for (i = 0; i < count; i++)
{
_putchar(s[i] + '\0');
}
_putchar('\n');
}
