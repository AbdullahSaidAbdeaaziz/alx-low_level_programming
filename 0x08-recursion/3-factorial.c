#include "main.h"

/**
 * factorial - Prints a factorial of number
 * @n: Integer
 *
 * Return: factorial of number (Integer)
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
