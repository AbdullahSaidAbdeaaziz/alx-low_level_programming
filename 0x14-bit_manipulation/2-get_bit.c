#include "main.h"

/**
 * get_bit - get bit in specific index
 * @n: number in decimal
 * @index: index of bit in decimal
 * Return: bit at index, otherwise -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);

	return ((n >> index) & 1);
}
