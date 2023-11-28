#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
if (!name || !owner)
{
return (NULL);
}
ndog = malloc(sizeof(dog_t));
if (!ndog)
{
return (NULL);
}
ndog->name = name;
ndog->age = age;
ndog->owner = owner;
return (ndog);
}
