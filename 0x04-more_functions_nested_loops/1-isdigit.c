/**
 *_isdigit - a function that checks for a digit (0 through 9).
 *@c: Will return the results to main.
 *
 *Return: returns 1 if its a digit and 0 if it something else.
 */

#include "main.h"
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
