#include "main.h"

/**
 * create_array - create array with speific size
 * @size: length of array
 * @c: default character we will initialize with
 *
 * Return: char* (string)
*/

char *create_array(unsigned int size, char c)
{
char *arr = (char *)malloc(sizeof(char) * size);
if (size <= 0 || arr == NULL)
{
return (NULL);
}

while (size--)
{
*(arr + size) = c;
}
return (arr);
}
