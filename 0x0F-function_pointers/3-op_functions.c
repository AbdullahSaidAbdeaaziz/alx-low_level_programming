#include "3-calc.h"

/**
 * op_add - adding 2 number
 * @a: first number
 * @b: second number
 *
 * Return: sum of 2 number
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracting 2 number
 * @a: first number
 * @b: second number
 *
 * Return: subtract of 2 number
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipling 2 number
 * @a: first number
 * @b: second number
 *
 * Return: multiple of 2 number
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividing 2 number
 * @a: first number
 * @b: second number
 *
 * Return: divide of 2 number, if second
 * number is zero return error
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remaindering 2 number
 * @a: first number
 * @b: second number
 *
 * Return: remainder of 2 number
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
