/**
 *main - a program that prints all arguments it receives.
 *@argc: Taking in the counting of arguments received from argv.
 *@argv: contains the string of input argv.
 *Return: prints the name of the arguments on the terminal
 */

#include <stdio.h>
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
