#include "main.h"

/**
 * _memset - initilaze array with zeros
 * @s: array we want initilaze
 * @b: character will initilaze with
 * @n: size of array
 *
 * Return: None
*/


void _memset(char *s, char b, size_t n)
{
char *p = s;
(void)p;
while (n--)
{
*s++ = b;
}
}

/**
 * _calloc - allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer
 * to the allocated memory.
 *
 * @nmemb: elements of array
 * @size: size of array (bytes)
 *
 * Return: pointer to array or NULL if fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
array = malloc(nmemb * sizeof(int));
_memset(array, 0, sizeof(int) * nmemb);
return (array);
}
