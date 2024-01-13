#include "main.h"

/**
 * set_bit - set bit to 1 and specific
 * index in number
 * @n: decimal
 * @index: index of bit in decimal
 * Return: number with new seted bit,
 * otherwise -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	*n = (*n | (1 << index));

	return (1);
}
