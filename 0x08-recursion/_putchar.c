#include "main.h"
#include <unistd.h>

/**
 * _putchar - print character in stdout
 *
 * Description: Show only one character on stdout.
 * @c: character
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
