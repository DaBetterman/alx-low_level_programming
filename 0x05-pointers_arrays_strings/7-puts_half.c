/**
 *puts_half - A function that prints half of a string, followed by a new line.
 *@str: The pointer variable connected to the main.
 *void: returns no value.
 */

#include "main.h"
void puts_half(char *str)
{
int lenght = 0;
char *ptr = str;
int i;
int half_numb;
while (*ptr != '\0')
{
lenght++;
ptr++;
}
half_numb = (lenght - 1) / 2;
for (i = half_numb; i < lenght; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
