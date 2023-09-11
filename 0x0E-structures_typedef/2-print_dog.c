#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *print_dog - prints the struct of dog to the screen
 *@d: pointer that shows to the struct
 *Return: nothing
 */

void print_dog(struct dog *d)
{
if (d == 0)
{
return;
}
else
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
}
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
