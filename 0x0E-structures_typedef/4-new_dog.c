#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: dog or NULL if fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog;
if (!name || age < 0 || !owner)
{
return (NULL);
}
ndog = malloc(sizeof(dog_t));
if (!ndog)
{
return (NULL);
}
ndog->name = malloc(strlen(name) + 1);
if (!ndog->name)
{
free(ndog);
return (NULL);
}
ndog->name = strcpy(ndog->name, name);
ndog->age = age;
ndog->owner = malloc(strlen(owner) + 1);
if (!ndog->owner)
{
free(ndog);
return (NULL);
}
ndog->owner = strcpy(ndog->owner, owner);
return (ndog);
}
