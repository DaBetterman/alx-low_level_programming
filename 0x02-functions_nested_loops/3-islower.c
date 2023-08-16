/**
 * _islower - checks if a character is lowercase.
 * @character: The character to be checked.
 *Return: 1 if c is lowercase, 0 otherwise.
 */

#include "main.h"
int _islower(int character)
{
if (character >= 97 && character <= 122)
{
return (1);
}
return (0);
}
