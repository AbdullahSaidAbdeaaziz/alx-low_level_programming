#include "main.h"

/**
 * _realloc - reallocates memory block
 * @ptr: poomter to the memory previously allocated
 * @old_size: size of old allocated memory
 * @new_size: new size of allocated memory
 *
 * Return: new allocated memory (void *)
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (!ptr)
{
new_ptr = malloc(new_size);
if (!new_ptr)
{
return (NULL);
}
return (ptr);
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (!new_ptr)
{
return (NULL);
}
for (i = 0; i < old_size && i < new_size; i++)
{
*((char *)new_ptr + i) = *((char *)ptr + i);
}
free(ptr);
return (new_ptr);
}
