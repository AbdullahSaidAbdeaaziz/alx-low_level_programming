#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print data of dog
 * @d: dog
 *
 * Return: exit if fails or None if success
*/

void print_dog(struct dog *d)
{
if (!d)
{
printf("nil\n");
return;
}
if (!d->name)
{
printf("Name: nil\n");
}
if (!d->owner)
{
printf("Owner: nil\n");
}
if (d->age <= 0)
{
printf("Age: nil\n");
}
if (d->owner && d->age && d->age > 0)
{
printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
}
