#include "main.h"

/**
 * _pow_recursion - Power of n^y
 * @x: Integer base
 * @y: Integer power
 *
 * Return: power of number (Integer)
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
