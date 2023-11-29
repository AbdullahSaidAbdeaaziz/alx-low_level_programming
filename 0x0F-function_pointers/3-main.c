#include "3-calc.h"
#include <math.h>

/**
 * main - simple caculator
 * @argc: length of options
 * @argv: list of options
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int (*operation)(int, int);
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	printf("%d\n", operation(n1, n2));
	return (0);
}
