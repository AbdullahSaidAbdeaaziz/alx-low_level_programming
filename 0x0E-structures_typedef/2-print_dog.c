#include "dog.h"

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
exit(0);
}
if (!d->name)
{
printf("Name: nil\n");
}
printf("Name: %s\n Age: %f\n Owner: %s\n");
}
