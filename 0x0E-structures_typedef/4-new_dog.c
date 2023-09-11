#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creating a new dog
 * @name: first element
 * @age: second element
 * @owner: third element
 * Return: nothing on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int i;
int lenght1;
int lenght2;

struct dog *n_dog = NULL;

lenght1 = 0;
while (name[lenght1] != '\0')
lenght1++;

lenght2 = 0;
while (owner[lenght2] != '\0')
lenght2++;

n_dog = malloc(sizeof(struct dog));
if (n_dog == NULL)
{
free(n_dog);
return (NULL);
}

n_dog->name = malloc(lenght1 + 1);
if (n_dog->name == NULL)
{
free(n_dog->name);
free(n_dog);
return (NULL);
}

n_dog->owner = malloc(lenght2 + 1);
if (n_dog->owner == NULL)
{
free(n_dog->owner);
free(n_dog);
return (NULL);
}

for (i = 0; i <= lenght1; i++)
{
n_dog->name[i] = name[i];
}

for (i = 0; i <= lenght2; i++)
{
n_dog->owner[i] = owner[i];
}
n_dog->age = age;
free(n_dog->name);
free(n_dog->owner);
free(n_dog);
return (n_dog);
}
