#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple 2 number pass by options
 * @argc: length of options
 * @argv: list of options
 *
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
if (argc - 1 != 2)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
