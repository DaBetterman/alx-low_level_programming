/**
 * print_alphabet - Prints the lowercase alphabet using the _putchar function.
 *
 * Return: Void
 */
#include "main.h"

void print_alphabet(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; alpha[i] != '\0'; i++)
{
_putchar(alpha[i]);
}
_putchar('\n');
}
