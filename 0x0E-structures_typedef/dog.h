/**
 * *struct dog - a new data type
 * *@name: will create a new string variable
 * *@age: age of the variable
 * *@owner: will create a new string variable
 */

#ifndef DOG_H
#define DOG_H

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
