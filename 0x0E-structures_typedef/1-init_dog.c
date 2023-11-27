#include "dog.h"

/**
 * init_dog - initialize variables of type struct dog
 *
 * @d: dog that will be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
