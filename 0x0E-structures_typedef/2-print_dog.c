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
if (d)
{
printf("Name: %s\nAge: %f\nOwner\n: %s",
!d->name ? "nil" : d->name, d->age,
!d->owner ? "nil" : d->owner);
}
}
