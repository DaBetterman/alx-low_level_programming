/**
 *rev_string - a function that reverses a string.
 *@s: The pointer in question.
 *void: returns no value.
 */

#include "main.h"
#include <string.h>

void rev_string(char *s)
{
int i, j, length = strlen(s);
for (i = 0, j = length - 1; i <= j; i++, j--)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
