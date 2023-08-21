/**
 *puts2 - a function that prints every other character of a string
 *starting with the first character.
 *@str: The pointer that points to the main funtion.
 *void: no value returned.
 */
#include "main.h"
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
