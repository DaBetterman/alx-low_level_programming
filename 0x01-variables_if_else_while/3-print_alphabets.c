#include <stdio.h>

/**
 * main - Printing the lower and upper alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int j;
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
