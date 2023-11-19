#include <stdio.h>

/**
 * main - print list of options
 * @argc: length of options
 * @argv: list of options
 *
 *
 * Return: 1 success
 */

int main(int argc, char *argv[])
{
int i;
(void)argc;
i = 0;
while(argv[i] != NULL)
{
printf("%s\n", argv[i]);
i += 1
}
return (1);
}
