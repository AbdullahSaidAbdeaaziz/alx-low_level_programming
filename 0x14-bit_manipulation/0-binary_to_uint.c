#include "main.h"
#include <string.h>

/**
 * _pow - get power of base number
 * @base: base
 * @exp: exponent
 * Return: power of number
 */
size_t _pow(int base, int exp)
{
	if (exp == 0)
	{
		return (1);
	}
	return (base * _pow(base, exp - 1));
}

/**
 * check_binary - check if string is binary or not
 * @n: string of binary number
 * Return: 1 if is binary, otherwise 0
 */
unsigned int check_binary(const char *n)
{
	size_t i = 0;

	while (n[i] != '\0')
	{
		if (n[i] != '1' && n[i] != '0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * binary_to_uint - convert binary to decimal
 * @b: string of binary
 * Return: decimal if correct representation,
 * otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = strlen(b) - 1, exp = 0;
	unsigned int result = 0;

	if (!b || !check_binary(b))
	{
		return (0);
	}


	while (i >= 0)
	{
		result += (b[i] - '0') * _pow(2, exp++);
		i--;
	}
	if (result == 0)
	{
		return (1);
	}
	return (result);
}
