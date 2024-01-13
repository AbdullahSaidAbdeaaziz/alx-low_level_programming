#include "main.h"

/**
 * flip_bits - the number of bits you would need to
 * flip to get from one number to another
 * @n: number
 * @m: no.of flips
 * Return: number of bits needs to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int count = 0;

	while (xor_val)
	{
		count += xor_val & 1;
		xor_val >>= 1;
	}

	return (count);
}
