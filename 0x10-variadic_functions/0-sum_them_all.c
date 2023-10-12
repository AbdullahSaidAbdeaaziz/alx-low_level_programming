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
va_start(nums, n);
if (n == 0)
{
return (0);
}

times = n;
sum = 0;
while (times--)
{
int cur_num = va_arg(nums, int);
sum += cur_num;
}
va_end(nums);

return (sum);
}
