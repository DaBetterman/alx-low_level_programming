/**
 *print_alphabet_x10 - Printing the alphabet 10 times
 *
 *void print_alphabet_x10(void): Return void
 */

#include "main.h"
void print_alphabet_x10(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
int j = 0;
int i;
while (j < 10)
{
for (i = 0; alpha[i] != '\0'; i++)
{
_putchar(alpha[i]);
}
_putchar('\n');
j++;
}
}
