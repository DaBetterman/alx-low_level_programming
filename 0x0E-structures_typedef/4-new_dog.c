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
int length1 = 0;
int length2 = 0;
struct dog *n_dog;
while (name[length1] != '\0')
length1++;
while (owner[length2] != '\0')
length2++;
n_dog = malloc(sizeof(struct dog));
if (n_dog == NULL)
return (NULL);
n_dog->name = malloc(length1 + 1);
if (n_dog->name == NULL)
{
free(n_dog);
return (NULL);
}
n_dog->owner = malloc(length2 + 1);
if (n_dog->owner == NULL)
{
free(n_dog->name);
free(n_dog);
return (NULL);
}
for (i = 0; i < length1 && name[i] != '\0'; i++)
n_dog->name[i] = name[i];
n_dog->name[i] = '\0';
for (i = 0; i < length2 && owner[i] != '\0'; i++)
n_dog->owner[i] = owner[i];
n_dog->owner[i] = '\0';
n_dog->age = age;
if (n_dog->name == NULL || n_dog->owner == NULL)
{
free(n_dog->name);
free(n_dog->owner);
free(n_dog);
return (NULL);
}
return (n_dog);
}
