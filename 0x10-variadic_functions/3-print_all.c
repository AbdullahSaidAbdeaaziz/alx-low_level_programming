#include "variadic_functions.h"
#include <string.h>

/**
 * check_format - check format if exist or not
 * @special: character to check
 * @types: list of arguments we have
 *
 * Return: 1 for exist, otherwise 0
*/

int check_format(const char special, va_list types)
{
	int is_exist = 0;
	char *str;

	switch (special)
	{
		case 'c':
			printf("%c", va_arg(types, int));
			is_exist = 1;
			break;
		case 'i':
			printf("%i", va_arg(types, int));
			is_exist = 1;
			break;
		case 'f':
			printf("%f", va_arg(types, double));
			is_exist = 1;
			break;
		case 's':
			str = va_arg(types, char *);
			if (!str)
			{
				printf("(nil)");
				return (1);
			}
			printf("%s", str);
			is_exist = 1;
			break;
	}
	return (is_exist);
}

/**
 * print_all - prints anything like printf
 * @format: special string with formats
 *
 * Return: None
*/

void print_all(const char *const format, ...)
{
	int i = 0, is_exist, size = strlen(format);
	va_list types;

	va_start(types, format);
	while (format[i] && format)
	{
		is_exist = check_format(format[i], types);
		if (is_exist && i != size - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
