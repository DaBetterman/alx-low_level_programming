/**
 *_pow_recursion - a function that returns the value of
 *                  x raised to the power of y.
 *@x: the number that needs to be multiplied by itself.
 *@y: the amount of time 'x' will be multiplied by 'x'.
 *Return: Returns -1 if 'y' is negative. Returns 1 if 'y'
 *        is 0. Returns result of x if successful.
 */

#include "main.h"
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * (_pow_recursion(x, y - 1)));
}
