#include "main.h"
#include <stdlib.h>

/**
 * main - say my name
 * @argc: length of options
 * @argv: list of options
 * pass to program
 *
 * Return: 1 success
*/

int main(int argc, char **argv)
{
(void) argc;
printf("%s\n", argv[0]);
return (1);
}
