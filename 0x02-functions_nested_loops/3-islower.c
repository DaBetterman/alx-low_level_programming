/**
 * _islower - checks if a character is lowercase.
 * @c: The character to be checked.
 *Return: 1 if c is lowercase, 0 otherwise.
 */

#include "main.h"
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
