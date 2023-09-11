#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a function that frees dogs
 * @d: a pointer
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
if (d == 0)
{
return;
}
else
{
free(d->name);
free(d->owner);
free(d);
}
}
