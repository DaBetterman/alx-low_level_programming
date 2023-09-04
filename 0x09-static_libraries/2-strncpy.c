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
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
