/**
 *_strcat - A function that concatenates two strings.
 *@dest: The destination string that will be appended with src.
 *@src: The source string that will be appended with dest.
 *Return: A pointer to the resulting string
 */
#include "main.h"
char *_strcat(char *dest, char *src)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
