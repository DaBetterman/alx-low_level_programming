/**
 *swap_int - A function that swaps the values of two integers.
 *@a: The number that needs to be swapped with 'b'.
 *@b: The number that needs to be swapped with 'a'.
 *
 *void: parameters are not returning any value
 */

#include "main.h"
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
