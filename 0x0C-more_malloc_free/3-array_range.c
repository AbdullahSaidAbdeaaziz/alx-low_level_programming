#include "main.h"

/**
 * array_range -  creates an array of integers btwn (min - max).
 * @min: minium value for first element in array
 * @max: maxium value for last element in array
 *
 * Return: array of integers (pointer point to int).
 */
int *array_range(int min, int max)
{
int *array, len, i;
if (min > max)
{
return (NULL);
}
len = max - min + 1;
array = malloc(sizeof(int) * len);
if (!array)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
array[i] = min++;
}
return (array);
}
