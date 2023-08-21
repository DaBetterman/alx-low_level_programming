/**
 *puts2 - a function that prints every other character of a string
 *starting with the first character.
 *@str: The pointer that points to the main funtion.
 *void: no value returned.
 */
#include "main.h"
void puts2(char *str)
{
_putchar(str[0]);
_putchar(str[2]);
_putchar(str[4]);
_putchar(str[6]);
_putchar(str[8]);
_putchar('\n');
}
