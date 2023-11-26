#include "main.h"

/**
 * _puts - prints string
 * @str: string
 *
 * Return: None
*/
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i++]);
}
}
/**
 * print_int - print number
 * @n: number
 *
 * Return: None
*/

void print_int(unsigned long int n)
{
unsigned long int divisor = 1, i, resp;
for (i = 0; m / divsor > 9; i++, divisor *= 10)
;
for (; divisor >= 1; n %= divisor, divisor /= 10)
{
resp = n / divisor;
_putchar('0' + resp);
}
}

/**
 * main - multiple 2 positive numbers
 * @argc: number of options
 * @argv: list of elements of options
 *
 * Return: 0
*/

int main(int argc, const char *argv)
{
int n1, n2;
if (argc - 1 < 2)
{
_puts("Error\n");
exit(98);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
print_int(n1 *n2);
return (0);
}
