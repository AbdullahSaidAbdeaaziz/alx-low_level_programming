#include "main.h"

/**
 * sqrt_helper - Helper function to calculate the square root recursively
 * @n: The number for which to calculate the square root
 * @x: The current guess for the square root
 *
 * Return: The integer square root of n
 */
int sqrt_helper(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}

	if (x * x > n)
	{
		return (-1);
	}

	return (sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - Computes the square root of a number using recursion
 * @n: The number for which to calculate the square root
 *
 * Return: The integer square root of n, or -1
 * if n does not have an integer square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}

return (sqrt_helper(n, 1));
}

