#include "dog.h"
#include <stdlib.h>

/**
* init_dog - Creates a variable of data type struct dog
* @d: initializing dog
* @name: the dog’s name
* @age: the dog’s age
* @owner: the owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
