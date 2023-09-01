/**
 *main - a program that prints the minimum number of coins to make
 *       change for an amount of money.
 *@argc: taking in the counting of arguments received from argv.
 *@argv: contains the string of input argv.
 *Return: the least amount of coins needed
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int cents;
int coins;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
coins = 0;
while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
coins++;
}
else if (cents >= 10)
{
cents -= 10;
coins++;
}
else if (cents >= 5)
{
cents -= 5;
coins++;
}
else if (cents >= 2)
{
cents -= 2;
coins++;
}
else
{
cents -= 1;
coins++;
}
}
printf("%d\n", coins);
return (0);
}
