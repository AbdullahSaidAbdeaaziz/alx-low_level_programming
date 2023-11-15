#include "variadic_functions.h"


/**
 * sum_them_all - sum any no.of numbers
 * @n: no.of numbers
 *
 * Return: sum of numbers
*/

int sum_them_all(const unsigned int n, ...)
{
int sum, times;
va_list nums;
if (n <= 0) 
{
return (0);
}

times = n;
sum = 0;
va_start(nums, n);
while (times--)
{
sum += va_arg(nums, int);
}
va_end(nums);

return (sum);
}
