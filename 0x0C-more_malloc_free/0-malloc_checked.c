#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: number we will allocate in memory
 *
 * Return: 98 if malloc is failed, otherwise pointer
 * to allocate memory.
*/

void *malloc_checked(unsigned int b)
{
void *allocate;
allocate = malloc(sizeof(b));
if (allocate == NULL)
{
exit(98);
}
return (allocate);
}
