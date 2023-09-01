/**
 *main - a program that adds positive numbers.
 *@argc: Taking in the counting of arguments received from argv.
 *@argv: contains the string as numbers of input argv.
 *Return: prints the added positive numbers on the terminal
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
int sum;
int i;
int j;
int num;
if (argc == 1)
{
printf("0\n");
return (0);
}
sum = 0;
for (i = 1; i < argc; i++)
{
char *arg = argv[i];
for (j = 0; arg[j] != '\0'; j++)
{
if (arg[j] < '0' || arg[j] > '9')
{
printf("Error\n");
return (1);
}
}
num = atoi(arg);
if (num < 0)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
