#include "main.h"

/**
 * is_prime_recursive - Helper function to
 * check if a number is prime recursively
 * @n: The number to check
 * @divisor: The current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{

if (n < 2)
{
return (0);
}

if (divisor == 1)
{
return (1);
}

if (n % divisor == 0)
{
return (0);
}

return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number using recursion
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, n - 1));
}
