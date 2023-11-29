#include "function_pointers.h"

/**
 * int_index - finding index of elements in specific
 * array
 * @array: array of integer elements
 * @size: size of array
 * @cmp: compare for condition of array
 *
 * Return: index of element we found in array
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
