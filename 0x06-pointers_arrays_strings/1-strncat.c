/**
 *_strncat - A function that concatenates two strings.
 *@dest: The destination string that will be appended with src.
 *@src: The source string that will be appended with dest.
 *@n: Copy up to n characters from src to dest
 *Return: A pointer to the resulting string
 */
#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
dest = '\0';
return (start);
}
