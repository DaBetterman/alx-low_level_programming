/**
 *_strncpy - A function that copies a strings.
 *@dest: The destination that will copy the value of src.
 *@src: The source string that will be used to copy to dest.
 *@n: Calculates the amount of times to overwrite the dest.
 *Return: A pointer to the resulting string
 */
#include "main.h"
char *_strncpy(char *dest, char *src, int n)
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
*dest = '\0';
while (n != 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (start);
}
