#include "function_pointers.h"


/**
 * array_iterator - apply specific action on array
 * @array: array of elements
 * @size: size of array
 * @action: function with parameter int
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}