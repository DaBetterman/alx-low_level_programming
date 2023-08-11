#include <stdio.h>

/**
 * main - Printing the alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z' + 1; i++)
{
putchar(i);
}
return (0);
}
