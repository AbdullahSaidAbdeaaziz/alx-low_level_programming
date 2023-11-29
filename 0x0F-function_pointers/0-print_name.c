#include "function_pointers.h"

/**
 * print_name - print name using function pointer
 * @name: name of someone
 * @f: function pointer with string.
 *
 * Return: None
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
