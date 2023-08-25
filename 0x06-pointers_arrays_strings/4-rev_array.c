/**
 *reverse_array - A function that reverses the content of an array of integers.
 *@a: an array with 13 elements
 *@n: the number of elements of the array
 *Return: void
 */
#include "main.h"
void reverse_array(int *a, int n)
{
int i = 0;
int j = 0;
for (i = 0; i < n; i++)
{
n--;
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
