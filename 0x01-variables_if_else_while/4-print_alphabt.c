#include <stdio.h>

/**
 * main - Printing the lower alphabet using putchar excl. q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
