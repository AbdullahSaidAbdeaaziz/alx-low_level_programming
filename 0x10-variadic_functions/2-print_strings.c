#include "variadic_functions.h"

/**
 * print_strings - print string followed by newline
 * @separator: separate with
 * @n: number of arguments
 *
 * Return: None
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int c = n;
	char *str;
	va_list strings;

	va_start(strings, n);

	while (c--)
	{
		str = va_arg(strings, char *);
		if (!separator)
		{
			if (!str)
			{
				printf("(nil)");
				continue;
			}
			printf("%s", str);
			continue;
		}
		if (c != 0)
		{
			if (!str)
			{
				printf("(nil)%s", separator);
				continue;
			}
			printf("%s%s", str, separator);
		}
		else
		{
			if (!str)
			{
				printf("(nil)");
				continue;
			}
			printf("%s", str);
		}
	}

	printf("\n");
}
