/**
 *main - a program that multiplies two numbers.
 *@argc: Taking in the counting of arguments received from argv.
 *@argv: contains the string of input argv.
 *Return: the result of the multiplied numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *= num2;
printf("%d\n", result);
return (0);
}
