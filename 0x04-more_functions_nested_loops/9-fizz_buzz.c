/**
 * main - a program that prints the numbers from 1 to 100
 *			followed by a new line. But for multiples of three
 *			print Fizz instead of the number and for
 *			the multiples of five print Buzz.
 * Return: 0
*/

#include <stdio.h>

int main(void)
{
	int i = 1;

	int three = 3;

	int count = 1, count2 = 1;

	int five = 5;

	for (; i <= 100; i++)
	{
		if (i == (five * count2) && i == (three * count))
		{
			printf("FizzBuzz");
			putchar(' ');
			count2++;
			count++;
		}
		else if (i == (three * count))
		{
			printf("Fizz");
			putchar(' ');
			count++;
		}
		else if (i == (five * count2))
		{
			printf("Buzz");
			putchar(' ');
			count2++;
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
