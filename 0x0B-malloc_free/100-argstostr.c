#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: length of options argument
 * @av: list of options argument
 *
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
char *result;
int i, j, k, len = ac;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;

result = malloc(sizeof(char) * (len + 1));

if (result == NULL)
return (NULL);

k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
result[k++] = av[i][j];

result[k++] = '\n';
}

result[k] = '\0';

return (result);
}
