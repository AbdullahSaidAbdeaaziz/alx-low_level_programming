#include "variadic_functions.h"

/**
 * print_numbers - print number with separator
 * @separator: string separator that
 * @n: number of argurments
 *
 * Return: None
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int c = n, number;
	va_list numbers;

	va_start(numbers, n);

	while (c--)
	{
		number = va_arg(numbers, unsigned int);
		if (!separator)
		{
			printf("%d", number);
			continue;
		}
		if (c != 0)
			printf("%d%s", number, separator);
		else
			printf("%d", number);
	}
	printf("\n");
}
