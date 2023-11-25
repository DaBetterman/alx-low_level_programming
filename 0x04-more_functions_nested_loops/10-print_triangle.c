/**
* print_triangle - a function that prints a triangle, followed by a new line.
* @size: Size of the triangle
* Return: Nothing
*/

#include <stdio.h>
#include "main.h"

void print_triangle(int size) /* 2 */
{
	int i = 0;

	int j = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(' ');
		}
		_putchar('#');
        putchar('\n');
	}
}
