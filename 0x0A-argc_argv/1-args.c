#include <stdio.h>

/**
 * main - print length of options
 * @argc: length of options
 * @argv: list of options
 *
 *
 * Return: 1 success
 */

int main(int argc, char *argv[])
{
int i, no_options = 0;
(void)argc;
for (i = 1; i < argc; i++)
{
if (argv[i] != NULL)
{
no_options += 1;
}
}
printf("%d\n", no_options);
return (1);
}
