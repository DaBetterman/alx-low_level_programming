/**
 *main - printing the name of the program
 *@argc: Taking in the counting of arguments received from argv.
 *@argv: contains the string of input argv[0].
 *Return: prints the name of the program on the terminal
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
