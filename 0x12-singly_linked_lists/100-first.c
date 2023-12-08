#include <stdio.h>

/**
 * print_before_main - made this entry
 * point before main function
 * Return: None
*/

void __attribute__((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
