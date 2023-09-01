/**
 *main - a program that prints the number of arguments passed into it.
 *@argc: takes in the count of arguments.
 *@argv: takes in the string or characters.
 *Return: Will return the count of arguments passed in the terminal.
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
