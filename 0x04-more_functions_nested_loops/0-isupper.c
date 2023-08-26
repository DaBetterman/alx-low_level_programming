/**
 *_isupper - a function that checks for uppercase character.
 *@c: Will return the results to main.
 *
 *Return: returns 1 if uppercase and 0 if lower case.
 */

#include "main.h"
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
