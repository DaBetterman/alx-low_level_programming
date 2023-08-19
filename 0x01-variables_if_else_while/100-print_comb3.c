/**
 *main - prints all possible different combinations of two digits.
 *
 *Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
int i;
int j;
int n = 1;

for (i = 0; i <= 8; i++)
{
for (j = n; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
n++;
}
putchar('\n');
return (0);
}
