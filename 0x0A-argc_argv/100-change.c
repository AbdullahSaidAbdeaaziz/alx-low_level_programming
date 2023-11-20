#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change
 * for an amount of money.
 * @argc: length of options
 * @argv: list of options
 *
 *
 * Return: 1 success
 */

int main(int argc, char *argv[])
{
int cents = atoi(argv[1]);
int i, money = 0;
int cents_values[] = {25, 10, 5, 2, 1};
if (argc == 1)
{
return (printf("Error\n"), 1);
}
if (cents < 0)
{
return (printf("0\n"), 0);
}
for (i = 0; i < 5; i++)
{
if (cents >= cents_values[i])
{
money += cents / cents_values[i];
cents %= cents_values[i];
if (cents % cents_values[i] == 0)
{
break;
}
}
}
printf("%d\n", money);

return (0);
}
